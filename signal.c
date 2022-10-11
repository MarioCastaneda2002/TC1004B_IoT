#include <stdio.h>
#include <signal.h>
#include <unistd.h>

int con;
void holaMundo(int signalNumber){
    if (signalNumber==10){
        printf("Es la señal 10\n");
    }
    else {
        printf("Es otra señal\n");
    }
    con=2;
}
void nomematas(int sig){
    printf("jaja no me matas\n");
}
int main() {
    signal(12,holaMundo);  // cuando reciba la señal 12 se activa, se puede cambiar esta señal menos la 9(kill)
    signal(10,holaMundo);
    signal(2,nomematas);
    con=1;
    while(con==1){ // siempre estara trabajando
        printf("Estoy trabajando\n");
        sleep(1);
    } 
    printf("Nunca llega\n");
    return 0;
}