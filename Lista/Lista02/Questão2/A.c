#include <stdio.h>

int fatorial(int n) {
    if (n <= 1) {
        return 1;
    }

    return n * fatorial(n - 1);
}

int main() {
    
    int a;

    printf("Digite um numero: ");
    scanf("%d", &a);

        printf("O fatorial de %d e: %d\n", a, fatorial(a));
}