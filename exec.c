#include <stdio.h>
#include <unistd.h>

int main(){
    printf("Prueba\n");
    int pid =fork();

    if (pid == 0){
        printf("Soy el proceso hijo y me voy a convertir en ls\n");
        execl("/workspace/TC1004B_IoT/hola", "hola", NULL);
        printf("Esto no puede ejecutarse");
    }
    else {
        printf("Soy el proceso padre\n");    }
    return 0;
}