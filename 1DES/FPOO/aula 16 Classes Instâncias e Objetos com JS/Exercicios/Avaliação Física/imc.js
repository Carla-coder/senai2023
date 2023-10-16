class Paciente {
    constructor(nome, peso, altura) {
        this.nome = nome;
        this.peso = peso;
        this.altura = altura;
    }

    imc() {
        return (this.peso / (this.altura * this.altura)).toFixed(2);
    }

    diagnosticar() {
        const imc = this.imc();
        if (imc < 18.5) {
            return "Baixo peso";
        } else if (imc >= 18.5 && imc <= 24.9) {
            return "Peso normal";
        } else if (imc >= 25 && imc <= 29.9) {
            return "Sobrepeso";
        } else if (imc >= 30 && imc <= 34.9) {
            return "Obesidade grau 1";
        } else if (imc >= 35 && imc <= 39.9) {
            return "Obesidade grau 2";
        } else {
            return "Obesidade grau 3";
        }
    }
}

function criarPacientes() {
    const pacientes = [
        new Paciente("André Mattos", 80, 1.80),
        new Paciente("João da Silva", 100, 1.70),
        new Paciente("Maria de Souza", 60, 1.65),
        new Paciente("José de Oliveira", 90, 1.75),
        new Paciente("Silvia Andrade", 60, 1.85),
        new Paciente("Sueli Oliveira", 44, 1.65),
        new Paciente("Pedro de Souza", 110, 1.85),
    ];

    const main = document.getElementById("pacientes");

    const table = document.createElement("table");
    main.appendChild(table);

    const headerRow = document.createElement("tr");
    table.appendChild(headerRow);

    const headers = ["Nome", "Peso (kg)", "Altura (m)", "IMC", "Diagnóstico"];
    headers.forEach(headerText => {
        const header = document.createElement("th");
        header.textContent = headerText;
        headerRow.appendChild(header);
    });

    pacientes.forEach(paciente => {
        const row = document.createElement("tr");
        table.appendChild(row);

        const data = [paciente.nome, paciente.peso, paciente.altura, paciente.imc(), paciente.diagnosticar()];
        data.forEach(cellData => {
            const cell = document.createElement("td");
            cell.textContent = cellData;
            row.appendChild(cell);
        });
    });
}

// Chama a função para criar e exibir os pacientes na página
criarPacientes();
