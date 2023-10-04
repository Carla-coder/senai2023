/* 4. Desenvolva um programa que leia o nome de um time de futebol, o número de vitórias e o número de empates. 
O programa deverá calcular e apresentar na tela, o nome do time e o total de pontos. 
Lembrando que a vitória vale 3 pontos e o empate vale 1 ponto. */

function calcularPontos() {
    var nomeTime = document.getElementById("nomeTime").value;
    var vitorias = parseInt(document.getElementById("vitorias").value);
    var empates = parseInt(document.getElementById("empates").value);

    if (isNaN(vitorias) || isNaN(empates)) {
        alert("Por favor, insira valores válidos para vitórias e empates.");
        return;
    }

    var totalPontos = vitorias * 3 + empates;

    document.getElementById("nomeTimeResultado").textContent = nomeTime;
    document.getElementById("totalPontos").textContent = totalPontos;
}

