#include <stdio.h>

int main() {
    // Declarando vetores para armazenar nomes e pre�os de 5 mercadorias
    char nomes[5][50];
    float precos[5];
    float aumento;
    int i;

    // Solicita ao usu�rio que insira informa��es sobre as mercadorias
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da mercadoria %d:", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preco da mercadoria %d:", i + 1);
        scanf("%f", &precos[i]);

        // Aplica o aumento com base nas condi��es
        if (precos[i] < 1000) {
            aumento = precos[i] * 0.05; // 5% de aumento
        } else {
            aumento = precos[i] * 0.07; // 7% de aumento
        }

        // Atualiza o pre�o com o aumento
        precos[i] += aumento;
    }

    // Exibe o nome das mercadorias e seus novos pre�os
    printf("\nNome das Mercadorias e Novos Precos:\n");
    for (i = 0; i < 5; i++) {
        printf("Mercadoria %d: %s - Novo Preco: R$ %.2f\n", i + 1, nomes[i], precos[i]);
    }

    return 0;
}

