#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int cond;
void hola(int signalNumb){
    printf("Recibi la señal %d \n" , signalNumb);
    cond = 2;
}

int main(){
    cond = 1;
    signal(12,hola);
    
    while(cond == 1){ //while infinito
        printf("\nTrabajando\n");
        sleep(1);
    }
    printf("\nAquí nunca llega\n");
    return 0;
}