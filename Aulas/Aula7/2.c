#include <stdio.h>

float CalcularMedia (float a, float b, float c) {
    return (a+b+c)/3;
}

float DefinirConceito (float media) {
    if (media >=9) return 'A';
    if (media >=7) return 'B';
    if (media >=5) return 'C';
    return 'D';
}

float ImprimirSituacao (char nome [], float media, char conceito) {
    printf ("%-15s | Media: %5.2f | Conceito %c\n", nome, media, conceito);
}

int main () {
    for (int i = 1; i <= 3; i++){

        char nome[50];
        float a, b, c;

        printf ("\n  Aluno %d   \n", i);
        printf ("Aluno: ");
        scanf ("%s", nome);
        printf ("Qual a primeira nota?\n");
        scanf ("%f", &a);
        printf ("Qual a segunda nota?\n");
        scanf ("%f", &b);
        printf ("Qual a terceira nota?\n");
        scanf ("%f", &c);

        float med = CalcularMedia (a, b, c);
        char con = DefinirConceito (med);

        printf ("\nSituação:\n");
        ImprimirSituacao (nome, med, con);

    }
}