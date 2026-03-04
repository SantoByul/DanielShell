//gcc shell.c -o shell

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    char comando[1024];

    while (1){
        printf("DanielShell> ");
        fgets(comando,sizeof(comando),stdin);y

        comando[strcspn(comando,"\n")] = 0;

        system(comando);
    }
    return 0;
}