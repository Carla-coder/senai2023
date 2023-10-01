#include <stdio.h>
#include <stdlib.h>
Nesse trecho, estamos incluindo as bibliotecas padrão de entrada e saída (<stdio.h>) e a biblioteca <stdlib.h>, que é necessária para a alocação dinâmica de memória com malloc.

// Definição de uma estrutura para os nós da lista
struct Node {
    int dado;
    struct Node* proximo;
};
Aqui, estamos definindo uma estrutura chamada Node para representar os nós da lista encadeada. Cada nó contém um inteiro dado e um ponteiro para o próximo nó na lista (proximo).

// Inicializa a lista vazia
struct Node* inicio = NULL;
inicio é um ponteiro que representa o início da lista encadeada. Inicialmente, ele é definido como NULL para indicar que a lista está vazia.

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
inserirElemento é uma função que permite adicionar um novo elemento no início da lista. Ela começa alocando dinamicamente memória para um novo nó (novoNo) usando malloc. Se a alocação de memória falhar (ou seja, novoNo for NULL), a função exibirá uma mensagem de erro. Caso contrário, ela define o valor do novo nó como valor, atualiza o ponteiro proximo para apontar para o nó anterior ao inicio e move o inicio da lista para o novo nó.

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
removerElemento é uma função que remove o elemento do início da lista. Se a lista estiver vazia (ou seja, inicio é NULL), a função exibirá uma mensagem de erro. Caso contrário, ela remove o primeiro nó da lista, atualizando o inicio para apontar para o próximo nó e liberando a memória do nó removido com free.

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
mostrarLista é uma função que exibe todos os elementos da lista encadeada. Se a lista estiver vazia, ela exibirá uma mensagem informando que a lista está vazia. Caso contrário, ela itera pelos nós da lista, imprimindo os valores dos nós.

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
main é a função principal do programa. Ela apresenta um menu ao usuário com opções para inserir elementos na lista, remover elementos, mostrar a lista ou sair do programa. Dependendo da opção escolhida pelo usuário, ela chama as funções correspondentes (inserirElemento, removerElemento, mostrarLista) ou sai do programa caso a opção seja "Sair". O loop while (1) permite que o programa continue executando até que o usuário escolha a opção de sair (case 4).