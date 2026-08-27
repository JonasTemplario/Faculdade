let alunos = ["Joselito", "Guilherme", "Arthut", 99, true]
console.log(alunos[2])

let pessoas = ["kakinha"]
let professores = Array(33) /* Pode usar números para criar X espaços vazios. Ex: 33 espaços vazios */
console.log('PESSOAS', pessoas)
console.log('PROFESSORES', professores)
console.log('ALUNOS', alunos[1])

alunos[4] = 30
console.log(alunos)
alunos[5] = 'Homer'
console.log(alunos)
console.log("Quantidade de Elementos:", alunos.length)/* Mostra a quantidade de ELEMENTOS no Array */

alunos.push("Pedrinho") /* Coloca o ELEMENTO na última posição */
console.log(alunos)

alunos.unshift("Mariazinha") /* Coloca o ELEMENTO na primeira posição */
console.log(alunos)

alunos.pop() /* Remove o último ELEMENTO */
console.log(alunos)

alunos.shift()/* Remove o primeiro ELEMENTO */
console.log(alunos)

console.log(alunos.slice(0, 3)) /* Escreve a sequência (número 3) depois de determinada posição (número 0) */
console.log(alunos.slice(4))/* Escreve todos a partir de determinada posição (número 4) */

for(ind in alunos){
    console.log(ind)
}
for(vlr of alunos){
    console.log(vlr)
}

