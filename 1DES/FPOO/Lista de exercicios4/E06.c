/* Neste programa, usamos dois vetores separados: nomes para armazenar os nomes das mercadorias e precos para armazenar os pre�os correspondentes. 
O valor do desconto � lido uma �nica vez e aplicado a todas as mercadorias. 
Calculamos o valor do desconto e o pre�o final com base no valor percentual fornecido, e em seguida, exibimos as informa��es de cada mercadoria na tela.*/

#include <stdio.h>
#include <string.h>

int main(){
    // Declarando vetores para armazenar nomes e pre�os de 10 mercadorias
    char nomes[10][50];
    float precos[10];
    float desconto, valorDesconto, precoFinal;
    int i;

    // Solicita ao usu�rio que insira informa��es sobre as mercadorias
    printf("Digite o valor percentual de desconto para todas as mercadorias:");
    scanf("%f", &desconto);
    printf("\n******************************************************************\n");

    for (i = 0; i < 10; i++) {
        printf("\nDigite o nome da mercadoria %d:", i + 1);
        scanf("%s", nomes[i]);
       
        printf("Digite o preco da mercadoria %d:", i + 1);
        scanf("%f", &precos[i]);

        // Calcula o valor do desconto e o pre�o final
        valorDesconto = (desconto / 100) * precos[i];
        precoFinal = precos[i] - valorDesconto;

        // Exibe as informa��es da mercadoria
        printf("\nMercadoria %d:\n", i + 1);
        printf("Nome: %s\n", nomes[i]);
        printf("Pre�o Original: R$ %.2f\n", precos[i]);
        printf("Valor do Desconto: R$ %.2f\n", valorDesconto);
        printf("Pre�o Final (com desconto): R$ %.2f\n", precoFinal);
        printf("\n******************************************************************\n");
    }

    return 0;
}

