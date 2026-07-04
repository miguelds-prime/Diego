#include <stdio.h>

int soma (int n) {

    if (n==0){
        return 0;
    }

    return n + soma(n-1);
}

int main() {

   int a;
   scanf("%d", &a);

   if ((a>=0)){

    int r = soma(a);
    printf ("%d\n", r);
   }
}