#include <stdio.h>
#include <stdlib.h>

void chama_menu() {
    printf("Escolha uma operacao:\n");
    printf("\n1. Soma\n");
    printf("2. Subtracao\n");
    printf("3. Multiplicacao\n");
    printf("4. Divisao\n");
    printf("0. Sair\n");
}
    void calculadora(){
    int opcao;
    float numero1, numero2, total;

    do{
        chama_menu();
        printf("\nDigite sua opcao: ");
        scanf("%d", &opcao);

        if (opcao >= 1 && opcao <= 4) {
            printf("\nDigite o primeiro numero: ");
            scanf("%f", &numero1);
            printf("Digite o segundo numero: ");
            scanf("%f", &numero2);
        }

        switch (opcao) {
            case 1:
                system("cls");
                total = numero1 + numero2;
                printf("Resultado: %.2f\n", total);
                break;
            case 2:
                
                total = numero1 - numero2;
                printf("Resultado: %.2f\n", total);
                break;
            case 3:
                total = numero1 * numero2;
                printf("Resultado: %.2f\n", total);
                break;
            case 4:
                if (numero2 != 0) {
                    total = numero1 / numero2;
                    printf("Resultado: %.2f\n", total);

                }else{
                printf("Erro: Divisao por zero, nao existe!\n");

                }
                break;
            case 0:
                printf("Saindo da caluculadora...\n");
                break;
            default:
                printf("Opcao invalida! Tente novamente.\n");
                break;
        }
        printf("\n");

    }while (opcao != 0);

}
