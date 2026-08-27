let num = []
let pares = 0;
let impares = 0;
for(x = 0; x < 6; x++){
    num.push(parseInt(prompt(`Digite o número ${x+1}° número:`)))
    if(num(x) % 2 == 0){
        pares += num(x)
    }else{
        impares++;;
    }
}
console.group("===== Relatório =====")
console.log("soma dos pares", pares)
console.log(`Quantidade de impares: ${impares}`)
console.groupEnd()