#include <stdio.h>
#include "Fila.h"

void testarInserir(Fila* fila, int valor, bool esperado) {
    bool resultado = inserir(fila, valor);
    printf("Inserir %d: %s (esperado: %s)\n", valor, resultado ? "sucesso" : "falha", esperado ? "sucesso" : "falha");
}

void testarRemover(Fila* fila, int esperado) {
    int valor;
    bool resultado = remover(fila, &valor);
    printf("Remover: %s (valor: %d, esperado: %d)\n", resultado ? "sucesso" : "falha", resultado ? valor : -1, esperado);
}

void testarConsultarInicio(Fila* fila, int esperado) {
    int valor;
    bool resultado = consultarInicio(fila, &valor);
    printf("Consultar inicio: %s (valor: %d, esperado: %d)\n", resultado ? "sucesso" : "falha", resultado ? valor : -1, esperado);
}

void testarEstaVazia(Fila* fila, bool esperado) {
    bool resultado = estaVazia(fila);
    printf("Esta vazia: %s (esperado: %s)\n", resultado ? "sim" : "nao", esperado ? "sim" : "nao");
}

void testarEstaCheia(Fila* fila, bool esperado) {
    bool resultado = estaCheia(fila);
    printf("Esta cheia: %s (esperado: %s)\n", resultado ? "sim" : "nao", esperado ? "sim" : "nao");
}

int main() {
    Fila fila;
    inicializaFila(&fila);

    // Testando operações em uma fila vazia
    testarEstaVazia(&fila, true);
    testarEstaCheia(&fila, false);

    // Testando inserções
    testarInserir(&fila, 10, true);
    testarInserir(&fila, 20, true);
    testarInserir(&fila, 30, true);
    testarInserir(&fila, 40, true);
    testarInserir(&fila, 50, true);

    // Testando fila cheia
    testarEstaCheia(&fila, true);
    testarInserir(&fila, 60, false);

    // Testando consultas e remoções
    testarConsultarInicio(&fila, 10);
    testarRemover(&fila, 10);
    testarConsultarInicio(&fila, 20);
    testarRemover(&fila, 20);
    testarRemover(&fila, 30);
    testarRemover(&fila, 40);
    testarRemover(&fila, 50);

    // Testando fila vazia após remoções
    testarEstaVazia(&fila, true);
    testarRemover(&fila, -1);  // Deveria falhar

    return 0;
}
