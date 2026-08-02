#include <stdio.h>

int somaVetor(int v[], int n) {
    // Caso-base: vetor vazio
    if (n <= 0) {
        return 0;
    }
    
    return v[0] + somaVetor(v + 1, n - 1);
}

int main() {

    int a;

    printf("Digite a quantidade de números: ");
    scanf("%d", &a);

    if (a <= 0) {
        printf("A quantidade de elementos deve ser maior que zero.\n");
    }

    int v[a];

    printf("Digite os %d numeros do vetor:\n", a);
    for (int i = 0; i < a; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    int r = somaVetor(v, a);
    printf("\nA soma de todos os elementos e: %d\n", r);

    return 0;
}