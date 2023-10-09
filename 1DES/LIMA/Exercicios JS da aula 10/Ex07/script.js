/* 7. Um caminhão consegue transportar 18 toneladas de laranjas em uma viagem que faz entre a fazenda 
e a fábrica de suco de laranja. Um alqueire de terra produz em média 250 toneladas de laranjas. 
Faça um programa que leia quantos caminhões e quantos alqueires uma fazenda produtora de laranjas possui, 
calcule e apresente na tela quantas viagens de caminhão serão necessárias para transportar toda a colheita de laranjas.*/

function calcularViagens() {
    var caminhoes = parseInt(document.getElementById("caminhoes").value);
    var alqueires = parseInt(document.getElementById("alqueires").value);

    if (isNaN(caminhoes) || isNaN(alqueires) || caminhoes <= 0 || alqueires <= 0) {
        alert("Por favor, insira valores válidos.");
        return;
    }

    var capacidadeCaminhao = 18; // Capacidade de carga de cada caminhão em toneladas
    var producaoPorAlqueire = 250; // Produção média de laranjas por alqueire em toneladas

    var quantidadeLaranjas = alqueires * producaoPorAlqueire;
    var viagensNecessarias = Math.ceil(quantidadeLaranjas / (caminhoes * capacidadeCaminhao));

    document.getElementById("quantidadeCaminhoes").textContent = caminhoes;
    document.getElementById("quantidadeAlqueires").textContent = alqueires;
    document.getElementById("viagensNecessarias").textContent = viagensNecessarias;
}