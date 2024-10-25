#include <stdio.h>

void leitura(int *idade, char *sexo) {
    printf("Informe sua idade: ");
    scanf("%d", idade);
    printf("Digite M para masculino e F para feminino: ");
    scanf(" %c", sexo);
}
int alistamento(int idade, char sexo) {
    if ((sexo == 'M' || sexo == 'm') && idade == 18) {
        return 1;
    } else {
        return 0;
    }
}
int main() {
    int idade;
    char sexo;
    int alist;
    int cont = 0;

    leitura(&idade, &sexo);
    alist = alistamento(idade, sexo);

    printf("O retorno da funcao alistamento = %d\n", alist);

    if (alist == 1) {
        printf("\tAlistamento obrigatorio\n");
        cont++;
    } else {
        printf("\n\tAlistamento nao obrigatorio\n");
    }

    printf("\nQuantos devem se alistar? %d\n", cont);

    return 0;
}
