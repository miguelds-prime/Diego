#include <stdio.h>

void inverter(char s[], int ini, int fim) {
    if (ini >= fim) {
        return;
    }

    char temp = s[ini];
    s[ini] = s[fim];
    s[fim] = temp;

    inverter(s, ini + 1, fim - 1);
}

int main() {

    printf("Qual a palvra? \n");
    char str[50];
    scanf("%s", str);

    int t;
    printf("Qual o tamanho da palavra? \n");
    scanf("%d", &t);

    inverter(str, 0, t - 1);
    printf("String invertida: %s\n", str);

    return 0;
}