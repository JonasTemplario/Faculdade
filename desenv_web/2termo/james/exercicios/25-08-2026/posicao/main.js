
let num = []
let cond = false
for(x = 0; x < 3; x++){
    num.push(parseInt(prompt(`Digite o ${x+1}° número: `)))
}
for(x = 0; x < 3; x++){
    if(num(x) > 50){
        console.log(`${x+1}° posição tem o valor ${num(x)}`)
        cond = true
    }
}
cond == false && console.log("Não tem um número maior que 50!")