//gcc shell.c -o shell
//Lembrar do fork() exec() wait() dup2() pipe()

#include <stdio.h>
#include <stdlib.h>
#include <string.h>
#include <unistd.h>
#include <sys/wait.h>

int main(){
    char comand[1024];

    while (1){
        printf("DanielShell> ");
        fgets(comand,1024,stdin);

        comand[strcspn(comand,"\n")]==0


        if(strcmp(comand,"exit\n")==0){
            break;
        }
    }

    return 0;
}