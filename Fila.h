#ifndef FILA_H
#define FILA_H

#include <stdbool.h>

#define MAX 5

typedef struct {
    int itens[MAX];
    int inicio;
    int fim;
    int tamanho;
} Fila;

void inicializaFila(Fila* fila);
bool estaVazia(Fila* fila);
bool estaCheia(Fila* fila);
bool inserir(Fila* fila, int valor);
bool remover(Fila* fila, int* valor);
bool consultarInicio(Fila* fila, int* valor);

#endif
