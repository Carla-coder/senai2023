/* Neste programa, usamos dois vetores separados: nomes para armazenar os nomes das mercadorias e precos para armazenar os preços correspondentes. 
Ao ler os preços, comparamos cada preço com o preço da mercadoria mais cara e mais barata até agora e atualizamos os índices maisCara e maisBarata conforme necessário. 
Depois de ler todos os preços, exibimos as informações da mercadoria mais cara e mais barata na tela.*/

#include <stdio.h>
#include <string.h>

int main(){
    // Declarando vetores para armazenar nomes e preços de 5 mercadorias
    char nomes[5][50];
    float precos[5];
    int maisCara = 0; // Índice da mercadoria mais cara
    int maisBarata = 0; // Índice da mercadoria mais barata
    int i;
    

    // Solicita ao usuário que insira informações sobre as mercadorias
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da mercadoria %d:", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preco da mercadoria %d:", i + 1);
        scanf("%f", &precos[i]);

        // Verifica se a mercadoria é a mais cara
        if (precos[i] > precos[maisCara]) {
            maisCara = i;
        }

        // Verifica se a mercadoria é a mais barata
        if (precos[i] < precos[maisBarata]) {
            maisBarata = i;
        }
    }

    // Exibe a mercadoria mais cara e a mais barata
    printf("\nMercadoria mais cara:\n");
    printf("Nome: %s\n", nomes[maisCara]);
    printf("Preço: R$ %.2f\n", precos[maisCara]);

    printf("\nMercadoria mais barata:\n");
    printf("Nome: %s\n", nomes[maisBarata]);
    printf("Preço: R$ %.2f\n", precos[maisBarata]);

    return 0;
}

