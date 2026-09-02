let array = [
    10, 30, 15, 25, 50, 40, 5, 69
]

let impar = array.filter((vlr, ind, arr) =>{
    if ( 1 == vlr % 2){
        return vlr;
    }
})
console.log(impar);