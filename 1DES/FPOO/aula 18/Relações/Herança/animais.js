class animal {
    constructor(nome) {
        this.nome = nome;
    }
    emitirSom() {
        console.log(`${this.nome} faz um som`);
    }
}

class Cachorro extends animal {
    constructor(nome, faro) {
        super(nome);
        this.faro;
    }

}