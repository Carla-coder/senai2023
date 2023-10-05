// class Coisa{
//     constructor(nome, preco, qtd){
//     this.nome = nome;
//     this.preco = preco;
//     this.qtd = qtd;
//     total(){
//         return this.preco * this.qtd
//     }

//     showHTML() {
//         let str = `<label>Nome:</label><label>${this.nome}</label>`;
//         str += `<label>Preço:</label><label>${this.preco}</label>`;
//         str += `<label>Quantidade:</label><label>${this.qtd}</label>`;
//         str += `<label>Total:</label><label>${this.total().toFixed(2)}</label>`;
//         return str;
//     }
// }
//     // const obj = new Coisa ('Cadeira', 149.99, 6);
//     // const obj2 = new Coisa ('Mesa', 349.99, 1);
//     // const obj3 = new Coisa ('Caneta', 2.99, 50);
//     // const obj4 = new Coisa ('Sofá', 1200.00, 1);
//     // const obj5 = new Coisa ('Poltrona do papai', 5500.00, 1);

//     // const main = document.getElementById('objetos');
//     // const div1 = document.createElement('div');
//     // const div2 = document.createElement('div');
//     // const div3 = document.createElement('div');
//     // const div4 = document.createElement('div');
//     // const div5 = document.createElement('div');

//     //Criar instâncias desta classe em uma lista
//     const lista = [];
//     lista.push(new Coisa('Cadeira', 149.90, 6));
//     lista.push(new Coisa('Mesa', 349.90, 1));
//     lista.push(new Coisa('Caneta', 2.99, 50));
//     lista.push(new Coisa('Sofá', 1200.00, 1));
//     lista.push(new Coisa('Poltrona do papai', 5500.00, 1));

// //Mostrar no console
//     console.table(lista);

// //Mostrar no HTML
//     const main = document.getElementById('objetos');
//     lista.forEach(obj => {
//     const div = document.createElement('div');
//     div.innerHTML = obj.showHTML();
//     main.appendChild(div);
// });



//Criar objetos a partir de uma classe
class Coisa{
    constructor(nome, preco, qtd){
        this.nome = nome;
        this.preco = preco;
        this.qtd = qtd;
    }
    total(){
        return this.preco * this.qtd
    }
    showHTML(){
        let str = `<label>Nome:</label><label>${this.nome}</label>`;
        str += `<label>Preço:</label><label>${this.preco}</label>`;
        str += `<label>Quantidade:</label><label>${this.qtd}</label>`;
        str += `<label>Total:</label><label>${this.total().toFixed(2)}</label>`;
        return str;
    }
}
//Criar instâncias desta classe em uma lista
const lista = [];
lista.push(new Coisa('Cadeira', 149.90, 6));
lista.push(new Coisa('Mesa', 349.90, 1));
lista.push(new Coisa('Caneta', 2.99, 50));
lista.push(new Coisa('Sofá', 1200.00, 1));
lista.push(new Coisa('Poltrona do papai', 5500.00, 1));

//Mostrar no console
console.table(lista);

//Mostrar no HTML
const main = document.getElementById('objetos');
lista.forEach(obj => {
    const div = document.createElement('div');
    div.innerHTML = obj.showHTML();
    main.appendChild(div);
});