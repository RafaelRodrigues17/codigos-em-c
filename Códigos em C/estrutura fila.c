# include <stdio.h>
# define TAMFILA 10

int fila [TAMFILA] = {0,0,0,0,0,0,0,0,0,0};

int cabeca = 0;
int calda = 0;

void enfileirar (){
    int val;
    if(calda < TAMFILA){
        printf("Informe o elemento para adicionar na fila: ");
        scanf("%d", &val);
        fila [calda] = val;
        calda ++;

    }else{
        printf("A fila esta cheia\n");
    }

}
void desinfileirar (){
    if (cabeca < calda ){
        fila [cabeca] = 0;
        cabeca ++;
        
    }else{
         printf("A fila esta vazia\n");
    }

}
void listar(){

    for (int i = 0; i < TAMFILA; i ++){
    printf(" - | %d | -", fila[i]);
    }

    printf("head: %d\n",cabeca);
    printf("Tail: %d\n",calda);

}
void limpar (){
    for(int i = 0; i < TAMFILA; i++ ){

        fila [i] = 0;
    }

}
void chama_menu (){
    int opcao;
    do {
        printf("\nEscolha uma opcao: ");
        printf("\n1 - Infileirar\n2 - Desinfilerar\n3 - listar \n4 - limpar \n5 - Sair\nOpcao: ");
        scanf("%d", &opcao);

    switch (opcao){
    case 1:
    enfileirar();
    chama_menu();
    break;
    case 2:
    desinfileirar();
    chama_menu();
    break;
    case 3:
    listar(); 
    chama_menu();
    break;
    case 4:
    limpar();
    chama_menu();
    break;
    case 5:
    printf("Programa encerrado !");
    break;

    default:
    printf("Tente novamente: ");

}
         
}while (opcao <1 && opcao> 5);

}

int main (){
    chama_menu ();


    return 0;
}
