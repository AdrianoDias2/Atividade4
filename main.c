#include <stdio.h>
#include "Fila.h"

int main() {
    Fila fila;
    int valor;

    inicializaFila(&fila);

    // Testando a inserção
    inserir(&fila, 10);
    inserir(&fila, 20);
    inserir(&fila, 30);
    inserir(&fila, 40);
    inserir(&fila, 50);

    // Testando se a fila esta cheia
    if (estaCheia(&fila)) {
        printf("A fila esta cheia.\n");
    } else {
        printf("A fila nao esta cheia.\n");
    }

    // Testando a consulta ao inicio da fila
    if (consultarInicio(&fila, &valor)) {
        printf("O inicio da fila e: %d\n", valor);
    } else {
        printf("A fila esta vazia.\n");
    }

    // Testando a remoção
    remover(&fila, &valor);
    printf("Valor removido: %d\n", valor);

    if (consultarInicio(&fila, &valor)) {
        printf("O inicio da fila e: %d\n", valor);
    } else {
        printf("A fila esta vazia.\n");
    }

    // Testando se a fila esta vazia
    if (estaVazia(&fila)) {
        printf("A fila esta vazia.\n");
    } else {
        printf("A fila nao esta vazia.\n");
    }

    return 0;
}
