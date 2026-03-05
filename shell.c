//gcc shell.c -o shell

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

#define MAX 1024
#define MAX_ARGS 100

int main(){
    char linha[MAX];
    char *args[MAX_ARGS];

    while(1){
        printf("myshell> ");
        fflush(stdout);

        if(fgets(linha, MAX, stdin) == NULL)
            break;

        linha[strcspn(linha, "\n")] = 0;

        if(strcmp(linha, "exit") == 0)
            break;

        int i = 0;
        char *token = strtok(linha, " ");
        while(token != NULL && i < MAX_ARGS - 1){
            args[i++] = token;
            token = strtok(NULL, " ");
        }
        args[i] = NULL;

        pid_t pid = fork();

        if(pid == 0){
            execvp(args[0], args);
            perror("erro");
            exit(1);
        } 
        else if(pid > 0){
            wait(NULL);
        } 
        else{
            perror("fork falhou");
        }
    }

    return 0;
}