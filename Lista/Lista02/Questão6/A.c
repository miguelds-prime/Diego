#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0) {
        return 0;
    } // Aqui está o Caso Base
    return v[0] + somaVetor(v + 1, n - 1); 
}

int main() {

    int a;
    printf("Quantos números são?\n");
    scanf("%d", &a);

    int v[a];
    int soma = 0;

    printf("Digite os numeros inteiros:\n");
    

    printf("\nResultado:\n");
    printf("Soma recursiva: %d\n", soma);
}

//inacabada