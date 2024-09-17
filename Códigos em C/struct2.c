# include <stdio.h>
# include <string.h>

struct st_aluno{
    char nome [100];
    int matricula;
    char curso [100];

}aluno1 [5];

    int main (){

    int i;
    for(i = 0; i < 5; i++){
        printf("\nDigite seu nome: ");
        fgets(aluno1[i].nome, 100, stdin);
        printf("Digite sua matricula: ");
        scanf("%d", &aluno1[i].matricula);
        getchar();
        printf("Digite seu curso: ");
        fgets(aluno1[i].curso, 100, stdin);

        printf("\nSeu nome eh: %s\nSua matricula eh: %d\nSeu curso eh: %s", strtok(aluno1[i].nome, "\n"),aluno1[i].matricula, aluno1[i].curso);

    }
    
    return 0;
}
