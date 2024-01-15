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
%token TOK_DECLARE_INT TOK_DECLARE_DOUBLE TOK_DECLARE_FLOAT

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
            ts->setValueDouble($1, $3);
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

// for int
| TOK_DECLARE_INT TOK_VARIABLE '=' E
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            ts->setValueInt($2, $4);
        }
        else
        {
            ts->addInt($2);
            ts->setValueInt($2, $4);
        }
    }
    else
    {
        ts = new TVAR();
        ts->addInt($2);
        ts->setValueInt($2, $4);
    }
        
}

| TOK_DECLARE_INT TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 0)
        {
            ts->addInt($2);
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
        ts->addInt($2);
    }
}

// for double
| TOK_DECLARE_DOUBLE TOK_VARIABLE '=' E
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            ts->setValueDouble($2, $4);
        }
        else
        {
            ts->addDouble($2);
            ts->setValueDouble($2, $4);
        }
    }
    else
    {
        ts = new TVAR();
        ts->addDouble($2);
        ts->setValueDouble($2, $4);
    }
        
}

| TOK_DECLARE_DOUBLE TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 0)
        {
            ts->addDouble($2);
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
        ts->addDouble($2);
    }
}

// for float
| TOK_DECLARE_FLOAT TOK_VARIABLE '=' E
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            ts->setValueFloat($2, $4);
        }
        else
        {
            ts->addFloat($2);
            ts->setValueFloat($2, $4);
        }
    }
    else
    {
        ts = new TVAR();
        ts->addFloat($2);
        ts->setValueFloat($2, $4);
    }
        
}

| TOK_DECLARE_FLOAT TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 0)
        {
            ts->addFloat($2);
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
        ts->addFloat($2);
    }
}

