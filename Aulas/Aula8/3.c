#include <stdio.h>

void regressiva(int n) {
    if (n == 0) {
        printf("Vai!\n");
    }
    regressiva(n - 1);
}

void progressiva(int n) {
    if (n == 0) {
    }
    progressiva(n - 1);
    printf("%d", n);
}

int main() {

    int a;
    scanf("%d", &a);

    if (a == 0) {
        printf("O número tem que ser maior do que 0\n");
    }
     else {
    
        printf("Contagem Regressiva\n");
        regressiva(a);
        
        printf("Contagem Progressiva\n");
        progressiva(a);
        printf("\n");
    }
}