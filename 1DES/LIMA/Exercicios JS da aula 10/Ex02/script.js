/* 2.Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. 
Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.*/

function calcularTempo() {
    var velocidade = parseFloat(document.getElementById("velocidade").value);
    var distancia = parseFloat(document.getElementById("distancia").value);

    if (isNaN(velocidade) || isNaN(distancia)) {       
        return;
    }

    var tempo = distancia / velocidade;
    document.getElementById("tempo").textContent = tempo.toFixed(2) + " horas";
}

/* if (isNaN(velocidade) || isNaN(distancia)) { ... }: 
Este bloco verifica se tanto velocidade quanto distancia são números válidos. 
A função isNaN() (Is Not-a-Number) é usada para determinar se um valor não é um número válido. 
Se qualquer um dos valores não for válido (ou seja, se não for um número), o bloco dentro das chaves { ... } 
é executado. */
        
