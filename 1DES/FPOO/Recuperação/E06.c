#include <stdio.h>
int main(){
    float distancia, tempo, velocidade_media;
	
	printf("Digite a distancia entre as cidades (em kilometros):");
    scanf("%f", &distancia);
	
	printf("Digite o tempo que o veiculo levou para percorrer a distancia (em horas):");
    scanf("%f", &tempo);

    velocidade_media = distancia / tempo;

	printf("A velocidade media do veiculo eh %.2f km/h\n", velocidade_media);

    return 0;
}

