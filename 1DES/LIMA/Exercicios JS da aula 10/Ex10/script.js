/* 10. Desenvolva um programa que leia o nome de uma cidade, o número total de eleitores e o número total de votos apurados na última eleição. 
O programa deverá calcular e exibir a porcentagem de participação dos eleitores desta cidade na última eleição.*/

function calcularParticipacao() {
    const cidade = document.getElementById("cidade").value;
    const eleitores = parseFloat(document.getElementById("eleitores").value);
    const votos = parseFloat(document.getElementById("votos").value);

    if (isNaN(eleitores) || isNaN(votos) || eleitores <= 0 || votos < 0) {
        alert("Por favor, insira valores válidos.");
        return;
    }

    const participacao = (votos / eleitores) * 100;

    const resultado = `Na cidade de ${cidade}, a porcentagem de participação dos eleitores foi de ${participacao.toFixed(2)}% na última eleição.`;

    document.getElementById("resultado").textContent = resultado;
}