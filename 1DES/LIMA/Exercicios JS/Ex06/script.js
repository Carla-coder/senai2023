/* 6. Sabendo-se que a velocidade de cruzeiro de um avião 747-300 é de 900 km/h, 
faça um programa que leia uma distância (km), calcule e apresente na tela, quanto tempo (horas) será necessário 
para um 747-300 sobrevoar a distância informada.*/

function calcularTempoDeVoo() {
    var distancia = parseFloat(document.getElementById("distancia").value);

    if (isNaN(distancia) || distancia <= 0) {
        alert("Por favor, insira uma distância válida em quilômetros.");
        return;
    }

    var velocidadeCruzeiro = 900; // Velocidade de cruzeiro do 747-300 em km/h
    var tempoDeVoo = distancia / velocidadeCruzeiro;

    document.getElementById("distanciaInformada").textContent = distancia;
    document.getElementById("tempoDeVoo").textContent = tempoDeVoo.toFixed(2) + " horas";
}