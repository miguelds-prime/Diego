#include <stdio.h>

int maiorElemento(int v[], int n) {
    if (n == 1) {
        return v[0];
    }
    
    int maior = maiorElemento(v + 1, n - 1);
    
    if (v[0] > maior) {
        return v[0];
    } else {
        return maior;
    }
}

int main() {

    int n;
    
    printf("Quantos números são? ");
    scanf("%d", &n);

    if (n <= 0) {
        printf("Sem números, sem número maior\n");
        return 1;
    }

    int v[n];

    printf("Digite os %d números:\n", n);
    for (int i = 0; i < n; i++) {
        printf("Elemento %d: ", i + 1);
        scanf("%d", &v[i]);
    }

    printf("\nMaior elemento: %d\n", maiorElemento(v, n));
    
    return 0;
}