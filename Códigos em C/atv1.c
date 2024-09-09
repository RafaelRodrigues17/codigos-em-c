#include <stdio.h>
#include <string.h>

void limpar_entrada(){
    char c;
    while ((c = getchar ()) != '\n' && c != EOF){}
}

int main(){
    
    int quant;
    float preco1, preco2, preco3;
    char nome[50];

    printf("Bem vindo, por favor digite o seu nome: ");
    fgets(nome, 50, stdin);
    printf("Entre com o valor do produto: ");
    scanf("%f", &preco1);
    printf("Digite a quantidade do produto: ");
    scanf("%d", &quant);
    
    

    if (quant < 10){
        preco2 = preco1;
    }
    else if (quant > 10 && quant <= 99){
        preco2 = quant * (preco1 * 0.95);
    }
    else if (quant > 100 && quant <= 999){
        preco2 = quant * (preco1 * 0.9);
    }
    else {
        preco2 = quant * (preco1 * 0.85);
    }
    preco3 = preco1 * quant;
    
    printf("Ola, %s, o valor total dos produtos foi: R$ %0.2f", nome, preco2);
    printf("\nValor sem desconto: R$ %0.2f", preco3);
    return 0;
}