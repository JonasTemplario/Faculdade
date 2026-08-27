let pesado=[];
let leve=[];
let gado=[];
let mediaGordo=[0, 0];
let mediaMagro=[0, 0];
while(true){

    gado[0] = prompt("Digite o código")
    gado[1] = Number(prompt("Digite o peso"))
    gado[2] = prompt("Digite o tipo de gado (gordo ou magro)")

    if(pesado.length == 0){
        pesado[0] = gado[0]
        pesado[1] = gado[1]
    }
    else if(pesado[1] < gado[1]){
        pesado[0] = gado[0]
        pesado[1] = gado[1]
    }

    if(leve.length == 0){
        leve[0] = gado[0]
        leve[1] = gado[1]
    }
    else if(leve[1] > gado[1]){
        leve[0] = gado[0]
        leve[1] = gado[1]
    }

    if(gado[2] == "gordo"){
        mediaGordo[0] += gado[1]
        mediaGordo[1]++
    }
    
    if(gado[2] == "magro"){
        mediaMagro[0] += gado[1]
        mediaMagro[1]++
    }

    let opcao = confirm("Deseja continuar ?")
    if(opcao == false){
        break;
    }

}

console.log("Código do gado mais pesado", pesado[0])
console.log("Gado mais pesado", pesado[1])
console.log("Código do gado mais leve", leve[0])
console.log("Gado mais leve", leve[1])
console.log("Média do boi gordo", mediaGordo[0]/mediaGordo[1])
console.log("Média do boi magro", mediaMagro[0]/mediaMagro[1])
