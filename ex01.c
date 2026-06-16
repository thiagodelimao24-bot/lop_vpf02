#include <stdio.h>
#include <stdlib.h>

int main() {
    FILE *arquivo;
    char produto[50];
    int quantidade;
    float precoUnitario, totalVendas;

    arquivo = fopen("vendas.csv", "r");

    if (arquivo == NULL) {
        printf("Erro ao abrir o arquivo!\n");
        return 1;
    }

    // Ignora o cabeçalho
    fscanf(arquivo, "%*[^\n]\n");

    printf("============================================================\n");
    printf("                RELATORIO DE VENDAS\n");
    printf("============================================================\n");
    printf("%-15s %-10s %-15s %-15s\n",
           "Produto", "Quantidade", "Preco", "Total");

    while (fscanf(arquivo, "%49[^,],%d,%f\n",
                  produto, &quantidade, &precoUnitario) == 3) {

        totalVendas = quantidade * precoUnitario;

        printf("%-15s %-10d R$ %-11.2f R$ %-11.2f\n",
               produto,
               quantidade,
               precoUnitario,
               totalVendas);
    }

    fclose(arquivo);

    return 0;
}

