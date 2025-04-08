#include <stdio.h>
#include <string.h>
#include "acervo.h"

void carregarAcervo(Item itens[], int *total) {
    FILE *f = fopen("acervo.txt", "r");
    *total = 0;
    if (f == NULL) return;

    while (fscanf(f, "%d;%99[^;];%d\n", &itens[*total].id, itens[*total].descricao, &itens[*total].quantidade) == 3) {
        (*total)++;
    }
    fclose(f);
}

void salvarAcervo(Item itens[], int total) {
    FILE *f = fopen("acervo.txt", "w");
    for (int i = 0; i < total; i++) {
        fprintf(f, "%d;%s;%d\n", itens[i].id, itens[i].descricao, itens[i].quantidade);
    }
    fclose(f);
}

void cadastrarItem(Item itens[], int *total) {
    getchar(); // limpar buffer
    printf("Descrição: ");
    fgets(itens[*total].descricao, MAX_DESC, stdin);
    itens[*total].descricao[strcspn(itens[*total].descricao, "\n")] = 0;

    printf("Quantidade: ");
    scanf("%d", &itens[*total].quantidade);

    itens[*total].id = (*total > 0) ? itens[*total - 1].id + 1 : 1;
    (*total)++;
    salvarAcervo(itens, *total);
    printf("Item cadastrado com sucesso!\n");
}

void consultarItem(Item itens[], int total) {
    char termo[100];
    getchar(); // limpa buffer de entrada
    printf("Digite parte da descrição a buscar: ");
    fgets(termo, sizeof(termo), stdin);
    termo[strcspn(termo, "\n")] = 0; // remove o \n

    int encontrados = 0;
    for (int i = 0; i < total; i++) {
        if (strstr(itens[i].descricao, termo) != NULL) {
            printf("ID: %d | Descrição: %s | Quantidade: %d\n",
                   itens[i].id, itens[i].descricao, itens[i].quantidade);
            encontrados++;
        }
    }

    if (encontrados == 0) {
        printf("Nenhum item encontrado contendo \"%s\".\n", termo);
    }
}

void removerItem(Item itens[], int *total) {
    int id, i, encontrado = 0;
    printf("ID do item a remover: ");
    scanf("%d", &id);
    for (i = 0; i < *total; i++) {
        if (itens[i].id == id) {
            encontrado = 1;
            break;
        }
    }
    if (encontrado) {
        for (int j = i; j < *total - 1; j++) {
            itens[j] = itens[j + 1];
        }
        (*total)--;
        salvarAcervo(itens, *total);
        printf("Item removido com sucesso.\n");
    } else {
        printf("Item não encontrado.\n");
    }
}

void alterarItem(Item itens[], int total) {
    int id;
    printf("ID do item a alterar: ");
    scanf("%d", &id);
    for (int i = 0; i < total; i++) {
        if (itens[i].id == id) {
            int opcao;
            printf("1 - Alterar descrição\n2 - Alterar quantidade\nEscolha: ");
            scanf("%d", &opcao);
            getchar(); // limpar buffer
            if (opcao == 1) {
                printf("Nova descrição: ");
                fgets(itens[i].descricao, MAX_DESC, stdin);
                itens[i].descricao[strcspn(itens[i].descricao, "\n")] = 0;
            } else if (opcao == 2) {
                printf("Nova quantidade: ");
                scanf("%d", &itens[i].quantidade);
            }
            salvarAcervo(itens, total);
            printf("Item alterado com sucesso.\n");
            return;
        }
    }
    printf("Item não encontrado.\n");
}

void listarItens(Item itens[], int total) {
    if (total == 0) {
        printf("Nenhum item no acervo.\n");
        return;
    }
    printf("===== Acervo de Gibis =====\n");
    for (int i = 0; i < total; i++) {
        printf("ID: %d | Descrição: %s | Quantidade: %d\n",
               itens[i].id, itens[i].descricao, itens[i].quantidade);
    }
}
