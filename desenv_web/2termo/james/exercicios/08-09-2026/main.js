function primo(a){
    if(a < 2){
            return 0;
        }

    for(let i = 2; i < a; i++){
        if(a % i === 0){
            return 0;
        } 
    }
    return 1;
}

function fatorial(a){
    let res = 1;

    for(let i = a; i > 0; i-- ){
        res *= i;
    }
    return res;
}
function arranjo(n, p){
    if(n < p){
        return "O N deve ser maior que P";
    }
    let res = fatorial(n) / fatorial(n - p);
    return res;
}

const divisiveis = (x, y) => {
    if(x % y === 0){
        return 1;
    }
    return 0;
}

const maiores = (a, b) => {
    if(a > b){
        return "O maior número é A";
    }
    return "O maior número é B";
}

const esfera = (r) => {
    let volume = ((4/3) * 3.14) * (Math.pow(r, 3));
    return volume;
}

const baskara = (a, b, c) => {
    if( a === 0){
        return "Coeficiente A não pode ser 0";
    }
    let delta = (b*b) - (4*(a*c));

    if( delta < 0 ){
        return "Não há raízes reais para delta (delta negativo)";
    }

    let x_posi = (-b + (Math.sqrt(delta))) / (2*a);
    let x_neg = (-b - (Math.sqrt(delta))) / (2*a);

    if( delta === 0 ){
        return [x_posi];
    }

    return [x_posi, x_neg];
}

console.log(primo(5));
console.log(arranjo(10, 5));
console.log(divisiveis(12, 2) == 1 ? "Divisível" : "Não divisível");
console.log(maiores(2, 222));
console.log(esfera(5));
console.log(baskara(1, 2, 1));


