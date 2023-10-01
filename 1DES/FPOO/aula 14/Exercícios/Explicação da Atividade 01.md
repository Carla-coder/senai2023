#include <stdio.h>
#define SIZE 10
Nesse trecho, estamos incluindo a biblioteca padrão de entrada e saída (<stdio.h>) e definindo uma constante SIZE com valor 10, que representa o tamanho máximo da pilha.


int pilha[SIZE];
int topo = -1; // Inicializa o topo da pilha como -1 (vazia)
int i;
Aqui, estamos declarando um array chamado pilha para armazenar os elementos da pilha, uma variável topo inicializada como -1 para representar a pilha vazia e uma variável i que usaremos para iteração.


// Função para verificar se a pilha está vazia
int estaVazia() {
    return topo == -1;
}
estaVazia é uma função que retorna 1 se a pilha estiver vazia (ou seja, o topo é -1) e 0 caso contrário.


// Função para verificar se a pilha está cheia
int estaCheia() {
    return topo == SIZE - 1;
}
estaCheia é uma função que retorna 1 se a pilha estiver cheia (ou seja, o topo é igual a SIZE - 1) e 0 caso contrário.


// Função para empilhar (push) um elemento na pilha
int push(int valor) {
    if (estaCheia()) {
        printf("A pilha esta cheia. Nao e possivel adicionar mais elementos.\n");
        return 0; // Falha ao adicionar
    }
    topo++;
    pilha[topo] = valor;
    return 1; // Sucesso ao adicionar
}
push é uma função que permite adicionar um elemento na pilha. Se a pilha estiver cheia, ela exibe uma mensagem de erro e retorna 0 para indicar falha na adição. Caso contrário, ela incrementa o topo e adiciona o valor na posição correspondente do topo na pilha, retornando 1 para indicar sucesso na adição.


// Função para desempilhar (pop) um elemento da pilha
int pop() {
    if (estaVazia()) {
        printf("A pilha esta vazia. Nao e possível remover elementos.\n");
        return 0; // Falha ao remover
    }
    topo--;
    return 1; // Sucesso ao remover
}
pop é uma função que permite remover o elemento do topo da pilha. Se a pilha estiver vazia, ela exibe uma mensagem de erro e retorna 0 para indicar falha na remoção. Caso contrário, ela decrementa o topo para indicar a remoção do elemento do topo, retornando 1 para indicar sucesso na remoção.


// Função para exibir todos os elementos da pilha
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
mostraPilha é uma função para exibir todos os elementos da pilha. Se a pilha estiver vazia, ela exibe uma mensagem informando que a pilha está vazia. Caso contrário, ela itera pelos elementos da pilha e os imprime.


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
            // ...
        }
    }

    return 0;
}
main é a função principal do programa. Dentro dela, há um loop while (1) que cria um menu interativo para o usuário. O usuário pode escolher entre opções para inserir elementos na pilha, remover elementos da pilha, mostrar a pilha ou sair do programa. O programa utiliza a estrutura switch para executar a ação correspondente à opção escolhida pelo usuário.






