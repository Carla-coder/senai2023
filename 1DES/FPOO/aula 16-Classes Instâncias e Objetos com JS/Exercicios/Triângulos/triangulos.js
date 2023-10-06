class Triangulo {
    constructor(lado1, lado2, lado3) {
        this.lado1 = lado1;
        this.lado2 = lado2;
        this.lado3 = lado3;
    }

    tipo() {
        if (this.lado1 === this.lado2 && this.lado2 === this.lado3) {
            return "Equilátero";
        } else if (this.lado1 === this.lado2 || this.lado2 === this.lado3 || this.lado1 === this.lado3) {
            return "Isósceles";
        } else {
            return "Escaleno";
        }
    }
}

function criarTriangulos() {
    const triangulos = [
        new Triangulo(10, 20, 30),
        new Triangulo(10, 10, 30),
        new Triangulo(10,20, 10),
        new Triangulo(30, 10, 10),
        new Triangulo(20, 20, 20),
    ];

    const main = document.getElementById("triangulos");

    const table = document.createElement("table");
    main.appendChild(table);

    const headerRow = document.createElement("tr");
    table.appendChild(headerRow);

    const headers = ["Lado 1", "Lado 2", "Lado 3", "Tipo"];
    headers.forEach(headerText => {
        const header = document.createElement("th");
        header.textContent = headerText;
        headerRow.appendChild(header);
    });

    triangulos.forEach(triangulo => {
        const row = document.createElement("tr");
        table.appendChild(row);

        const data = [triangulo.lado1, triangulo.lado2, triangulo.lado3, triangulo.tipo()];
        data.forEach(cellData => {
            const cell = document.createElement("td");
            cell.textContent = cellData;
            row.appendChild(cell);
        });
    });
}

// Chama a função para criar e exibir os triângulos na página
criarTriangulos();


