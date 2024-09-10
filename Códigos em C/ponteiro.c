# include <stdio.h>

void contadora (int* contador){
int preco_venda;

printf("Antes de incrementar\n");
printf("O contador vale %d\n", (*contador));
printf("O endereco de memoria %d\n", contador);
printf("O endereco em hexadecimal %p\n", contador);

printf("Apos incrementar\n");
preco_venda = (*contador) + (*contador * 0.5);
printf("O contador vale %d\n", preco_venda);
printf("endereco de memoria eh %d\n",contador);

}

int main (){

int contador = 10.00;

contadora (&contador);
printf("Variavel no programa principal %d\n", contador);
printf("%p", &contador);

    return 0;
}