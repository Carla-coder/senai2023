// function contar() {
//     let contagem = "";
//     for (let i = 1; i <= 10; i++) {
//         contagem += i + " ";
//     }
//     document.getElementById("saida").innerHTML = "<p>" + contagem + "</p>";
//     saida.innerHTML += ` &#x1F3C1;`
// }



function contar() {
    let saida = document.getElementById('saida')

    saida.innerHTML += `<h2>Contando de 1 até 10</h2>`

    let cont = 1
    while (cont <= 10) {
        saida.innerHTML += ` ${cont} &#128176;`
        cont ++ // Corresponde a cont = cont + 1
    }
    saida.innerHTML += ` &#x1F3C5;`
}

