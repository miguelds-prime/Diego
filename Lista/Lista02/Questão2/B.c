#include <stdio.h>

int fatorial(int n) {
    if (n == 0 ) {
        return 0;
    }
    if (n == 1 ) {
        return 1;
    }
    return n * fatorial(n - 1);
}

int main() {

    int a;
    printf("Digite um numero inteiro positivo: ");
    scanf("%d", &a);

    if (a < 0) {
        printf("Nao existe fatorial de numero negativo.\n");
    } else {
        int r = fatorial(a);
        printf("O fatorial de %d e %d\n", a, r);
    }
}