# include <stdio.h>
# include <string.h>

struct st_aluno{
    char nome[100];
    char endereco[100];
    int idade;

}aluno1;

int main (){

    printf("Digite o seu nome: ");
    fgets(aluno1.nome, 100, stdin);
    printf("Digite sua idade: ");
    scanf("%d", &aluno1.idade);
    getchar();
    printf("Digite seu endereco: ");
    fgets(aluno1.endereco, 100, stdin);

    printf("Seu nome eh: %s\nSua idade eh: %d\nSeu endereco eh: %s",strtok(aluno1.nome, "\n"), aluno1.idade, aluno1.endereco);

    return 0;

}

