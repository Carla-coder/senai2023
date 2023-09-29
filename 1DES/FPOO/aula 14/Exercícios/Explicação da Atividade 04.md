Explicação da Atividade 04
#include <stdio.h>
#include <stdlib.h>
Essas são diretivas de inclusão de bibliotecas. <stdio.h> é necessária para entrada e saída padrão (como printf e scanf), e <stdlib.h> é necessária para funções relacionadas à alocação de memória dinâmica (como malloc e free).

#define SIZE 10
Aqui, estamos definindo uma constante SIZE que representa o tamanho máximo de estruturas de dados (pilha, fila, lista). Neste exemplo, o tamanho máximo é definido como 10.

struct Node {
int dado;
struct Node* proximo;
};
Isso define uma estrutura de nó para implementar a lista encadeada. Cada nó possui um campo dado para armazenar o valor do elemento e um ponteiro proximo para apontar para o próximo nó na lista.

int pilha[SIZE];
int fila[SIZE];
struct Node* listaInicio = NULL;
Essas são declarações de variáveis globais para armazenar a pilha, a fila e o início da lista encadeada. pilha e fila são arrays que armazenam os elementos da pilha e da fila, respectivamente. listaInicio é um ponteiro para o início da lista encadeada.

int pilhaPonteiro = 0;
int filaPonteiro = 0;
Essas são variáveis globais que rastreiam o topo da pilha (pilhaPonteiro) e o tamanho atual da fila (filaPonteiro).


void mostraFila() {
 ("Fila:\n");
for (i = 0; i < filaPonteiro; i++)
printf("%d ", fila[i]);
printf("\n");
}
Esta função mostraFila é responsável por exibir os elementos na fila. Ela itera pelo array fila e imprime os elementos na fila.

void pushPilha(int valor) {
if (pilhaPonteiro < SIZE) {
pilha[pilhaPonteiro] = valor;
pilhaPonteiro++;
printf("Elemento inserido na pilha com sucesso.\n");
} else {
printf("A pilha está cheia. Não é possível inserir mais elementos.\n");
}
}
pushPilha é uma função para inserir um elemento na pilha. Se o tamanho atual da pilha for menor que SIZE, ele insere o elemento na próxima posição disponível da pilha e atualiza pilhaPonteiro. Caso contrário, ele exibe uma mensagem de erro indicando que a pilha está cheia.

void popPilha() {
if (pilhaPonteiro > 0) {
pilhaPonteiro--;
printf("Elemento removido da pilha com sucesso.\n");
} else {
printf("A pilha está vazia. Não é possível remover elementos.\n");
}
}
popPilha é uma função para remover um elemento da pilha. Se o tamanho atual da pilha for maior que 0, ele remove o elemento do topo da pilha e atualiza pilhaPonteiro. Caso contrário, ele exibe uma mensagem de erro indicando que a pilha está vazia.
Essas funções são semelhantes para a fila e a lista encadeada, mas com algumas diferenças em como os elementos são manipulados.

int main() {
int opcao, valor;
while (1) {
// ...
}
return 0;
}
main é a função principal do programa. O programa entra em um loop infinito com while (1) para permitir que o usuário escolha entre as estruturas de dados e realize operações com elas. O programa continuará em execução até que o usuário escolha a opção "Sair". Dentro do loop, há um menu interativo que permite ao usuário escolher entre as estruturas de dados (pilha, fila, lista) e realizar operações específicas com elas. Dependendo da escolha do usuário, o programa chama as funções apropriadas (pushPilha, popPilha, enqueue, dequeue, inserirLista, mostrarLista) para executar as operações desejadas.
