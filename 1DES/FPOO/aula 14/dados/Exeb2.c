/* o c�digo fornecido implementa uma pilha em C usando um array.
Ele tem fun��es para empilhar (push) e desempilhar (pop) elementos na pilha, al�m de uma fun��o para exibir o conte�do da pilha (mostraPilha).
Vou mostrar um exemplo de como executar este c�digo em C: Este exemplo demonstra como empilhar valores (usando a fun��o push), 
desempilhar valores (usando a fun��o pop) e exibir o conte�do da pilha ap�s cada opera��o (usando a fun��o mostraPilha).
Certifique-se de compilar e executar este c�digo em um ambiente C para ver como a pilha funciona em a��o.*/


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
        return 0;  // Indica que a pilha est� cheia
}

int pop() {
    if (ponteiro > 0) {
        ponteiro--;
        return pilha[ponteiro];  // Retorna o elemento desempilhado
    } else
        return -1;  // Indica que a pilha est� vazia
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
        printf("A pilha est� vazia.\n");
    }
    mostraPilha();

    valorDesempilhado = pop();
    if (valorDesempilhado != -1) {
        printf("Elemento desempilhado: %d\n", valorDesempilhado);
    } else {
        printf("A pilha est� vazia.\n");
    }
    mostraPilha();

    return 0;
}

