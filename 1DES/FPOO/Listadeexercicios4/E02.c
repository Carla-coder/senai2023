/* O loop externo (controlado pela variável i) itera da posição 0 até a posição 3 (ou seja, os quatro primeiros times).
O loop interno (controlado pela variável j) começa da posição i + 1 e itera até a posição 4 (ou seja, os times restantes).
Dentro do loop interno, comparamos os pontos do time na posição i com os pontos do time na posição j.
Se os pontos do time na posição i forem menores do que os pontos do time na posição j, isso significa que o time na posição i deve ser classificado abaixo do time na posição j, de acordo com os pontos.
Para realizar a troca de posições, criamos uma variável temporária tempPontos para armazenar os pontos do time na posição i. Em seguida, atribuímos os pontos do time na posição j ao time na posição i e os pontos armazenados em tempPontos são atribuídos ao time na posição j.
Essa troca de posições é repetida até que os times estejam ordenados de forma decrescente com base nos pontos. Após esse processo, a classificação final dos times estará correta, e os times serão impressos em ordem decrescente de pontos.*/

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

    printf("\nClassificação Final:\n");
    for (i = 0; i < 5; i++) {
        printf("%dº Lugar: %s - %d pontos\n", i + 1, nomes[i], pontos[i]);
    }

    return 0;
}

