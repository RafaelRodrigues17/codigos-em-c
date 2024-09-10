# include <stdio.h>
# include <stdlib.h>

const int nr_agencia = 1020, nr_conta = 123, nr_senha = 1234;
float saldo = 0.0; limite = 500.00;
float operacao_credito [100], operacao_debito [100];
int voltar;

void preenche_vetor () {
    for (int i = 0; i < 100; i++ ){
        operacao_credito [i] = 0.0;
        operacao_debito [i] = 0.0;
    }
}
void chama_menu (){
    int opcao;

    do{
        printf("\nEscolha uma opcao: ");
        printf("\n1 - Saldo\n2 - Extrato\n3 - Saque\n4 - Deposito\n5 - Sair\nOpcao: ");
        scanf("%d", &opcao);
        system("cls");

    }while (opcao != 1 && opcao != 2 && opcao != 3 && opcao != 4 && opcao != 5);

    switch (opcao){

       case 1:
       consulta_saldo ();
       break;
       case 2:
       //consulta_extrato ();
       break;
       case 3:
       //realizar_saque ();
       break;
       case 4:
       //realizar_deposito ();
       break;
       case 5:
       printf("\nPrograma encerrado pelo usuario");
       break;
       default:
       printf("Opcao inavalida\n\nInforme uma opcao valida");
       chama_menu ();
       break;
    }
 
}
 void consulta_saldo (){
    do{
      printf("\nSaldo:       R$ %2f", saldo);
      printf("\nLimite:       R$ %2f", limite);
      printf("\nDisponivel:       R$ %2f", saldo + limite);
      printf("\n****************");
      printf("\nDeseja voltar ao menu? [S | N]");
      scanf("%d",&voltar);
      system("cls");
    }while (voltar != "S");
      chama_menu ();
}

int main (){

    int senha, conta, agencia;
    preenche_vetor ();

    do{
      printf("Informe sua agencia: ");
      scanf("%d", &agencia);
      printf("Informe sua conta: ");
      scanf("%d", &conta);
      printf("Informe sua senha: ");
      scanf("%d", &senha);
      system("cls");
      if (nr_agencia != agencia || nr_conta != conta || nr_senha !=senha ){
      printf("Dados incorretos\n\n");

      }
    }while (nr_agencia != agencia || nr_conta != conta || nr_senha !=senha );
        printf("Acesso liberado!\n\n");
    
        chama_menu ();

    return 0;

}