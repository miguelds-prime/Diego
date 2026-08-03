#include <stdio.h>

int Fibonacci (int n){
    if(n==0){
        return 0;
    } 
    if(n==1){
        return 1;
    }

    return Fibonacci(n-1) + Fibonacci(n-2);
}

int main(){

    int a=0;

    while(a<6){
        printf("termo %d: %d\n", a+1, Fibonacci(a));
        a=a+1;
    }
}