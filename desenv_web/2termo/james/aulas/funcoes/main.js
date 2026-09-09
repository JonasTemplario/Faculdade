function soma (a, b) {
    return a + b;
}

function subtracao (a, b){
    console.log("Função subtração", a - b);
}

function multiplicacao(a, b){
    let res = a * b;
    return res;
}

function divisao(a, b){
    let res = a / b;
    return res;
}

function resultado(op, vlr1, vlr2){
    switch(op){
        case 1:
            return soma(vlr1, vlr2);
        case 2:
            subtracao(vlr1, vlr2);
        case 3:
            return multiplicacao(vlr1, vlr2);
        case 4:
            return divisao(vlr1, vlr2);
        default:
            return "Use a opção certa!";
}
}






console.log("Função soma: ", soma(10, 10));
console.log("Função soma: ", soma(100, 100));
subtracao(10, 5);
console.log("Função multiplicação: ", multiplicacao(10, 10));
console.log("Função divisão: ", divisao(20, 2));

console.group("=======RESULTADO========");
    console.log(resultado(2, 2, 2));    
console.groupEnd();

function ler(){
    let a = Number(prompt("Informe um número: "));
    let b = parseInt(prompt("Informe outro número: "));

    return [a, b]; // retornou os valores em um vetor
}

[v1, v2] = ler(); // colocou v1 e v2 nos valores do array e lançou na função

console.log(soma(v1, v2)); // atribuiu os valores v1 e v2 aos valores finais "a" e "b"


