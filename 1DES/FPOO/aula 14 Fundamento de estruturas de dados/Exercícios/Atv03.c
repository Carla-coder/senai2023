/* Atv03: Exemplo com "Lista": Aqui está um programa em linguagem C que utiliza o mesmo algoritmo, 
mas desta vez implementa uma lista encadeada simples (linked list) em vez de uma pilha ou fila. 
O programa oferece um menu para que o usuário possa inserir e remover elementos na lista e mostrar o estado atual da lista. */

#include <stdio.h>
#include <stdlib.h>

// Definição de uma estrutura para os nós da lista
struct Node {
    int dado;
    struct Node* proximo;
};

// Inicializa a lista vazia
struct Node* inicio = NULL;

// Função para inserir um elemento no início da lista
void inserirElemento(int valor) {
    struct Node* novoNo = (struct Node*)malloc(sizeof(struct Node));
    if (novoNo == NULL) {
        printf("Memoria insuficiente para alocar o novo elemento.\n");
        return;
    }
    novoNo->dado = valor;
    novoNo->proximo = inicio;
    inicio = novoNo;
    printf("Elemento inserido com sucesso.\n");
}

// Função para remover um elemento do início da lista
void removerElemento() {
    if (inicio == NULL) {
        printf("A lista esta vazia. Nao e possivel remover elementos.\n");
        return;
    }
    struct Node* noRemovido = inicio;
    inicio = inicio->proximo;
    free(noRemovido);
    printf("Elemento removido com sucesso.\n");
}

// Função para exibir todos os elementos da lista
void mostrarLista() {
    if (inicio == NULL) {
        printf("A lista esta vazia.\n");
        return;
    }
    printf("Elementos da lista:\n");
    struct Node* atual = inicio;
    while (atual != NULL) {
        printf("%d ", atual->dado);
        atual = atual->proximo;
    }
    printf("\n");
}

int main() {
    int opcao, valor;

    while (1) {
        printf("\nMenu:\n");
        printf("1. Inserir elemento na lista\n");
        printf("2. Remover elemento da lista\n");
        printf("3. Mostrar lista\n");
        printf("4. Sair\n");
        printf("Escolha uma opcao: ");
        scanf("%d", &opcao);

        switch (opcao) {
            case 1:
                printf("Digite o valor a ser inserido: ");
                scanf("%d", &valor);
                inserirElemento(valor);
                break;
            case 2:
                removerElemento();
                break;
            case 3:
                mostrarLista();
                break;
            case 4:
                printf("Encerrando o programa.\n");
                return 0;
            default:
                printf("Opcao invalida. Tente novamente.\n");
                break;
        }
    }

    return 0;
}

