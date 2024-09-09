# include <stdio.h>
# include <string.h>

int main (){

    int idade;
    double salario;
    char genero;
    char nome[50];

    printf("Informe sua idade: ");
    scanf("%d", &idade);
    printf("Informe seu salario: ");
    scanf("%lf",&salario);
    fseek(stdin,0,SEEK_END);
    printf("Informe o genero: ");
    scanf("%c", &genero);
    fseek(stdin,0,SEEK_END);
    printf("Informe seu nome: ");
    fgets(nome, 50, stdin);
    printf("O(a) funcionario(a) %s, sexo %c, ganha %2lf e tem %d anos", nome,genero,salario, idade);

    return 0;

}