/* 9. Desenvolva um programa que leia o nome e o preço de uma mercadoria. 
O programa deverá calcular um aumento de 5% no preço da mercadoria e mostrar o nome da mercadoria 
e o seu novo preço.*/

function calcularAumento() {
    var nomeMercadoria = document.getElementById("nome").value;
    var preco = parseFloat(document.getElementById("preco").value);

    var aumento = preco * 0.05;
    var novoPreco = preco + aumento;

    document.getElementById("nomeMercadoria").textContent = nomeMercadoria;
    document.getElementById("novoPreco").textContent = novoPreco.toFixed(2);
}




