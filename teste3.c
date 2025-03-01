// Escreva um programa que imprima a soma de todos os números de 1 até 100. 
// Ou seja, ele calculará o resultado de 1+2+3+4+...+100.

#include <stdio.h>

int main(){
    int num = 0;
    int i = 1;

    while (i <= 100){
        num += i;
        i++;
    }
    printf("Valor final: %d\n", num);
    return 0;
}