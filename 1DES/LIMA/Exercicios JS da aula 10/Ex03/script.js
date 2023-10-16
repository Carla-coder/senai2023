/* 3.Desenvolva um programa que leia o nome e o salário de uma pessoa, 
depois leia o valor do índice percentual (%) de reajuste do salário. 
Calcule e apresente na tela, o valor do novo salário e o nome da pessoa. */


function calcularNovoSalario() {
    var nome = document.getElementById("nome").value;
    var salarioAtual = parseFloat(document.getElementById("salarioAtual").value);
    var percentualReajuste = parseFloat(document.getElementById("percentualReajuste").value);

    if (isNaN(salarioAtual) || isNaN(percentualReajuste)) {
        alert("Por favor, insira valores válidos.");
        return;
    }

    var novoSalario = salarioAtual + (salarioAtual * (percentualReajuste / 100));

    document.getElementById("nomePessoa").textContent = nome;
    document.getElementById("novoSalario").textContent = novoSalario.toFixed(2);
}