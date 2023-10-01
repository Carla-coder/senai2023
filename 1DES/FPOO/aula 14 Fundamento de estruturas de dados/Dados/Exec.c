/* Exemplo de Fila */


#include <stdio.h>
#define SIZE 10

int fila[SIZE];
int inicio = 0;
int fim = 0;
int i;

void mostraFila() {
    printf("Fila:\n");
    for (i = inicio; i < fim; i++)
        printf("%d\n", fila[i % SIZE]); /*Essa linha de código é responsável por imprimir um elemento da fila circular no console. 
		Vou explicar os elementos que compõem essa linha:Esta é uma função em C usada para imprimir dados no console.
		Ela é amplamente usada para exibir informações na saída padrão.
        "%d\n": Isso é um formato de string usado com a função printf para especificar como o dado deve ser formatado durante a impressão.
        No caso, "%d" é um especificador de formato que indica que estamos imprimindo um valor inteiro (número inteiro), e "\n" é um caractere de nova linha que faz com que a próxima saída seja impressa em uma nova linha no console.
        fila[i % SIZE]: Esta parte da linha de código é onde o valor da fila circular é acessado. 
        Aqui está o que cada componente significa:
        fila: Este é o nome do array que representa a fila circular.
        i: É uma variável que representa a posição atual na fila que queremos acessar.
        %: É o operador módulo (ou resto da divisão). Ele é usado aqui para garantir que o índice i permaneça dentro dos limites do array fila. Se i for maior ou igual a SIZE (o tamanho máximo da fila), o operador módulo SIZE garantirá que o índice seja ajustado para uma posição válida na fila. Isso é o que torna a fila circular.
        SIZE: É uma constante que representa o tamanho máximo da fila.
		Então, a linha de código printf("%d\n", fila[i % SIZE]); faz o seguinte:
		Ela imprime o valor do elemento da fila na posição i (levando em consideração a fila circular).
		O formato "%d" especifica que estamos imprimindo um número inteiro.
		O caractere "\n" adiciona uma nova linha após a impressão do número, para que o próximo valor seja exibido na linha seguinte no console.
		Essa linha é comumente usada para mostrar os elementos da fila circular à medida que são processados ou para depurar o código e verificar os valores na fila durante a execução do programa.*/

}

int enqueue(int dado) {
    if ((fim + 1) % SIZE != inicio) {
        fila[fim] = dado;
        fim = (fim + 1) % SIZE;
        return 1;
    } else {
        printf("Fila cheia. Não é possível enfileirar.\n");
        return 0;
    }
}

int dequeue() {
    if (inicio != fim) {
        inicio = (inicio + 1) % SIZE;
        return 1;
    } else {
        printf("Fila vazia. Não é possível desenfileirar.\n");
        return 0;
    }
}

int main() {
    enqueue(25);
    mostraFila();
    enqueue(18);
    mostraFila();
    enqueue(10);
    mostraFila();
    dequeue();
    mostraFila();
    dequeue();
    mostraFila();

    return 0;
}

