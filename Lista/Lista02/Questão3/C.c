#include <stdio.h>

int ehPalindromo(char s[], int ini, int fim){
    if (ini >= fim) {
        return 1;
    }
    
    if (s[ini] != s[fim]) {
        return 0;
    }
    
    return ehPalindromo(s, ini + 1, fim - 1);
}

int main(){

    char pal[50];
    printf("qual a palavra? ");
    scanf("%s", pal);

    int t = 0;
    while (pal[t] != '\0') {
        t++;
    }
    
    int resultado = ehPalindromo(pal, 0, t - 1);

    if (resultado == 1) {
        printf("A palavra \"%s\" e um palindromo!\n", pal);
    } else {
        printf("A palavra \"%s\" nao e um palindromo.\n", pal);
    }

    return 0;
}