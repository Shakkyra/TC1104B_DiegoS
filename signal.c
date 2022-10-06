#include <stdio.h>
#include <signal.h>
#include <unistd.h>
int i = 1;
void hola(int signalNumb){
    printf("Recibi la señal %d \n" , signalNumb);
    i = 2;
}

int main(){
    signal(12,hola);
    
    while(cond == 1){ //while infinito
        printf("\nTrabajando\n");
        sleep(1);
    }
    printf("Aquí nunca llega");
    return 0;
}