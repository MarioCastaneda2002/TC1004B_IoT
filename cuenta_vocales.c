#include <stdio.h>
#include <ctype.h>
#include <unistd.h>
int main(){
    char c, may;
    int vowels = 0, n=0;
    do {
        n = read(STDIN_FILENO,&c,1);
        may = toupper(c);
        if(may=='A' || may=='E' || may=='I' || may=='O' || may=='U'){
            vowels+=1;
        }
    }
    while( n != 0);
    printf("Total de vocales: %d \n",vowels);
    return 0;
}
