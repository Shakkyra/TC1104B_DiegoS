#include <unistd.h>
#include <stdio.h>
int main(){
    int pid = fork();//Process id - 0 = hijo

    if (pid == 0){
        printf("Soy el proceso hijo\n");
        sleep(60);
    } else
    {
        printf("Soy el proceso padre\n");
        };
        return 0;
    };
