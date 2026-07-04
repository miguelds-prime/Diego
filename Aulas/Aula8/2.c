 #include <stdio.h>

 int pot (int b, int exp) {

    if (exp==0){
        return 1;
    }

    return b*pot(b, exp-1);
}

int main() {
    
int b2;
int exp2;

scanf ("%d", &b2);
scanf ("%d", &exp2);

printf("Resultado: %d\n", pot(b2, exp2));
}