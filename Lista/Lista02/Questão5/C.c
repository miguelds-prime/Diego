#include <stdio.h>

int buscaBinariaRec(int v[], int ini, int fim, int alvo) {
    if (ini > fim) {
        return -1;
    }

    int meio = ini + (fim - ini) / 2;

    if (v[meio] == alvo) {
        return meio;
    }

    if (alvo < v[meio]) {
        return buscaBinariaRec(v, ini, meio - 1, alvo);
    } 

    else {
        return buscaBinariaRec(v, meio + 1, fim, alvo);
    }
}

int main() {

    int n;
    printf("Digite a quantidade de numeros: ");
    scanf("%d", &n);

    int v[n];

    printf("Digite os %d numeros em ordem crescente:\n", n);
    for (int i = 0; i < n; i++) {
        printf("v[%d]: ", i);
        scanf("%d", &v[i]);

        if (i > 0) {
            if (v[i] < v[i-1]) {
                printf("ordem crescente errada");
                return 1;
            }

            if (v[i] == v[i-1]) {
                printf("numero repetido");
                return 1;
            }
        }
    }

    int alvo;
    printf("Digite o valor do alvo que deseja buscar: ");
    scanf("%d", &alvo);

    int r = buscaBinariaRec(v, 0, n - 1, alvo);

    if (r != -1) {
        printf("\nO alvo %d foi encontrado no indice %d.\n", alvo, r);
    } else {
        printf("\nO alvo %d nao esta no vetor.\n", alvo, r);
    }

    return 0;
}