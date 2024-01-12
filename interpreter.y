%{
    #include "interpreter.h"
    int yylex();
    int yyerror(const char *msg);
    int EsteCorecta = 1;
    char msg[500];
%}

%union {
    char* sir; 
    int val_int;
    float val_float;
    double val_double;
}

%token TOK_PLUS TOK_MINUS TOK_MULTIPLY TOK_DIVIDE TOK_LEFT TOK_RIGHT TOK_PRINT TOK_ERROR TOK_SCAN
%token TOK_DECLARE

%token <val_int> TOK_INT
%token <val_double> TOK_DOUBLE
%token <val_float> TOK_FLOAT

%token <sir> TOK_VARIABLE
%type <val_double> E

%start S
%left TOK_PLUS TOK_MINUS
%left TOK_MULTIPLY TOK_DIVIDE

%%
S : 
    | I ';' S
    | TOK_ERROR { EsteCorecta = 0; }
    ;

I : TOK_VARIABLE '=' E
{
    if(ts != NULL)
    {
        if(ts->exists($1) == 1)
        {
            ts->setValue($1, $3);
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $1);
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $1);
        yyerror(msg);
        YYERROR;
    }
        
}

| TOK_DECLARE TOK_VARIABLE '=' E
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            ts->setValue($2, $4);
        }
        else
        {
            ts->add($2);
            ts->setValue($2, $4);
        }
    }
    else
    {
        ts = new TVAR();
        ts->add($2);
        ts->setValue($2, $4);
    }
        
}

| TOK_DECLARE TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 0)
        {
            ts->add($2);
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Declaratii multiple pentru variabila %s!", @1.first_line, @1.first_column, $2);
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        ts = new TVAR();
        ts->add($2);
    }
}

| TOK_PRINT TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            if(ts->getValue($2) == -1)
            {
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost initializata!", @1.first_line, @1.first_column, $2);
                yyerror(msg);
                YYERROR;
            }
            else
            {
                printf("%f\n", (float)ts->getValue($2));
            }
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $2);
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $2);
        yyerror(msg);
        YYERROR;
    }
}

| TOK_SCAN TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            double a;
            printf("Introduceti numarul: ");
            scanf("%lf", &a);
            ts->setValue($2, a);
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $2);
            yyerror(msg);
            YYERROR;
        }
    }
    else
    {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $2);
        yyerror(msg);
        YYERROR;
    }
}

;
E : E TOK_PLUS E { $$ = $1 + $3; }
| E TOK_MINUS E { $$ = $1 - $3; }
| E TOK_MULTIPLY E { $$ = $1 * $3; }
| E TOK_DIVIDE E 
{
    if($3 == 0)
    {
        sprintf(msg,"%d:%d Eroare semantica: Impartire la zero!", @1.first_line, @1.first_column);
        yyerror(msg);
        YYERROR;
    } 
    else
    { 
        $$ = $1 / $3; 
    } 
}
| TOK_LEFT E TOK_RIGHT { $$ = $2; }
| TOK_INT { $$ = $1; }
| TOK_DOUBLE { $$ = $1; }
| TOK_FLOAT { $$ = $1; }
;
%%

int main()
{
    yyparse();

    //if(EsteCorecta == 1)
    //{
        //cout<<"CORECT\n"; 
    //} 
    
    ts->printVars();
    return 0;
}
    
int yyerror(const char *msg)
{
    cout<<"EROARE: "<<msg<<endl; 
    return 1;
}
