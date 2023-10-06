class Pessoa {
    constructor(nome, nascimento, sexo) {
        this.nome = nome;
        this.nascimento = nascimento;
        this.sexo = sexo;
        this.idade = this.calcularIdade(); //Atributo calculado
        this.classificacao = this.classificacao();
    }

    // calcIdade() {
    //     if (this.nascimento == undefined) return 0;
    //     let hoje = new Date();
    //     let difAno = hoje.getFullYear() - this.nascimento.getFullYear();
    //     let difMes = hoje.getMonth() - this.nascimento.getMonth();
    //     let difDia = hoje.getDate() - this.nascimento.getDate();
    //     if (difMes < 0 || (difMes == 0 && difDia < 0)) {
    //         difAno--;
    //     }
    //     return difAno;
    // }

//     calcIdade() {
//     const hoje = new Date();
//     const anoAtual = hoje.getFullYear();
//     const nascimento = new Date(this.nascimento);
//     const anoNascimento = nascimento.getFullYear();
//     return anoAtual - anoNascimento;
//   }
    calcularIdade() {
    const hoje = new Date();
    const diferencaAnos = hoje.getFullYear() - this.nascimento.getFullYear();
    if (
        hoje.getMonth() < this.nascimento.getMonth() ||
        (hoje.getMonth() === this.nascimento.getMonth() && hoje.getDate() < this.nascimento.getDate())
    ) {
        return diferencaAnos - 1;
    }
    return diferencaAnos;
}

   classificacao() {
   const idade = this.calcularIdade();
    if (idade <= 11) {
      return "Criança";
    } else if (idade <= 17) {
      return "Jovem";
    } else if (idade <= 59) {
      return "Adulto";
    } else if (idade <= 64) {
      return "Meia idade";
    } else {
      return "Idoso";
    }
  }

    // toTable() {
    //     return `<tr>
    //                 <td>${this.nome}</td>
    //                 <td>${this.nascimento.toLocaleDateString()}</td>
    //                 <td>${this.sexo}</td>
    //                 <td>${this.idade}</td>
    //                 <td>${this.classificação}</td>
    //             </tr>`;
    //             }
               
    //     }
    toTable() {
        const tabela = document.getElementById("corpotabela");
        const tbody = tabela.getElementsByTagName("tbody")[0];
        const newRow = tbody.insertRow();

        const cellNome = newRow.insertCell(0);
        const cellNascimento = newRow.insertCell(1);
        const cellSexo = newRow.insertCell(2);
        const cellIdade = newRow.insertCell(3);
        const cellClassificacao = newRow.insertCell(4);

        cellNome.innerHTML = this.nome;
        cellNascimento.innerHTML = this.nascimento.toLocaleDateString();
        cellSexo.innerHTML = this.sexo;
        cellIdade.innerHTML = this.calcularIdade();
        cellClassificacao.innerHTML = this.classificacao;
    }
}
        function cadastrarPessoa() {
            const nome = document.getElementById("nome").value;
            const nascimento = document.getElementById("nascimento").value;
            const sexo = document.getElementById("sexo").value;
        
            const pessoa = new Pessoa(nome, nascimento, sexo);
            pessoa.toTable();
        
            // Limpar campos após o cadastro
            document.getElementById("nome").value = "";
            document.getElementById("nascimento").value = "";
        }
        

const pessoas = [];

pessoas.push(new Pessoa("João Silva", new Date(1990, 8, 10), "M"));
pessoas.push(new Pessoa("Maria Santos", new Date(2018, 13, 10), "F"));
pessoas.push(new Pessoa("José Oliveira", new Date(2007, 9, 16), "M"));
pessoas.push(new Pessoa("Joana Gimenes", new Date(2002, 7, 21), "F"));
pessoas.push(new Pessoa("Pedro Martins", new Date(1998, 4, 1), "M"));

const form = document.getElementById("novaPessoa");
const corpo = document.getElementById("corpoTabela");

form.addEventListener("submit", (event) => {
    event.preventDefault();
    let pessoa = new Pessoa(form.nome.value, new Date(form.nascimento.value), form.sexo.value);
    pessoas.push(pessoa);
    form.reset();
    atualizaTabela();
});

function atualizaTabela() {
    corpo.innerHTML = "";
    pessoas.forEach((pessoa) => {
        corpo.innerHTML += pessoa.toTable();
    });
}