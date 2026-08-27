// let nome = prompt("Digite seu nome")
// let idade = parseInt(prompt("Digite sua idade"))

// console.group("Grupo1")

// console.log("Seu nome é: ", nome)
// console.log("Sua idade é: ", idade)

// console.groupEnd()
//
//
//
//
//
//
// let num1 = parseInt(prompt("Digite um número"))
// let num2 = Number(prompt(("Digite outro número")))

// if(num1 > num2){
//     console.log("num1 é maior que num2")
// }
// else if(num1 < num2){
//     console.log("num1 é menor que num2")
// }
// else{
//     console.log("num1 é igual a num2")
// }
//
//
//
//
//
//
// let dia = Number(prompt("Qual dia ?"))

// switch(dia){
//     case 1:
//         console.log("Domingo")
//         break;
//     case 2:
//         console.log("Segunda")
//         break;
//     case 3:
//         console.log("Terça")
//         break;
//     case 4:
//         console.log("Quarta")
//         break;
//     case 5:
//         console.log("Quinta")
//         break;
//     case 6:
//         console.log("Sexta")
//         break;
//     case 7:
//         console.log("Sábado")
//         break;  
//     default:
//         console.error("Dia INVÁLIDO")
//         break;
// }
//
//
//
//
//
//
//
//
// let media = 5
// let aluno = media >= 7 ? "Aprovado" : media < 3 ? "Reprovado" : "Recuperação" //Condicional TERNÁRIO - COMO SE FOSSE "IF E ELSE"

// console.log(aluno)
//
//
//
//
//
//
let num1 = 2
let num2 = 9
let soma = num1 + num2

if(soma > 10){
console.log("A soma é maior que 10. Resultado: ", soma)
}

let num3 = parseInt(prompt("Digite um número"))
let conta = num3 % 2
let resultado = conta === 0 ? "Par" : "Ímpar"

if(isNaN/*Significa IS NOT A NUMBER*/(num3)){
    console.error("ERRO: DIGITE UM NÚMERO VÁLIDO")
}
else {
console.log("O número que você digitou é", resultado)
}
