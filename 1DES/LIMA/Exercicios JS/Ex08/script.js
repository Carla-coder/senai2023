/* 8. Desenvolva um programa que leia o raio (cm) e a altura (cm) de um cilindro. 
Calcule e mostre a área (cm2) e o volume (cm3) do cilindro.*/

function calcularCilindro() {
    var raio = parseFloat(document.getElementById("raio").value);
    var altura = parseFloat(document.getElementById("altura").value);

    if (isNaN(raio) || isNaN(altura) || raio <= 0 || altura <= 0) {
        alert("Por favor, insira valores válidos.");
        return;
    }

    var areaSuperficie = 2 * Math.PI * raio * altura;
    var volume = Math.PI * Math.pow(raio, 2) * altura;

    document.getElementById("areaSuperficie").textContent = areaSuperficie.toFixed(2);
    document.getElementById("volume").textContent = volume.toFixed(2);
}