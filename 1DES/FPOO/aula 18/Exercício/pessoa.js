function inss(salario) {
    if (salario < 1320.01)
        return salario * 7.5 / 100;
    else if (salario < 2571.30)
        return salario * 9 / 100;
    else if (salario < 3856.95)
        return salario * 12 / 100;
    else if (salario < 7507.49)
        return salario * 14 / 100;
    else
        return 1051.05;
}

function irrf(salario) {
    if (salario < 1903,99)
        return 0;
    else if (salario < 2826,66)
        return salario * 7.5 / 100 - 142.8;
    else if (salario < 3751.06)
        return salario * 15 / 100 - 354.8;
    else if (salario < 4664.69)
        return salario * 22.5 / 100 - 636.13;
    else
        return salario * 27.5 / 100 - 869.36;
}

//let salario = 1000;
//let inss = inss(salario);
//let salarioBase = salario - inss;
//let irrf = irrf(salarioBase);
//let salarioLiquido = salarioBase - irrf;

//console.log("Salário:" + salario);
//console.log("INSS:" + inss);
//console.log("Salário Base:" + salarioBase);
//console.log("IRFF:" + irrf);
//console.log("Salário Líquido:" + salarioLiquido);

class Pagamento {

    //Método Construtor
    constructor(nome, salario){
    this.nome = nome;
    this.salario = salario;
    this.salarioBase = (this.salarioBase - this.inss()).toFixed(2);
    this.salarioLiquido = (this.salarioBase - this.irrf()).toFixed(2);

    }

    inss() {
        if (this.salario < 1903.99)
            return 0;
        else if (this.salario < 2826.66)
            return this.salario * 7.5 / 100 - 142.8;
        else if (this.salario < 3751.06)
            return this.salario * 15 / 100 - 354.8;
        else if (this.salario < 4664.69)
            return this.salario * 22.5 / 100 - 636.13;
        else
            return this.salario * 27.5 / 100 - 869.36;
    }

     irrf() {
        if (this.salario < 1903.99)
            return 0;
        else if (this.salario < 2826.66)
            return this.salario * 7.5 / 100 - 142.8;
        else if (this.salario < 3751.06)
            return this.salario * 15 / 100 - 354.8;
        else if (this.salario < 4664.69)
            return this.salario * 22.5 / 100 - 636.13;
        else
            return this.salario * 27.5 / 100 - 869.36;
    }

}

        const pgto1 = new Pagamento("João", 2689);
        
        // document.getElementById("calcular").addEventListener("click", function () {
        // const nome = document.getElementById("nome").value;
        // const salario = parseFloat(document.getElementById("salario").value);
        // if (nome && !isNaN(salario)) {
        // //const pgto1 = new Pagamento("João", 2689); // Valor qualquer de salário
        // const pgto = new Pagamento(nome, salario);
        // const result = `Nome: ${pgto.nome}<br>Salário: ${pgto.salario}<br>Salário Base: ${pgto.salarioBase.toFixed(2)}<br>Salário Líquido: ${pgto.salarioLiquido.toFixed(2)}`;
        // document.getElementById("result").innerHTML = result;
        // } else {
        //         alert("Por favor, preencha o nome e o salário corretamente.");
        //     }
        // });
    


//total(){
        //return this.salarioBase - this.salarioLiquido;
   // }

//function irrf(salario) {console.log("Salário:" + salario);
   // return 0;console.log("Salário:" + salario);

//console.log(inss(3500));

//}
