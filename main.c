#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include "interpreter.tab.h" // Bison-generated header file

// Function declarations
int yyparse(void);
extern FILE *yyin;

void execute_script(const char *filename) {
    FILE *file = fopen(filename, "r");
    if (file == NULL) {
        perror("Error opening file");
        return;
    }
    yyin = file;
    yyparse(); // Parse and execute the script
    printf("Exit script!\n");
    fclose(file);
}

int main() {
    char *input; // Buffer for user input

    printf("Welcome to the Interpreter. Type 'run <script>' to execute a script, or 'exit' to quit.\n");

    while (1) {
        printf("> "); // Prompt

        input = (char*)calloc(256, sizeof(char));

        if (fgets(input, 256, stdin) == NULL) {
                printf("Error reading input");
        }

        //scanf("%s", input);

        input[strcspn(input, "\n")] = 0; // Remove newline character

        if (strcmp(input, "exit") == 0) {
                break;
        } 

        else if (strncmp(input, "run ", 4) == 0){
            execute_script(input + 4);
        }

        else{
            yyparse(); // Parse and execute the command
        }
        printf("Prepare to go in while '%s'\n", input);
        free(input);
        printf("After free\n");
    }
    return 0;
}

int yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    //memset(s, '\0', strlen(s));
    return 1;
}
