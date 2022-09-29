#include <unistd.h>
#include <stdio.h>
#include <sys/wait.h>

int main(){
    int pid = fork();//Process id - 0 = hijo

    if (pid == 0){
        printf("Soy el proceso hijo\n");
        execl("hola.exe", "hola.exe", NULL);
        sleep(5);
        printf("nunca nunca nunca");
    } else
    {
        printf("Soy el proceso padre\n");
        wait(NULL);
        }
        return 0;
    };
