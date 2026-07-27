#include <stdio.h>

int Linear(int v[], int n, int a, int *comparacoes) {
    *comparacoes = 0;
    for (int i = 0; i < n; i++) {
        (*comparacoes)++;
        if (v[i] == a) return i;
    }
    return -1;
}

int Binaria(int v[], int n, int a, int *comparacoes) {
    int baixo = 0, alto = n - 1;
    *comparacoes = 0;

    while (baixo <= alto) {
        int meio = (baixo + alto) / 2;
        (*comparacoes)++;
        
        if (v[meio] == a) return meio;
        if (v[meio] < a) baixo = meio + 1;
        else alto = meio - 1;
    }
    return -1;
}

int main() {
    int v[30];
    for (int i = 0; i < 30; i++) v[i] = (i + 1) * 2;
    
    int alvo = 60;
    int compLinear = 0, compBinaria = 0;

    Linear(v, 30, alvo, &compLinear);
    Binaria(v, 30, alvo, &compBinaria);

    printf("Busca Linear no ultimo elemento: %d comparacoes\n", compLinear);
    printf("Busca Binaria no ultimo elemento: %d comparacoes\n", compBinaria);

    return 0;
}