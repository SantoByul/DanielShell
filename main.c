//gcc DanielShell/main.c -o main 
//Lembrar do fork() exec() wait() dup2() pipe()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

void lsh_loop(void);
char* lsh_read_line(void);
char** lsh_split_line(char *line);
int status_lsh_execute(char **args);

void lsh_loop(void){
    char *line;
    char **args;
    int status;

    do{
        printf("DanielShell> ");

        line=lsh_read_line();
        args=lsh_split_line(line);
        status=status_lsh_execute(args);

        free(line);
        free(args);
    }while(status);
}

char* lsh_read_line(void){
    return NULL;
}

char** lsh_split_line(char *line){
    return NULL;
}

int status_lsh_execute(char **args){
    return 0;
}

int main(int argc, char **argv){

    lsh_loop();
    return EXIT_SUCCESS;
}