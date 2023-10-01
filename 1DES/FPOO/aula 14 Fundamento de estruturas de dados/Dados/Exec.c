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
        printf("%d\n", fila[i % SIZE]); /*Essa linha de c�digo � respons�vel por imprimir um elemento da fila circular no console. 
		Vou explicar os elementos que comp�em essa linha:Esta � uma fun��o em C usada para imprimir dados no console.
		Ela � amplamente usada para exibir informa��es na sa�da padr�o.
        "%d\n": Isso � um formato de string usado com a fun��o printf para especificar como o dado deve ser formatado durante a impress�o.
        No caso, "%d" � um especificador de formato que indica que estamos imprimindo um valor inteiro (n�mero inteiro), e "\n" � um caractere de nova linha que faz com que a pr�xima sa�da seja impressa em uma nova linha no console.
        fila[i % SIZE]: Esta parte da linha de c�digo � onde o valor da fila circular � acessado. 
        Aqui est� o que cada componente significa:
        fila: Este � o nome do array que representa a fila circular.
        i: � uma vari�vel que representa a posi��o atual na fila que queremos acessar.
        %: � o operador m�dulo (ou resto da divis�o). Ele � usado aqui para garantir que o �ndice i permane�a dentro dos limites do array fila. Se i for maior ou igual a SIZE (o tamanho m�ximo da fila), o operador m�dulo SIZE garantir� que o �ndice seja ajustado para uma posi��o v�lida na fila. Isso � o que torna a fila circular.
        SIZE: � uma constante que representa o tamanho m�ximo da fila.
		Ent�o, a linha de c�digo printf("%d\n", fila[i % SIZE]); faz o seguinte:
		Ela imprime o valor do elemento da fila na posi��o i (levando em considera��o a fila circular).
		O formato "%d" especifica que estamos imprimindo um n�mero inteiro.
		O caractere "\n" adiciona uma nova linha ap�s a impress�o do n�mero, para que o pr�ximo valor seja exibido na linha seguinte no console.
		Essa linha � comumente usada para mostrar os elementos da fila circular � medida que s�o processados ou para depurar o c�digo e verificar os valores na fila durante a execu��o do programa.*/

}

int enqueue(int dado) {
    if ((fim + 1) % SIZE != inicio) {
        fila[fim] = dado;
        fim = (fim + 1) % SIZE;
        return 1;
    } else {
        printf("Fila cheia. N�o � poss�vel enfileirar.\n");
        return 0;
    }
}

int dequeue() {
    if (inicio != fim) {
        inicio = (inicio + 1) % SIZE;
        return 1;
    } else {
        printf("Fila vazia. N�o � poss�vel desenfileirar.\n");
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