// all
| TOK_PRINT TOK_VARIABLE
{
    if(ts != NULL)
    {
        if(ts->exists($2) == 1)
        {
            if(ts->getValueInt($2) != -1)
            {
                printf("%d\n", ts->getValueInt($2));
            }
            else if(ts->getValueDouble($2) != -1)
            {
                printf("%f\n", ts->getValueDouble($2));
            }
            else if(ts->getValueFloat($2) != -1)
            {
                printf("%f\n", ts->getValueFloat($2));
            }
            else
            {
                
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost initializata!", @1.first_line, @1.first_column, $2);
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
            if(ts->checkIsInt($2)){
                int a;
                printf("Introduceti numarul: ");
                scanf("%d", &a);
                ts->setValueInt($2, a);
            }

            else if(ts->checkIsDouble($2)){
                double a;
                printf("Introduceti numarul: ");
                scanf("%lf", &a);
                ts->setValueDouble($2, a);
            }

            else if(ts->checkIsFloat($2)){
                float a;
                printf("Introduceti numarul: ");
                scanf("%f", &a);
                ts->setValueFloat($2, a);
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
    printf("Finish scan!\n");
}

// convert to int
| TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_INT TOK_RIGHT TOK_VARIABLE
{
    if (ts != NULL){
        printf("Convert to int!\n");
        if(ts->checkIsInt($1)){
            if (ts->checkIsInt($6)){
                ts->setValueInt($1, ts->getValueInt($6));
            }
            else if (ts->checkIsDouble($6)){
                ts->setValueInt($1, (int)ts->getValueDouble($6));
            }
            else if (ts->checkIsFloat($6)){
                ts->setValueInt($1, (int)ts->getValueFloat($6));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", @1.first_line, @1.first_column, $6);
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este int!", @1.first_line, @1.first_column, $1);
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $1);
        yyerror(msg);
        YYERROR;
    }
}

| TOK_DECLARE_INT TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_INT TOK_RIGHT TOK_VARIABLE
{
    if (ts != NULL){
        printf("Convert to int!\n");
        if(ts->checkIsInt($2)){
            if (ts->checkIsInt($7)){
                ts->setValueInt($2, ts->getValueInt($7));
            }
            else if (ts->checkIsDouble($7)){
                ts->setValueInt($2, (int)ts->getValueDouble($7));
            }
            else if (ts->checkIsFloat($7)){
                ts->setValueInt($2, (int)ts->getValueFloat($7));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", @1.first_line, @1.first_column, $7);
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este int!", @1.first_line, @1.first_column, $2);
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $2);
        yyerror(msg);
        YYERROR;
    }
}

// convert to double
| TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_DOUBLE TOK_RIGHT TOK_VARIABLE
{
    if (ts != NULL){
        printf("Convert to double!\n");
        if(ts->checkIsDouble($1)){
            if (ts->checkIsInt($6)){
                ts->setValueDouble($1, (double)ts->getValueInt($6));
            }
            else if (ts->checkIsDouble($6)){
                ts->setValueDouble($1, ts->getValueDouble($6));
            }
            else if (ts->checkIsFloat($6)){
                ts->setValueDouble($1, (double)ts->getValueFloat($6));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", @1.first_line, @1.first_column, $6);
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este double!", @1.first_line, @1.first_column, $1);
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $1);
        yyerror(msg);
        YYERROR;
    }
}

| TOK_DECLARE_DOUBLE TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_DOUBLE TOK_RIGHT TOK_VARIABLE
{
    if (ts != NULL){
        printf("Convert to double!\n");
        if(ts->checkIsDouble($2)){
            if (ts->checkIsInt($7)){
                ts->setValueDouble($2, (double)ts->getValueInt($7));
            }
            else if (ts->checkIsDouble($7)){
                ts->setValueDouble($2, ts->getValueDouble($7));
            }
            else if (ts->checkIsFloat($7)){
                ts->setValueDouble($2, (double)ts->getValueFloat($7));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", @1.first_line, @1.first_column, $7);
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este double!", @1.first_line, @1.first_column, $2);
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $2);
        yyerror(msg);
        YYERROR;
    }
}

// convert to float
| TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_FLOAT TOK_RIGHT TOK_VARIABLE
{
    if (ts != NULL){
        printf("Convert to float!\n");
        if(ts->checkIsFloat($1)){
            if (ts->checkIsInt($6)){
                ts->setValueFloat($1, (float)ts->getValueInt($6));
            }
            else if (ts->checkIsDouble($6)){
                ts->setValueFloat($1, (float)ts->getValueDouble($6));
            }
            else if (ts->checkIsFloat($6)){
                ts->setValueFloat($1, ts->getValueFloat($6));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", @1.first_line, @1.first_column, $6);
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este float!", @1.first_line, @1.first_column, $1);
            yyerror(msg);
            YYERROR;
        }

    }
    else {
        sprintf(msg,"%d:%d Eroare semantica: Variabila %s este utilizata fara sa fi fost declarata!", @1.first_line, @1.first_column, $1);
        yyerror(msg);
        YYERROR;
    }
}

| TOK_DECLARE_FLOAT TOK_VARIABLE '=' TOK_LEFT TOK_DECLARE_FLOAT TOK_RIGHT TOK_VARIABLE
{
    if (ts != NULL){
        printf("Convert to float!\n");
        if(ts->checkIsFloat($2)){
            if (ts->checkIsInt($7)){
                ts->setValueFloat($2, (float)ts->getValueInt($7));
            }
            else if (ts->checkIsDouble($7)){
                ts->setValueFloat($2, (float)ts->getValueDouble($7));
            }
            else if (ts->checkIsFloat($7)){
                ts->setValueFloat($2, ts->getValueFloat($7));
            }
            else{
                sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu exista!", @1.first_line, @1.first_column, $7);
                yyerror(msg);
                YYERROR;
            }
        }

        else{
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este float!", @1.first_line, @1.first_column, $2);
            yyerror(msg);
            YYERROR;
        }

    }
    else {
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
| TOK_VARIABLE 
    {
        if(ts != NULL && ts->exists($1))
        {
            if(ts->getValueInt($1) != -1)
                $$ = ts->getValueInt($1);
            else if(ts->getValueDouble($1) != -1)
                $$ = ts->getValueDouble($1);
            else if(ts->getValueFloat($1) != -1)
                $$ = ts->getValueFloat($1);
        }
        else
        {
            sprintf(msg,"%d:%d Eroare semantica: Variabila %s nu este declarata!", @1.first_line, @1.first_column, $1);
            yyerror(msg);
            YYERROR;
        }
    }
;
%%


