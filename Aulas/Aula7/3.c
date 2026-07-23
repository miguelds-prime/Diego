#include <stdio.h>

int potencia(int b, int exp){
    int r = 1;
    for (int i = 0; i < exp; i++){
        r = r*b;
    }
    return r;
}

int fatorial(int n) {
    int r=1;
    for (int i=1; i<=n; i++){
        r=r*i;
    }
    return r;
}

int ehprimo (int n){
    if (n <= 1) return 0;
        for (int i=2; i < n; i++){
            if (n % i == 0) return 0;
        }
    return 1;
}

int main (){
    
    int num;

    printf ("Digite um número inteiro");
    scanf("%d", &num);

    printf("\nRESULTADOS\n");
    printf("Quadrado (%d^2): %d\n", num, potencia (num, 2));
    printf("Fatorial (%d!): %d\n", num, fatorial (num));

    if (ehprimo(num)){
        printf ("É Primo\n");
    } else {
        printf ("Não é Primo\n");
    }
}