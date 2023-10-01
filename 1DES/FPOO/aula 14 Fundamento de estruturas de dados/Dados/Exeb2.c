/* o código fornecido implementa uma pilha em C usando um array.
Ele tem funções para empilhar (push) e desempilhar (pop) elementos na pilha, além de uma função para exibir o conteúdo da pilha (mostraPilha).
Vou mostrar um exemplo de como executar este código em C: Este exemplo demonstra como empilhar valores (usando a função push), 
desempilhar valores (usando a função pop) e exibir o conteúdo da pilha após cada operação (usando a função mostraPilha).
Certifique-se de compilar e executar este código em um ambiente C para ver como a pilha funciona em ação.*/


#include <stdio.h>

#define SIZE 10

int pilha[SIZE];
int ponteiro = 0;
int i;

void mostraPilha() {
    printf("Pilha:\n");
    for (i = 0; i < ponteiro; i++)
        printf("%d\n", pilha[i]);
}

int push(int dado) {
    if (ponteiro < SIZE) {
        pilha[ponteiro] = dado;
        ponteiro++;
        return 1;  // Indica que o push foi bem-sucedido
    } else
        return 0;  // Indica que a pilha está cheia
}

int pop() {
    if (ponteiro > 0) {
        ponteiro--;
        return pilha[ponteiro];  // Retorna o elemento desempilhado
    } else
        return -1;  // Indica que a pilha está vazia
}

int main() {
    push(25);
    mostraPilha();

    push(18);
    mostraPilha();

    push(10);
    mostraPilha();

    int valorDesempilhado = pop();
    if (valorDesempilhado != -1) {
        printf("Elemento desempilhado: %d\n", valorDesempilhado);
    } else {
        printf("A pilha está vazia.\n");
    }
    mostraPilha();

    valorDesempilhado = pop();
    if (valorDesempilhado != -1) {
        printf("Elemento desempilhado: %d\n", valorDesempilhado);
    } else {
        printf("A pilha está vazia.\n");
    }
    mostraPilha();

    return 0;
}

