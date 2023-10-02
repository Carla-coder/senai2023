/* Atv04: Este programa oferece um menu principal que permite ao usuário escolher entre implementar uma pilha, 
uma fila ou uma lista encadeada. Em seguida, ele oferece um submenu para cada estrutura escolhida, onde o usuário pode realizar operações específicas, como inserir ou remover elementos. 
O programa continuará em execução até que o usuário escolha a opção "Sair" no menu principal. */

#include <stdio.h>
#include <stdlib.h>

#define SIZE 10

// Definição de estrutura para os nós da lista (para implementar fila e lista)
struct Node {
    int dado;
    struct Node* proximo;
};

// Variáveis globais
int pilha[SIZE];
int fila[SIZE];
struct Node* listaInicio = NULL;

int pilhaPonteiro = 0;
int filaPonteiro = 0;
int i;

// Funções para pilha
void pushPilha(int valor) {
    if (pilhaPonteiro < SIZE) {
        pilha[pilhaPonteiro] = valor;
        pilhaPonteiro++;
        printf("Elemento inserido na pilha com sucesso.\n");
    } else {
        printf("A pilha esta cheia. Nao e possivel inserir mais elementos.\n");
    }
}

void popPilha() {
    if (pilhaPonteiro > 0) {
        pilhaPonteiro--;
        printf("Elemento removido da pilha com sucesso.\n");
    } else {
        printf("A pilha esta vazia. Nao e possivel remover elementos.\n");
    }
}

// Funções para fila
void enqueue(int valor) {
    if (filaPonteiro < SIZE) {
        fila[filaPonteiro] = valor;
        filaPonteiro++;
        printf("Elemento enfileirado com sucesso.\n");
    } else {
        printf("A fila esta cheia. Nao e possivel enfileirar mais elementos.\n");
    }
}

void dequeue() {
    if (filaPonteiro > 0) {
        for (i = 0; i < filaPonteiro - 1; i++) {
            fila[i] = fila[i + 1];
        }
        filaPonteiro--;
        printf("Elemento desenfileirado com sucesso.\n");
    } else {
        printf("A fila esta vazia. Nao e possivel desenfileirar elementos.\n");
    }
}

// Funções para lista
void inserirLista(int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    if (novoNo == NULL) {
        printf("Memoria insuficiente para alocar o novo elemento.\n");
        return;
    }
    novoNo->dado = valor;
    novoNo->proximo = listaInicio;
    listaInicio = novoNo;
    printf("Elemento inserido na lista com sucesso.\n");
}

void mostrarLista() {
    if (listaInicio == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }
    printf("Elementos da lista:\n");
    struct Node* atual = listaInicio;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    int opcao, valor;

    while (1) {
        printf("\nEscolha a estrutura de dados:\n");
        printf("1. Pilha\n");
        printf("2. Fila\n");
        printf("3. Lista Encadeada\n");
        printf("4. Sair\n");
        printf("Opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1: // Pilha
                printf("\nMenu da Pilha:\n");
                printf("1. Inserir elemento na pilha\n");
                printf("2. Remover elemento da pilha\n");
                printf("3. Voltar ao menu principal\n");
                printf("Opcao: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("Digite o valor a ser inserido na pilha: ");
                        scanf("%d", &valor);
                        pushPilha(valor);
                        break;
                    case 2:
                        popPilha();
                        break;
                    case 3:
                        break;
                    default:
                        printf("Opcao invalida. Tente novamente.\n");
                        break;
                }
                break;

            case 2: // Fila
                printf("\nMenu da Fila:\n");
                printf("1. Enfileirar elemento\n");
                printf("2. Desenfileirar elemento\n");
                printf("3. Voltar ao menu principal\n");
                printf("Opcao: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("Digite o valor a ser enfileirado: ");
                        scanf("%d", &valor);
                        enqueue(valor);
                        break;
                    case 2:
                        dequeue();
                        break;
                    case 3:
                        break;
                    default:
                        printf("Opcao invalida. Tente novamente.\n");
                        break;
                }
                break;

            case 3: // Lista Encadeada
                printf("\nMenu da Lista Encadeada:\n");
                printf("1. Inserir elemento na lista\n");
                printf("2. Mostrar lista\n");
                printf("3. Voltar ao menu principal\n");
                printf("Opcao: ");
                scanf("%d", &opcao);

                switch (opcao) {
                    case 1:
                        printf("Digite o valor a ser inserido na lista: ");
                        scanf("%d", &valor);
                        inserirLista(valor);
                        break;
                    case 2:
                        mostrarLista();
                        break;
                    case 3:
                        break;
                    default:
                        printf("Opcao invalida. Tente novamente.\n");
                        break;
                }
                break;

            case 4: // Sair
                printf("Encerrando o programa.\n");
                return 0;

            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

