let array = [
    5, 7, 3, 4, 8
]

let novo = array.map((arr) => {
    return arr*arr;
})

console.group("NÚMEROS AO QUADRADO:");
for(vlr of novo){
    console.log(vlr);
}
console.groupEnd();