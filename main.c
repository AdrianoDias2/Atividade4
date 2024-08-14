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

    // Testando se a fila está cheia
    if (estaCheia(&fila)) {
        printf("A fila está cheia.\n");
    } else {
        printf("A fila não está cheia.\n");
    }

    // Testando a consulta ao início da fila
    if (consultarInicio(&fila, &valor)) {
        printf("O início da fila é: %d\n", valor);
    } else {
        printf("A fila está vazia.\n");
    }

    // Testando a remoção
    remover(&fila, &valor);
    printf("Valor removido: %d\n", valor);

    if (consultarInicio(&fila, &valor)) {
        printf("O início da fila é: %d\n", valor);
    } else {
        printf("A fila está vazia.\n");
    }

    // Testando se a fila está vazia
    if (estaVazia(&fila)) {
        printf("A fila está vazia.\n");
    } else {
        printf("A fila não está vazia.\n");
    }

    return 0;
}
