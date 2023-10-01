/* O loop externo (controlado pela vari�vel i) itera da posi��o 0 at� a posi��o 3 (ou seja, os quatro primeiros times).
O loop interno (controlado pela vari�vel j) come�a da posi��o i + 1 e itera at� a posi��o 4 (ou seja, os times restantes).
Dentro do loop interno, comparamos os pontos do time na posi��o i com os pontos do time na posi��o j.
Se os pontos do time na posi��o i forem menores do que os pontos do time na posi��o j, isso significa que o time na posi��o i deve ser classificado abaixo do time na posi��o j, de acordo com os pontos.
Para realizar a troca de posi��es, criamos uma vari�vel tempor�ria tempPontos para armazenar os pontos do time na posi��o i. Em seguida, atribu�mos os pontos do time na posi��o j ao time na posi��o i e os pontos armazenados em tempPontos s�o atribu�dos ao time na posi��o j.
Essa troca de posi��es � repetida at� que os times estejam ordenados de forma decrescente com base nos pontos. Ap�s esse processo, a classifica��o final dos times estar� correta, e os times ser�o impressos em ordem decrescente de pontos.*/

#include <stdio.h>
#include <string.h>

int main(){
    
    char nomes[5][50];
    int vitorias[5];
    int empates[5];
    int pontos[5];
    int i, j, tempPontos;
    
	for (i = 0; i < 5; i++) {
        printf("Digite o nome do time %d:", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o numero de vitorias do time %d:", i + 1);
        scanf("%d", &vitorias[i]);
        printf("Digite o numero de empates do time %d:", i + 1);
        scanf("%d", &empates[i]);

        pontos[i] = (vitorias[i] * 3) + empates[i];
    }

    for (i = 0; i < 4; i++) {
        for (j = i + 1; j < 5; j++) {
            if (pontos[i] < pontos[j]) {
                tempPontos = pontos[i];
                pontos[i] = pontos[j];
                pontos[j] = tempPontos;

                char tempNome[50];
                strcpy(tempNome, nomes[i]);
                strcpy(nomes[i], nomes[j]);
                strcpy(nomes[j], tempNome);
            }
        }
    }

    printf("\nClassifica��o Final:\n");
    for (i = 0; i < 5; i++) {
        printf("%d� Lugar: %s - %d pontos\n", i + 1, nomes[i], pontos[i]);
    }

    return 0;
}

