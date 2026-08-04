#include <stdio.h>

int buscaBinaria(int v[], int n, int alvo) {
    
    int inicio = 0;
    int fim = n - 1;

    while (inicio <= fim) {
        int meio = inicio + (fim - inicio) / 2;

        if (v[meio] == alvo) {
            return meio;
        }

        if (alvo < v[meio]) {
            fim = meio - 1; 
        } else {
            inicio = meio + 1; 
        }
    }

    return -1; 
}

int main() {

    int n;
    printf("Digite a quantidade de números: ");
    scanf("%d", &n);

    int v[n];

    printf("Digite os %d números em ordem crescente:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);

        if (i > 0) {
            if (v[i] < v[i-1]) {
                printf("ordem crescente errada");
                return 1;
            }

            if (v[i] == v[i-1]) {
                printf("número repetido");
                return 1;
            }
        }
    }

    int alvo;
    printf("\nDigite o valor do alvo que deseja buscar: ");
    scanf("%d", &alvo);

    int resultado = buscaBinaria(v, n, alvo);

    if (resultado != -1) {
        printf("\nO alvo %d esta no indice %d.\n", alvo, resultado);
    } else {
        printf("\nO alvo %d nao esta no vetor.\n", alvo, resultado);
    }
}