class Marca {
    constructor(nome){
        this.nome = nome;
    }

    FalarMarca(){
        return `Eu sou o carro da marca ${this.nome}`;
    }
}

class Modelo extends Marca {
    constructor(marca,modelo) {
        super(marca);
        this.modelo = modelo;
    }

    FalarModelo(){
        return `${this.FalarMarca()} e sou o modelo ${this.modelo}`;
    }
}

const carro = new Modelo("Volkswagen Gol");
const carro1 = new Modelo("Hyundai HB20");
const carro2 = new Modelo("Chevrolet Onix");
const carro3 = new Modelo("Fiat Mobi");
const carro4 = new Modelo("Fiat Argo");

console.table(carro);

console.table(carro1);

console.table(carro2);

console.table(carro3);

console.table(carro4);
