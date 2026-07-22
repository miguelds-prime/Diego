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

   for(int i=a; i>0; i--){
         printf("%d", i);

         if(i>1){
            printf("+");
         }
   }
   printf("=%d", soma(a));
}