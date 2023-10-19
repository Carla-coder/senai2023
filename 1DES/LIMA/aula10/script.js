// var nome = document.getElementById('nome')
// var resultado = document.getElementById('resultado')
// function BuscarElemento(){
//    // let nome = document.getElementById("nome")
//    // console.log(nome.value)
//    resultado.innerHTML = nome.value
// }

// LIsta 01 aula 02
// 1.Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c
// Função para somar dois números e dividir pelo terceiro
// function somarDividir(numero1, numero2, numero3) {
//     var resultado = (numero1 + numero2) / numero3;
//     return resultado;
// }

// // Define os números
// var num1 = 10;
// var num2 = 20;
// var num3 = 5;

// // Chama a função e exibe o resultado
// var resultadoFinal = somarDividir(num1, num2, num3);
// console.log("Resultado: " + resultadoFinal); 


// function calcular() {
//     var num1 = parseFloat(document.getElementById("numero1").value);
//     var num2 = parseFloat(document.getElementById("numero2").value);
//     var num3 = parseFloat(document.getElementById("numero3").value);

//     var soma = num1 + num2;
//     var divisao = soma / num3;

//     document.getElementById("resultado").textContent = "Resultado: " + divisao;
// }

function calculo(){
    let a = Number(document.getElementById('a').value);
    let b = Number(document.getElementById('b').value);
    let c = Number(document.getElementById('c').value);

    document.querySelector('#result').innerHTML = `A soma de 'a' + 'b' divido por 'c' é igual a: ${(a+b)/c}`
}