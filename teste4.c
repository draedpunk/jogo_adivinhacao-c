#include <stdio.h>

// Propriedades dadivisao Euclidiana
// X = nQ - R
int main() {
    for (int x = 10; x <= 20; x++) {
        printf("X = %d, resto de X/5 = %d\n", x, x % 5);
    }
    return 0;
}