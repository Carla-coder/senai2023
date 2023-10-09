/* 5.Desenvolva um programa que leia um número ”n” inteiro, positivo e diferente de zero e apresente na tela: n – 1, 
e também n + 1.*/

function realizarOperacoes() {
    var numero = parseInt(document.getElementById("numero").value);

    if (isNaN(numero) || numero <= 0) {
        alert("Por favor, digite um número inteiro positivo e diferente de zero.");
        return;
    }

    var numeroMenosUm = numero - 1;
    var numeroMaisUm = numero + 1;

    document.getElementById("numeroDigitado").textContent = numero;
    document.getElementById("resultadoSubtracao").textContent = numeroMenosUm;
    document.getElementById("resultadoAdicao").textContent = numeroMaisUm;
}