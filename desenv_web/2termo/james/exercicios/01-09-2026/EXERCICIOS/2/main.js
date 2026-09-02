let array = [
    937, 5, 395, 402, 501, 69, 333, 502, 781, 3, 691    
]

let cont = 0;
let menor = array.filter((vlr) => {
    if (vlr <= 500 ){
        return vlr;
    }
})
console.log("Número de algarismos menor que 501: ", menor.length);