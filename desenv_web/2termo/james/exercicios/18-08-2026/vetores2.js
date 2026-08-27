let candidatos = ["Fávio Bolsonaro", 0, "Luis Inácio", 0, "Renan Santos", 0]


for (i=0; i < 5; i++){
let voto = Number(prompt("DIGITE O NÚMERO DO SEU CANDIDATO."))

if(isNaN(voto)){
    alert("DIGITE UM NÚMERO VÁLIDO")
    i--
}
else if (voto != 22 && voto != 13 && voto != 14){
    alert("DIGITE UM NÚMERO VÁLIDO")
    i--
}

else {  

    console.log("Luis Inácio = 13")
    console.log("Fávio Bolsonaro = 22")
    console.log("Renan Santos = 14")

    switch(voto){
    case 22:
        candidatos[1]++;
        break;
    case 13:
        candidatos[3]++;
        break;
    case 14:
        candidatos[5]++;
        break;
    default:
        alert("DIGITE UM NÚMERO VÁLIDO.")
        i--
        }
    }
}

console.group("Votos")
console.log("VOTOS DE CADA CANDIDATO:")

console.log("Flávio Bolsonaro")
console.log(candidatos[1])

console.log("Luis Inácio")
console.log(candidatos[3])

console.log("Renan Santos")
console.log(candidatos[5])

console.groupEnd()