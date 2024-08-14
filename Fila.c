#include "Fila.h"

void inicializaFila(Fila* fila) {
    fila->inicio = 0;
    fila->fim = 0;
    fila->tamanho = 0;
}

bool estaVazia(Fila* fila) {
    return fila->tamanho == 0;
}

bool estaCheia(Fila* fila) {
    return fila->tamanho == MAX;
}

bool inserir(Fila* fila, int valor) {
    if (estaCheia(fila)) {
        return false;
    }
    fila->itens[fila->fim] = valor;
    fila->fim = (fila->fim + 1) % MAX;
    fila->tamanho++;
    return true;
}

bool remover(Fila* fila, int* valor) {
    if (estaVazia(fila)) {
        return false;
    }
    *valor = fila->itens[fila->inicio];
    fila->inicio = (fila->inicio + 1) % MAX;
    fila->tamanho--;
    return true;
}

bool consultarInicio(Fila* fila, int* valor) {
    if (estaVazia(fila)) {
        return false;
    }
    *valor = fila->itens[fila->inicio];
    return true;
}
