/* Neste programa, usamos dois vetores separados: nomes para armazenar os nomes das mercadorias e precos para armazenar os pre�os correspondentes. 
Ao ler os pre�os, comparamos cada pre�o com o pre�o da mercadoria mais cara e mais barata at� agora e atualizamos os �ndices maisCara e maisBarata conforme necess�rio. 
Depois de ler todos os pre�os, exibimos as informa��es da mercadoria mais cara e mais barata na tela.*/

#include <stdio.h>
#include <string.h>

int main(){
    // Declarando vetores para armazenar nomes e pre�os de 5 mercadorias
    char nomes[5][50];
    float precos[5];
    int maisCara = 0; // �ndice da mercadoria mais cara
    int maisBarata = 0; // �ndice da mercadoria mais barata
    int i;
    

    // Solicita ao usu�rio que insira informa��es sobre as mercadorias
    for (i = 0; i < 5; i++) {
        printf("Digite o nome da mercadoria %d:", i + 1);
        scanf("%s", nomes[i]);
        printf("Digite o preco da mercadoria %d:", i + 1);
        scanf("%f", &precos[i]);

        // Verifica se a mercadoria � a mais cara
        if (precos[i] > precos[maisCara]) {
            maisCara = i;
        }

        // Verifica se a mercadoria � a mais barata
        if (precos[i] < precos[maisBarata]) {
            maisBarata = i;
        }
    }

    // Exibe a mercadoria mais cara e a mais barata
    printf("\nMercadoria mais cara:\n");
    printf("Nome: %s\n", nomes[maisCara]);
    printf("Pre�o: R$ %.2f\n", precos[maisCara]);

    printf("\nMercadoria mais barata:\n");
    printf("Nome: %s\n", nomes[maisBarata]);
    printf("Pre�o: R$ %.2f\n", precos[maisBarata]);

    return 0;
}

