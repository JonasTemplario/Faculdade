let btn = document.querySelector('.btn');
let resultado = document.querySelector('.resultado');
let operacao = document.querySelectorAll('[name="operacao"]');
let vlr1 = document.querySelector('#vlr1');
let vlr2 = document.querySelector('#vlr2');

btn.addEventListener("click", () => {
    let num1 = parseFloat(vlr1.value);
    let num2 = parseFloat(vlr2.value);

    if(isNaN(num1) || isNaN(num2)){
        resultado.textContent = "Por favor, insura um número";
        return;
    }

    let operacaoSelecionada;
    for(let op of operacao){
        if(op.checked){
            operacaoSelecionada = op.id;
            break;
        }
    }
    
    let res;
    switch(operacaoSelecionada){
        case "somar":
            res = num1 + num2;
            break;
        case "subtrair":
            res = num1 - num2;
            break;
        case "multiplicar":
            res = num1 * num2;
            break;
        case "dividir":
            if(num2 === 0){
                resultado.textContent = "Não se pode dividir por zero";
                return;
            }
            res = nm1 / num2;
            break;
    }

    resultado.textContent = res;
})