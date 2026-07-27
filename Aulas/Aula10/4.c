#include <stdio.h>

int main() {

    int b = 1;
    int a = 100;
    char r;
    int p = 0;

    printf("Pense em um numero de 1 a 100!\n");
    printf("Responda com:\n '=' se acertei\n '>' se o seu numero for MAIOR que o palpite\n '<' se for MENOR\n\n");

    while (b <= a) {
        int palpite = (b + a) / 2;
        p++;

        printf("Palpite %d: O seu numero e %d? (= / > / <): ", p, palpite);
        scanf(" %c", &r);

        if (r == '=') {
            printf("Achei o numero %d em apenas %d palpites!\n", palpite, p);
            break;
        } else if (r == '>') {
            b = palpite + 1;
        } else if (r == '<') {
            a = palpite - 1;
        }
    }

    return 0;
}