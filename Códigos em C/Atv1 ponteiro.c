#include <stdio.h>

void contadora (int* numero, int* numero2){
    *numero = *numero * 2;
    *numero2 = *numero2 - 2;
}
int main (){

    int numero = 10, numero2 = 20;
    printf("Variavel sem mudancas: %d %d", numero, numero2);
    contadora(&numero, &numero2);
    printf("\nVariavel apos mudanca: %d %d", numero, numero2);
    
    return 0;
}