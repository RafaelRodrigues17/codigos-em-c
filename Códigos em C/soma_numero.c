# include <stdio.h>

int main (){
    int soma, numero;
    printf("Informe um numero para ser somado ou 0 para sair:\n");
    scanf("%d",&numero);
    soma = 0;
    while (numero !=0)
    {
        soma = soma + numero;
        printf("Digite outro numero: ");
        scanf("%d",&numero);

    }
        printf("A soma e: %d", soma);

    return 0;






}