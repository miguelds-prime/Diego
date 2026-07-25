#include <stdio.h>

int somaVetor(int v[], int n) {
    if (n == 0) {
        return 0;
    }
    return v[0] + somaVetor(v + 1, n - 1);
}

int main() {
    int v[5];
    int somaf = 0;

    printf("Digite 5 numeros inteiros:\n");
    for (int i = 0; i < 5; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
        somaf += v[i];
    }

    int soma = somaVetor(v, 5);

    printf("\nResultados\n");
    printf("Soma com for: %d\n\n", somaf);
    printf("Soma recursiva:\n%d\n", soma);

    if(soma == somaf){
        printf("\nOBS: Não mudou nada\n");
    }
}