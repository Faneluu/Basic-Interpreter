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
    fclose(file);
}

int main() {
    char input[256]; // Buffer for user input

    //printf("Welcome to the Interpreter. Type 'run <script>' to execute a script, or 'exit' to quit.\n");

    while (1) {
        printf("> "); // Prompt
        printf("Want to run a script? [y/n]\n");
        //fflush(stdout);

        if (fgets(input, sizeof(input), stdin) == NULL) {
            if (feof(stdin)) {
                printf("\nExiting...\n");
                break;
            } else {
                perror("Error reading input");
                continue;
            }
        }

        input[strcspn(input, "\n")] = 0; // Remove newline character


        if (strcmp(input, "y") == 0){
            printf("run ");
            memset(input, '\0', strlen(input));
            
            if (fgets(input, sizeof(input), stdin) == NULL) {
                if (feof(stdin)) {
                    printf("\nExiting...\n");
                    break;
                } else {
                    perror("Error reading input");
                    continue;
                }
            }

            input[strcspn(input, "\n")] = 0; // Remove newline character

            execute_script(input);
        }

        else if (strcmp(input, "n") == 0){
            if (strcmp(input, "exit") == 0) {
                break;
            } 
            else {
                yyparse(); // Parse and execute the command
            }
        }

        else 
            printf("Invalid option!\n");

        memset(input, '\0', strlen(input));
    }

    

    return 0;
}

int yyerror(const char *s) {
    fprintf(stderr, "Error: %s\n", s);
    //memset(s, '\0', strlen(s));
    return 1;
}
