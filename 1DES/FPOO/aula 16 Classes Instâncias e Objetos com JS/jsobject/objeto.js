//alert('Oi , sou o JS estou aqui para te servir!!!') // é uma função que recebe como parâmetro um string
// Constante é Objeto ="const"

// Objeto declarado diretamente
const obj = {}; // objeto em minusculo é um "tipo"
obj.nome ='Carla';
// Atributos dinamicamente
obj['nome']= 'Carla2';
obj.preço = 39.90;
obj.qtd = 10;

// Método
obj.total = function (){
    return obj.preço + obj.qtd;
}

//Método com arrow function
obj.showHTML = () => {
    //return `<div><p></p> Nome: ${obj.nome}</div>`;
    //let str = `<div>`;

    let str = `<label>Nome:</label><label>${obj.nome}</label>`;
    str += `<label>Preço:</label><label>${obj.preço}</label>`;
    str += `<label>Quantidade:</label><label>${obj.qtd}</label>`;
    str += `<label>Total:</label><label>${obj.total().toFixed(2)}</label>`;
    return str;

    //str += `</div>`;
}

// Saídas no console
console.log(obj);
console.log('Valor total - R$' +obj.total().toFixed(2));

// Sáida no HTML
const main = document.getElementById('objetos');
const div = document.createElement('div');
div.innerHTML = obj.showHTML();
main.appendChild(div);


// alert(obj);
// console.log(obj);