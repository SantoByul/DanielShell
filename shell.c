//gcc shell.c -o shell

#include <stdio.h>
#include <string.h>
#include <stdlib.h>
#include <unistd.h>

int main(){
    pid_t pid_code;
    int n=20;

    pid_code = fork();

    if(pid_code < 0){
        printf("Ish rapaz deu erro");
        exit();
    }else if(pid_code==0){
        n=10;
        printf("n-filho =%d\n",n);
    }else if(pid_code>0){
        printf("n-pai =%d\n",n);
    }
    return 0;
}