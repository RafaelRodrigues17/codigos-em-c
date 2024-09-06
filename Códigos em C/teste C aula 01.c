# include <stdio.h>

int main (){
 float nota1, nota2, nota3, media;

    printf("Informe a nota :");
    scanf("%f",&nota1);
    printf("Informe a nota :");
    scanf("%f",&nota2);
    printf("Informe a nota :");
    scanf("%f",&nota3);

    media = (nota1 + nota2 + nota3) / 3;
 
    printf("A media e: %f", media);

    return 0;
}