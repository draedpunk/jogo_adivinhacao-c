// tabuada

#include <stdio.h>

int main(){
    int num;
    printf("Informe um numero inteiro: ");
    scanf("%d", &num);

    printf("Tabuada do %d\n", num);
    for (int i = 1; i<=10; i++){
        int r = i * num;
        printf("%d x %d = %d\n", i, num, r);
    }

    return 0;
}