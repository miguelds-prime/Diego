#include <stdio.h>

int somaDigitos(int n) {
    if (n == 0) {
        return 0;
    }

    return (n % 10) + somaDigitos(n / 10);
}

int main() {

    int a;
    printf("Qual o número? \n");
    scanf("%d", &a);

    printf("Soma dos digitos de %d: \n%d\n", a, somaDigitos(a));
    return 0;
}