#include <stdio.h>
#include "acervo.h"

int main() {
    Item itens[MAX_ITENS];
    int total = 0;
    int opcao;

    carregarAcervo(itens, &total);

    do {
        printf("\n=== GERENCIADOR DE ACERVO DE GIBIS ===\n");
        printf("1. Cadastrar item\n2. Consultar item\n3. Remover item\n");
        printf("4. Alterar item\n5. Listar acervo\n0. Sair\nEscolha: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: cadastrarItem(itens, &total); break;
            case 2: consultarItem(itens, total); break;
            case 3: removerItem(itens, &total); break;
            case 4: alterarItem(itens, total); break;
            case 5: listarItens(itens, total); break;
            case 0: printf("Saindo...\n"); break;
            default: printf("Opção inválida!\n");
        }
    } while (opcao != 0);

    return 0;
}
