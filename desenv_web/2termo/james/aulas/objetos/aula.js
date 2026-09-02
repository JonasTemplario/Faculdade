console.clear();

let pessoa = {
    nome: "Joõa",
    idade: 30,
    profissao: "Desenvolvedor0",
    saudacao: function(){
        console.log(`Olá, meu nome é ${this.nome}
            e tenho ${this.idade} anos.`);
    }
}
pessoa.saudacao();

let dados = [
    {
        nome: "Maria", 
        idade: 25,
        profissao: "Designer"
    },
    {
        nome: "Pedro",
        idade: 28,
        profissao: "Engenheiro"
    },
    {
        nome: "Ana",
        idade: 35,
        profissao: "Médica"
    }
]

console.log(pessoa);

for (let x of dados){ // Transforma a variável X em alguma propriedade ( nome, idade e profissao ) da variável DADOS
    console.log(x.nome); // Indica o que o X vai se tornar, no caso "nome"
}
console.group("ForEach"); // Faz o mesmo que o For, mas é mais usaddo
dados.forEach( function(y){
    console.log(y.profissao)
})
console.groupEnd();


console.group("MAP"); // Mais usado dos três e tem funções de valor, índice e array
dados.map((vlr, ind, arr) =>{
    console.log("nome: ", vlr.nome)
    console.log("idade: ", vlr.idade)
})
console.groupEnd();


console.group("FILTER");
let info = dados.filter((vlr, ind, arr) => {
    return vlr.idade > 30;
})
console.log(info)
console.groupEnd();