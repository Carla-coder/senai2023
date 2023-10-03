// let - variável Local (dentro de Funções)
// var - variável Global (fora de Funções)
// const - variável Constante (elas não mudam, mas não são imutáveis. Ex: um objeto "Json", posso modificar o contéudo deste objeto)

//const obj = [
//    {
//      name: 'Lucas',
//      age: 20,
//      country: 'Brazil' // temos aqui neste exemplo 3 propriedades
//    },
//    {
//      name: 'Pedro',
//      age: 40,
//      country: 'Brazil'
//    },
//    {
//      name: 'João',
//      age: 30,
//      country: 'Brazil'
//    }
//  ];

// console.log(obj); // não há necessidade de ";" no final, mas se colocar não há problema, ele funciona com ou sem.
// console.warn('AVISO');
// console.error('ERRO'); // fica em vermelho
// console.table(obj); // facilita a visualização

// Operadores Aritméticos

// + soma 
// - subtração 
// * multiplicação 
// / divisão 
// ** potenciação 
// % resto da divisão 

// Operadores de Contribuição (Lógicos)

// > maior 
// < menor 
// > = maior ou igual que 
// < = menor ou igual que 
// = atribuição 
// == igualdade (valor) 
// != diferente (valor)
// === igualdade restrita (valor e tipo)
// !== diferença restrita (valor e tipo)

/* 1.Desenvolva um programa que leia três variáveis (a, b, c) e resolva a expressão: ( a + b ) / c.
// var a = 20
// var b = 40
// var c = 60
// var resultado =((a + b) / c)
// console.log("O resultado da expressão (a + b) / c é: " + resultado);
//*/

/* 2.Desenvolva um programa que leia a velocidade de um carro (km/h) e a distância a ser percorrida (km) por ele. 
// Calcule e apresente na tela, quanto tempo (horas) será necessário para o carro percorrer a distância informada.
// var velocidade = 100
// var distancia =  25
// var tempoHoras = distancia / velocidade 
// console.log("Tempo necessário para percorrer a distância: " + tempoHoras + " horas")
// */

/* 3.Desenvolva um programa que leia o nome e o salário de uma pessoa, depois leia o valor do índice percentual (%) de reajuste do salário. 
// Calcule e apresente na tela, o valor do novo salário e o nome da pessoa.
// var nome = 'Carla' // precisa colocar entre aspas simples porque é uma string, texto
// var salario = 1000
// var reajuste = 10
// var novoSalario = salario + (salario * reajuste / 100)
// console.log(nome + ' - novo salário ' + novoSalario)
// * /

// mini função e concatenar
// var data = new Date()

// var dia = data.getDay()
// var mes = data.getMonth() + 1
// var ano = data.getFullYear()

// var anoCompleto = dia + '/' + mes + '/' + ano
// var anoCompleto = `${dia}/${mes}/${ano}`

// var hora = data.getHours()
// var min = data.getMinutes()

// var horaCompleta = `${hora}:${min}`

// console.log(data)
// console.log(anoCompleto, horaCompleta)

// Math.ceil() // arredonda para cima os valores
// Math.floor() // arredonda para baixo os valores
// Math.round() // arredonda para o mais próximo de acordo com a casa decimal

// var n = 10

// console.log(Math.ceil(10.1))
// console.log(Math.floor(10.9))
// console.log(Math.round(10.4))

// Number.parseInt() // converte uma string para inteiro
// Number.parseFloat() // converte uma string para float

// console.log(n, Number.parseFloat(n))

//     if() {
//     }else if() {
//     }else {
//     }       

// condição ? true : false; // os ":" significa o else (senão) if ternário 

// switch () {
//     case 1 :
//         break;
//     default :
//         break;
// }

// for( let i = 0; i < 10; i++){
//     console.log(i);
// }

// while() {
// }

// do {
// }while();

// var lista = 'a b c d e'.split(" "); // split significa repartir o espaço
// for(let i = 0; i < lista.length; i++) {
//     console.log(lista[i]);
// }

// lista.forEach(item) => {
//     console.log(item);
// }

// for(let item of lista) { // neste caso funciona, mas não se usa muito.
//     console.log(item);
// }

// function nome() { //  exemplo de como declarar função
        console.log("Executando a função nome");
}
nome();

*****************************************************************************************************************************
// fazer os 2 primeiros exercicios da lista 2 (aula 04) e os dois primeiros da lista 3 (aula 06)
// Lista 2 (aula 04) Ex 01 e 02
/* 1.Desenvolva um programa que leia o preço de um produto e se o preço for maior do que 1000 reais aplique um desconto de 8%. 
Mostre o preço final*/

// Função para calcular o preço final com desconto
function calcularPrecoFinal(preco) {
    if (preco > 1000) {
        // Aplica um desconto de 8% se o preço for maior que 1000 reais
        return preco - (preco * 0.08);
    } else {
        // Caso contrário, não há desconto
        return preco;
    }
}

// Preço do produto (altere este valor conforme necessário)
var precoProduto = 1200; // Exemplo: preço acima de 1000 reais

// Calcula o preço final chamando a função
var precoFinal = calcularPrecoFinal(precoProduto);

// Exibe o preço final
console.log("Preço final do produto: R$" + precoFinal.toFixed(2));

/* 2.Desenvolva um programa que leia o salário de um funcionário e o número de filhos. 
Se o salário for menor do que 2000 o funcionário receberá um salário família equivalente a 45 reais por filho. 
Apresente o salário final.*/

// Função para calcular o salário final com base no salário e no número de filhos

function calcularSalarioFinal(salario, numeroFilhos) {
    var salarioFamilia = 0;

    if (salario < 2000) {
        // Calcula o salário família para cada filho
        salarioFamilia = 45 * numeroFilhos;
    }

    // Calcula o salário final somando o salário base e o salário família
    var salarioFinal = salario + salarioFamilia;

    return salarioFinal;
}

// Valores definidos diretamente no código
var salario = 1800; // Exemplo de salário
var numeroFilhos = 3; // Exemplo de número de filhos

// Chama a função para calcular o salário final
var salarioFinal = calcularSalarioFinal(salario, numeroFilhos);

// Exibe o resultado
console.log("Salário final do funcionário: R$" + salarioFinal.toFixed(2));

// Lista 3 (aula 06) Ex 01 e 02

// 1. Faça um programa que mostre na tela valores no intervalo entre 10 e 200;

// Função para mostrar valores no intervalo entre 10 e 200
function mostrarValoresNoIntervalo() {
    for (var i = 10; i <= 200; i++) {
        console.log(i);
    }
}
// Chama a função para mostrar os valores
mostrarValoresNoIntervalo();

// 2. Faça um programa que mostre na tela valores no intervalo entre 200 e 10;

// Função para mostrar valores no intervalo entre 200 e 10 em ordem decrescente
function mostrarValoresNoIntervalo() {
    for (var i = 200; i >= 10; i--) {
        console.log(i);
    }
}

// Chama a função para mostrar os valores
mostrarValoresNoIntervalo();



    
