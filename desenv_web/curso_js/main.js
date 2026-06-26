// let = Variãvel 

// =====TIPOS DE DADOS=====

// NUMBER - Para números ( mesmo padrão de operadores e lógica de outras linguagens)

let numeroInteiro = 100;

let numeroDecimal = 5.38;

let numeroNegativo = -200.99;

let soma = numeroInteiro + numeroDecimal;

console.log(soma);
//
//
//
// STRING = Para Textos

let olaMundo = "Olá Mundo";

let olaMundo2 = 'Olá Mundo'; // POde usar áspas simples para o valor também

let caracteresespeciais = "Lorem \n Ipsum \\ dolor \' \" amet" // Barra invertida serve para mostrar caracteres especiais. \n Quebra Linha

//Concatenar ( unir )
/*Opção 1 */
let ola = "OLá";

let mundo = "Mundoo";

let bonito = "Bonito";

let olaMundo3 = ola+mundo; // Sinal de + serve para concatenar ( unir ) strings

/*Opção 2*/
let olaMundo4 = ola.concat(mundo, "frase", bonito); // Pode unir diversas strings e adicionar frases no meio

/*Opção 3*/
let olaMundo4 = '${ola} ${mundo} ${1+1}'; // Template de Strings - Une como as outras 
//
//
//
// BOOLEANOS - True ou False ( NÃO PODEM SER ESCRITOS OS VALORES ENTRE ÁSPAS )

let verdadeiro = true;

let falso = false;

/* Comparações que indicam que a variável é falsa ou verdadeira */

let comparacao = 1 == 1; //true

let comparacao2 = 1 > 5; //false

let comparacaoString = "banana" == "banana"; //true

/*   
== indica que o valor é igual
=== indica que o valor e o tipo de dado ( number, string etc ) são iguais

!= indica que o valor é diferente
!== indica que o valor E o tipo de dado é diferente
*/

console.log(1 == "1"); //true ( pq testa apenas o valor que é igual )

console.log(1 === "1"); //false ( pq o valor é igual mas um é number e o outro string )
//
//
//
// ARRAY ( vetor ) - Lista ou coleção de dados que pode ser acessada por índice

let vetor = []; // Vetor vazio

let vetor2 = [1, "Olá Mundo", true, [1, 2, 3, 4]]; // Pode adicionar vários tipos de dados dentro

/* 
Pode ser acessado com índice
O primeiro item da lista é a posição 0
*/
console.log(vetor2[1]); // Exibve o "Olá Mundo"

/*
Os valores podem ser alterados e adicionados à lista
*/
vetor2[0] = 9000; // Munda a posição 0 para 9000
vetor2[2] = "Eai galera"; // Muda a posição 2 para "Eai galera"
//
//
//
// NULL - Representa a falta de valor

let x = null;

let y = 1;
y = null;
//
//
//
// UNDEFINED - Aparece quando acessamos uma variável antes de atribuir valor à ela

let z;
console.log(z);
//
//
//
// OBJETO - É um dado composto por outros tipos de dados

let objeto = {}; // Cria um Objeto Vazio

let carro = {
  rodas: 4,
  portas: 2,
  nome: "um carro", // Cria um objeto com variáveis (separar as variáveis por vírgula como no exemplo)
  aVenda: true,
};

/*
Para adicionar valores ao objeto: 
*/
objeto.item1 = 1;
objeto["aVenda"] = true; // Nesta opção, deve utilizar áspas dentro dos colchetes

/*
Para alterar dados, é a mesma forma 
*/
objeto.item1 = 2;
objeto.aVenda = false;
// OU
objeto["item1"] = 2;
objeto["aVenda"] = false;
//
//
//
//FUNÇÕES - Utilizadas para criar sequência de operações

/* 
Forma 1 de criar uma function - Criando variável e atribuindo
*/
let olaMundo = function () {
  console.log("Olá Mundo");
  console.log("Olá Mundo Novamente");
  console.log("Olá Mundo mais uma vez");
};

olaMundo(); // Para funcionar precisa chamá-la com os parênteses

/* 
Forma 2 de criar uma function - Chamando a função e atribuindo o noem à ela
*/
function olaMundo() {
  console.log("Olá Mundo");
  console.log("Olá Mundo Novamente");
  console.log("Olá Mundo mais uma vez");
}

olaMundo();

/* 
Pode passar valores para a função acessar 
*/
let somar = function (valor1, valor2) {
  let resultado = valor1 + valor2;
  console.log(resultado);
};

somar(1, 2); // Vai executar a função com os valore que atribuírmos aqui
somar(4, 4);
somar(99, 1);

/*
RETURN - recurso da função que faz guardar a informação que ele declarar para usar depois ( por exemplo, dar valor a uma variável)
*/

let somar = function (valor1, valor2) {
  let resultado = valor1 + valor2;
  return resultado;
};

let minhaSoma = somar(1, 1); // Sem o return, não teria como adicionar valor à variável, então daria UNDEFINED no valor

let calculoFinal = minhaSoma * 10;
console.log(calculoFinal);