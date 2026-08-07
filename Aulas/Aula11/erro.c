#include <stdio.h>

int nsei(int v[], int inicio, int fim) {
    int pivo = v[fim];
    int i = inicio - 1;

    for (int j = inicio; j < fim; j++) {
        if (v[j] <= pivo) {
            i++;
            int temp = v[i];
            v[i] = v[j];
            v[j] = temp;
        }
    }
    int temp = v[i + 1];
    v[i + 1] = v[fim];
    v[fim] = temp;

    printf("Vetor atual: ");
    for (int k = 0; k < 7; k++) {
        printf("%d ", v[k]);
    }
    printf("\n");

    return i + 1;
}

void quicksort(int v[], int inicio, int fim) {
    if (inicio < fim) {
        int p = nsei(v, inicio, fim);
        quicksort(v, inicio, p - 1);
        quicksort(v, p + 1, fim);
    }
}

int main() {

    int v[] = {33, 15, 10, 45, 20, 8, 50};
    int a = 7;

    printf("Antes: ");
    for (int i = 0; i < a; i++) 
    {
        printf("%d ", v[i]);
    printf("\n\nPasso a Passo:\n");}

    quicksort(v, 0, a - 1);

    printf("\nDepois: ");
    for (int i = 0; i < a; i++) {
        printf("%d ", v[i]);
    }

    printf("\n");

    return 0;
}