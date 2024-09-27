#include <stdio.h>
#include <string.h>

#define MAX_LIVROS 100

typedef struct {
    char codigoBarras[20];
    char titulo[100];
    char autor[100];
    int anoPublicacao;
    int quantidade;
    float valorVenda;
} Livro;

Livro estoque[MAX_LIVROS];
int totalLivros = 0;

void cadastrarLivro() {
    if (totalLivros >= MAX_LIVROS) {
        printf("Estoque cheio!\n");
        return;
    }

    Livro livro;

    printf("Código de barras: ");
    scanf("%s", livro.codigoBarras);
    printf("Título: ");
    scanf(" %[^\n]", livro.titulo); // Para aceitar strings com espaços
    printf("Autor: ");
    scanf(" %[^\n]", livro.autor);
    printf("Ano de publicação: ");
    scanf("%d", &livro.anoPublicacao);
    printf("Quantidade em estoque: ");
    scanf("%d", &livro.quantidade);
    printf("Valor de venda: ");
    scanf("%f", &livro.valorVenda);

    estoque[totalLivros] = livro;
    totalLivros++;
    printf("Livro cadastrado com sucesso!\n");
}

void consultarLivro() {
    char codigo[20];
    printf("Digite o código de barras para consulta: ");
    scanf("%s", codigo);

    for (int i = 0; i < totalLivros; i++) {
        if (strcmp(estoque[i].codigoBarras, codigo) == 0) {
            printf("Título: %s\n", estoque[i].titulo);
            printf("Autor: %s\n", estoque[i].autor);
            printf("Ano de publicação: %d\n", estoque[i].anoPublicacao);
            printf("Valor por unidade: %.2f\n", estoque[i].valorVenda);
            return;
        }
    }
    printf("Livro não encontrado.\n");
}

void venderLivro() {
    char codigo[20];
    int quantidadeVendida;
    float totalCompra = 0;

    while (1) {
        printf("Digite o código de barras para vender (ou 'sair' para finalizar): ");
        scanf("%s", codigo);

        if (strcmp(codigo, "sair") == 0)
            break;

        printf("Quantidade a vender: ");
        scanf("%d", &quantidadeVendida);

        for (int i = 0; i < totalLivros; i++) {
            if (strcmp(estoque[i].codigoBarras, codigo) == 0) {
                if (estoque[i].quantidade >= quantidadeVendida) {
                    estoque[i].quantidade -= quantidadeVendida;
                    totalCompra += quantidadeVendida * estoque[i].valorVenda;
                    printf("Livro vendido: %s, Unidades: %d, Valor unitário: %.2f\n", 
                        estoque[i].titulo, quantidadeVendida, estoque[i].valorVenda);
                } else {
                    printf("Quantidade insuficiente em estoque.\n");
                }
                break;
            }
        }
    }

    printf("Valor total da compra: %.2f\n", totalCompra);
}

void exibirEstoque() {
    printf("Itens em estoque:\n");
    for (int i = 0; i < totalLivros; i++) {
        printf("Código: %s | Título: %s | Quantidade: %d | Preço: %.2f\n",
               estoque[i].codigoBarras, estoque[i].titulo, estoque[i].quantidade, estoque[i].valorVenda);
    }
}

int main() {
    int opcao;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Cadastrar Livro\n");
        printf("2. Consultar Livro\n");
        printf("3. Vender Livro\n");
        printf("4. Exibir Estoque\n");
        printf("5. Sair\n");
        printf("Escolha uma opção: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                cadastrarLivro();
                break;
            case 2:
                consultarLivro();
                break;
            case 3:
                venderLivro();
                break;
            case 4:
                exibirEstoque();
                break;
            case 5:
                printf("Saindo...\n");
                return 0;
            default:
                printf("Opção inválida!\n");
        }
    }

    return 0;
}