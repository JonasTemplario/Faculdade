console.log("teste de aula...")
console.error("teste de aula...")
console.warn("teste de aula...")

let num = 10
let texto = "kakinha"
let boolean = true
let array = [1, 2, 3, 4]
let objeto = {
    carro: "Vectra",
    modelo: 2023,
    paraVenda: false
}
let nome = function(){
    console.log("Função 1")
    console.log("Função 2")
    console.log("Função 3")
}

console.log(num)
console.log("tipo", typeof(num))
console.log(texto)
console.log("tipo", typeof(texto))
console.log(boolean)
console.log("tipo", typeof(boolean))
console.log(array[3])
console.log("tipo", typeof(array))
console.log(objeto["carro"])
console.log("tipo", typeof(objeto))

let num1 = Number/*DECLARA QUE É UMA VÁRIÁVEL DE NÚMERO*/(prompt/*CRIA DIÁLOGO PARA DIGITAÇÃO*/("Informe um número"))
let num2 = parseInt(prompt("Informe outro número"))

console.group("Operadores") // Cria um grupo para destacar o que há dentro dele

console.log("Soma: ", num1+num2)
console.log("Subtração: ", num1-num2)
console.log("Multiplicação: ", num1*num2)
console.log("Divisão: ", num1/num2)


console.groupEnd()