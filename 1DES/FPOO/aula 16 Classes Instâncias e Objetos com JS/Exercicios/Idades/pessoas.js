class Pessoa {
  constructor(nome, nascimento, sexo) {
      this.nome = nome;
      this.nascimento = new Date(nascimento);
      this.sexo = sexo;
      this.classificacao = this.classificar(); // Adicionando a classificação no construtor
  }

  calcularIdade() {
      const dataAtual = new Date();
      const diff = dataAtual - this.nascimento;
      const idadeMilissegundos = new Date(diff);
      return idadeMilissegundos.getUTCFullYear() - 1970;
  }

  classificar() {
      const idade = this.calcularIdade();
      if (idade < 14) {
          return "Criança";
      } else if (idade < 20) {
          return "Jovem";
      } else if (idade < 40) {
          return "Adulto";
      } else if (idade < 59) {
          return "Meia Idade";
      } else {
          return "Idoso";
      }
  }

  toTableRow() {
      const row = document.createElement("tr");
      row.innerHTML = `
          <td>${this.nome}</td>
          <td>${this.nascimento.toLocaleDateString()}</td>
          <td>${this.sexo === "M" ? "Masculino" : "Feminino"}</td>
          <td>${this.calcularIdade()} anos</td>
          <td>${this.classificacao}</td>
      `;
      return row;
  }
}

const formCadastro = document.getElementById("form-cadastro");
const tabelaPessoas = document.getElementById("tabela-pessoas");
const pessoas = [];

formCadastro.addEventListener("submit", function (event) {
  event.preventDefault();

  const nome = document.getElementById("nome").value;
  const nascimento = document.getElementById("nascimento").value;
  const sexo = document.getElementById("sexo").value;

  const pessoa = new Pessoa(nome, nascimento, sexo);
  pessoas.push(pessoa);

  // Adiciona a pessoa na tabela
  tabelaPessoas.appendChild(pessoa.toTableRow());

  // Limpa os campos do formulário
  formCadastro.reset();
});
