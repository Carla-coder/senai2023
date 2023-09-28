#include <stdio.h>
int main(){
	
	return 0;
}


void portasAbertas(int N) {
    int portas[N + 1]; // Vetor para representar o estado das portas

    // Inicialmente, todas as portas estão fechadas (0)
    for (i = 0; i <= N; i++) {
        portas[i] = 0;
    }

    // Simulação dos descendentes
    for (i = 1; i <= N; i++) {
        for (j = i; j <= N; j += i) {
            // Trocar o estado da porta
            portas[j] = 1 - portas[j];
        }
    }

    // Encontrar e imprimir as portas abertas
    for (i = 1; i <= N; i++) {
        if (portas[i] == 1) {
            printf("%d ", i);
        }
    }
    printf("\n");
}

int main() {
    int N;
    while (1) {
        scanf("%d", &N);
        if (N == 0) {
            break;
        }
        portasAbertas(N);
    }
    return 0;
}

