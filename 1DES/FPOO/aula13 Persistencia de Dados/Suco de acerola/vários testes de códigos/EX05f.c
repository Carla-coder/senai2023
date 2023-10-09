#include <stdio.h>

int main() {
    int amigos, frutas;

    while (1) {
        scanf("%d %d", &amigos, &frutas);
        
        if (amigos == 0 && frutas == 0) {
            break; // Encerra o programa quando amigos e frutas são zero
        }

        double volume = (double) frutas / (amigos * 50); // Cálculo do volume de suco em litros
        printf("%.2lf\n", volume); // Exibe o volume com 2 casas decimais
    }

    return 0;
}

