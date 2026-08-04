#include <stdio.h>

int ContarChar (char s[50], int a, char c){
    int contagem = 0;

    while(s[a] != '\0'){
        if (s[a] == c) {
            contagem = contagem + 1;
        }
        a++;
    }

    return contagem;
}


int main (){

    char pal[50];
    printf("qual a palavra? ");
    scanf("%s", pal);

    char l;
    printf("qual a letra? ");
    scanf(" %c", &l);

    printf("A letra '%c' aparece %d vezes em \"%s\"\n", l, ContarChar(pal, 0, l), pal);

}