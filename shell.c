//gcc shell.c -o shell

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>

int main(){
    char comando[100];

    while(1){
        printf("myshell> ");
        fflush(stdout);

        if(fgets(comando, sizeof(comando), stdin) == NULL)
            break;

        comando[strcspn(comando, "\n")] = 0;

        if(strcmp(comando, "exit") == 0)
            break;

        if(strcmp(comando, "hello") == 0){
            printf("hello world\n");
        } else {
            printf("comando nao reconhecido\n");
        }
    }

    return 0;
}