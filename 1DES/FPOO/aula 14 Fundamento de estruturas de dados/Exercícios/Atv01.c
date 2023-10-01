/* Atv 01: utilize o algoritmo de pilha apresentado e implemente um menu na fun��o main para que o usu�rio possa escolher entre as op��es 
de inserir e remover elementos na pilha, a acada altera��o do usu�rio mostre a pilha.*/

#include <stdio.h>
#define SIZE 10

int pilha[SIZE];
int topo = -1; // Inicializa o topo da pilha como -1 (vazia)
int i;

// Fun��o para verificar se a pilha est� vazia
int estaVazia() {
    return topo == -1;
}

// Fun��o para verificar se a pilha est� cheia
int estaCheia() {
    return topo == SIZE - 1;
}

// Fun��o para empilhar (push) um elemento na pilha
int push(int valor) {
    if (estaCheia()) {
        printf("A pilha esta cheia. Nao e possivel adicionar mais elementos.\n");
        return 0; // Falha ao adicionar
    }
    topo++;
    pilha[topo] = valor;
    return 1; // Sucesso ao adicionar
}

// Fun��o para desempilhar (pop) um elemento da pilha
int pop() {
    if (estaVazia()) {
        printf("A pilha esta vazia. Nao e poss�vel remover elementos.\n");
        return 0; // Falha ao remover
    }
    topo--;
    return 1; // Sucesso ao remover
}

// Fun��o para exibir todos os elementos da pilha
void mostraPilha() {
    if (estaVazia()) {
        printf("A pilha esta vazia.\n");
        return;
    }
    printf("Elementos da pilha:\n");
    for (i = 0; i <= topo; i++) {
        printf("%d\n", pilha[i]);
    }
}

int main() {
    int opcao, valor;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir elemento na pilha\n");
        printf("2. Remover elemento da pilha\n");
        printf("3. Mostrar pilha\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                if (push(valor)) {
                    printf("Elemento inserido com sucesso.\n");
                } else {
                    printf("Falha ao inserir elemento.\n");
                }
                break;
            case 2:
                if (pop()) {
                    printf("Elemento removido com sucesso.\n");
                } else {
                    printf("Falha ao remover elemento.\n");
                }
                break;
            case 3:
                mostraPilha();
                break;
            case 4:
                printf("Encerrando o programa.\n"); //O programa continuar� em execu��o at� que o usu�rio escolha a op��o "Sair".
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

