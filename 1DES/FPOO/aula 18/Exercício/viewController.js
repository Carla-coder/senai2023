const formPessoa = document.querySelector('#formPessoa');
const pessoa = [];

formPessoa.addEventListener('submit', (e) => {
    e.preventDefault();
    //console.log(formPessoa.nome.value, formPessoa.salario.value);
    pessoa.push(new Pagamento(formPessoa.nome.value, formPessoa.salario.value));
})