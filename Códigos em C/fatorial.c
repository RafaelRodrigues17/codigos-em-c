#include <stdio.h>

int fatorial (int n){

    int res = 1;

    for (int i = n; i > 1; i--){

        res *=i;
    }
    return res;
}
int main (){

int n;

printf("Escreva um numero para fatorar: ");
scanf("%d",&n);

printf("%d", fatorial(n));

    return 0;
}