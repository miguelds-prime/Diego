#include <stdio.h>

int ContarChar (char s[50], int a, char c){

    int contagem=0;
    while(s[a]!=c){
        if (s[a]= c)
        contagem=contagem+1;
    }

    if(contagem==0){
        return 0;
    }

    return c;
}

int main (){
    char pal[50];
    printf("qual a palavra?");
    scanf("%s", pal);

    char l;
    printf("qual a letra");
    scanf("%s", l);

    
}