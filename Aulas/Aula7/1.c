#include <stdio.h>

float soma (float a, float b) {
    return a + b;
}

float sub (float a, float b) {
    return a - b;
}

float mult (float a, float b) {
    return a * b;
}

float divi (float a, float b) {
    if (b==0){
        printf ("Impossível dividir por 0");
        return 0;
    }
    return a / b;
}


int main() {

    float a;
    float b;

    printf("Primeiro número:");
    scanf("%f", &a);
    printf("Segundo número:");
    scanf("%f", &b);

    printf("Resultados:\n");
    printf("Soma: %.2f\n", soma(a, b));
    printf("Subtração: %.2f\n", sub(a, b));
    printf("Multiplicação: %.2f\n", mult(a, b));

    if (b=!0){
        printf("Divisão: %.2f\n", divi(a, b));
    }

}