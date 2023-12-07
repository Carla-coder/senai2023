class decoracao {
    constructor(tipo) {
        this.tipo= tipo;
    }
}

class livro {
    constructor(titulo) {
        this.titulo = titulo;
    }
}

class estante {
    constructor() {
        this.decoracoes = [];
        this.livros = [];
        this.estantes = [];
    }

    addLivro(livro) {
        this.livros.push(livro)
    }

    addDecoracao(decoracao) {
        this.decoracoes.push(decoracao);
    }
}

const decoracao = new decoracao('vaso','estatueta');
const livro = new livro('O que Somos Nós');
const estante = new estantes(3);
const estantes = [estantes, estantes, estantes];

    



