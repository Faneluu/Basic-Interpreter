%option noyywrap
%{
    #include "interpreter.tab.h"
    int lineNo = 1;
    int colNo = 1;
%}
%%
"+"                     { colNo++; return TOK_PLUS; }
"-"                     { colNo++; return TOK_MINUS; }
"*"                     { colNo++; return TOK_MULTIPLY; }
"/"                     { colNo++; return TOK_DIVIDE; }
"("                     { colNo++; return TOK_LEFT; }
")"                     { colNo++; return TOK_RIGHT; }
";"                     { colNo++; return ';'; }
"="                     { colNo++; return '='; }
                        
[0-9]+\.[0-9]*          {
                                        printf("Find double in FLEX!\n");
                                        yylloc.first_line = lineNo;
                                        yylloc.first_column = colNo;
                                        colNo += strlen(yytext);
                                        yylval.val_double = atof(yytext);
                                        return TOK_DOUBLE;
                                    }

[0-9]+\.[0-9]*f   {
                                        printf("Find float in FLEX!\n");
                                        yylloc.first_line = lineNo;
                                        yylloc.first_column = colNo;
                                        colNo += strlen(yytext);
                                        yylval.val_float = atof(yytext);
                                        return TOK_FLOAT;
                                    }

0|[1-9][0-9]*           { 
                            printf("Find integer in FLEX!\n");
                            yylloc.first_line = lineNo; 
                            yylloc.first_column = colNo; 
                            colNo+=strlen(yytext); 
                            yylval.val_int = atoi(yytext); 
                            return TOK_INT; 
                        }

"int"                   { colNo+=3; return TOK_DECLARE_INT; }
"double"                { colNo += 6; return TOK_DECLARE_DOUBLE; }
"float"                 { colNo += 5; return TOK_DECLARE_FLOAT; }

"print"                 { colNo+=5; return TOK_PRINT; }
"scan"                  { colNo+=4; return TOK_SCAN;  }

[a-zA-Z][a-zA-Z0-9]*    { 
                            yylloc.first_line = lineNo; 
                            yylloc.first_column = colNo; 
                            colNo+=strlen(yytext); 
                            yylval.sir = new char[strlen(yytext)+1]; 
                            strcpy(yylval.sir,yytext); 
                            return TOK_VARIABLE;
                        }

[ ]                     { colNo++; }
\r\n                    { lineNo++; colNo=1; }
\n                      { lineNo++; colNo=1; }
.                       { colNo++; return TOK_ERROR; }
%%