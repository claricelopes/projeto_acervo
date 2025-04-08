#ifndef ACERVO_H
#define ACERVO_H

#define MAX_DESC 100
#define MAX_ITENS 1000

typedef struct {
    int id;
    char descricao[MAX_DESC];
    int quantidade;
} Item;

void carregarAcervo(Item itens[], int *total);
void salvarAcervo(Item itens[], int total);

void cadastrarItem(Item itens[], int *total);
void consultarItem(Item itens[], int total);
void removerItem(Item itens[], int *total);
void alterarItem(Item itens[], int total);
void listarItens(Item itens[], int total);
void buscarPorDescricao(Item itens[], int total);

#endif
