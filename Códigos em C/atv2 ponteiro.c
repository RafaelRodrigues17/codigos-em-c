#include <stdio.h>

void mudar (int *numero1, int *numero2){
    
    printf("O enderco de memoria do numero 1: %d\n", numero1);
    printf("O endereco de memoria do numero 2: %d\n", numero2);
    
    if (numero1 > numero2){
        *numero1 = numero1;
    }
    else {
        *numero2 = numero2;
    }
}

int main (){

    int numero1, numero2;

    printf("Digite um valor: ");
    scanf("%d", &numero1);
    printf("Digite outro valor: ");
    scanf("%d", &numero2);

    mudar(&numero1, &numero2);

    printf("%d\n %d\n", numero1, numero2);

    


    return 0;
}