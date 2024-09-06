# include <stdio.h>

int main (){

    int numero, i, n;
    float media, soma = 0;

    printf("Informe quantas somas deseja realizar: ");
    scanf("%d",&n);

    for (i = 1; i <= n; i++){

        printf("Informe um numero: ");
        scanf("%d",&numero);
        soma = soma + numero;

    }
    printf("a soma e: %f",soma);

    media = soma / n;
 
    printf("\nA media e: %f", media);


    return 0;
}