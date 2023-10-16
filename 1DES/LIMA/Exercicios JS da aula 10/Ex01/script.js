/* 1. Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c */

function calcular() {
    var num1 = parseFloat(document.getElementById("numero1").value);
    var num2 = parseFloat(document.getElementById("numero2").value);
    var num3 = parseFloat(document.getElementById("numero3").value);

    var soma = num1 + num2;
    var divisao = soma / num3;

    document.getElementById("resultado").textContent = "Resultado: " + divisao;
}