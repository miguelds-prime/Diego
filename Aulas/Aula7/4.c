#include <stdio.h>

void ImprimirMenu();
float CalcularMedia (float a, float b, float c);
int potencia (int base, int exp);
int eprimo(int d);

int main(){

    int v = -1;

    while (v != 0){
        ImprimirMenu();
        scanf("%d", &v);

        switch (v) {

            case 1: {
                float a, b, c;
                printf ("Digite as 3 notas");
                scanf("%f %f %f", &a, &b, &c);
                printf("\nMedia: %.2f\n", CalcularMedia (a, b, c));
                break;
            }

            case 2: {
                int n;
                printf("Digite um número inteiro: ");
                scanf("%d", &n);

                if (eprimo(n)) {
                    printf ("O número %d é primo.\n", n);
                } else { 
                    printf ("O número %d não é primo.\n", n);
                }
                break;
            }

            case 3: {

                int base, exp;
                printf("Digite a base e depois o expoente\n");
                scanf("%d %d", &base, &exp);

                printf ("%d^%d = %d\n", base, exp, potencia(base, exp));
                break;
            }

            case 0: {

            printf ("Saindo do Programa\n");
            break;

            default:
            printf("Invalido! Tente novamente.\n");
            }

        }
        return 0;
    }
}


    void ImprimirMenu(){
        printf("=== CALCULADORA ===\n");
        printf("1. Calcular media de 3 notas\n");
        printf("2. Verificar se número é primo\n");
        printf("3. Calcular Potencia\n");
        printf("0. Sair\n");
        printf("Opcao: ");
    }

    float CalcularMedia(float a, float b, float c){
        return (a+b+c)/3;
    }

    int potencia(int base, int exp){
        int r=1;
        for (int i=0; i < exp; i++) r=r*base;
        return r;
    }

    int eprimo(int n){
        if (n <= 1) return 0;
        for (int i=2; i < n; i++){
            if (n % i == 0) return 0;
        }
        return 1;
    }