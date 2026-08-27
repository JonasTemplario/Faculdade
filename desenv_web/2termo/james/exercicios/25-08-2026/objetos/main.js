let carro = {
    marca: "chevrolet",
    modelo: "onix",
    cor: 'prata',
    ano: 2020,
    acelerar: ()=>{ //Função de seta (Arrow Function) 
        console.log("vrum...vrum...")
    },
    frear: function(){ // Mesma coisa da de cima (Função de Seta)
    console.log("parou mané!!")
    },
    trocarAno: function(vlr){
        this.ano = vlr
    }
}

carro['ano'] = 2023;
console.log(carro)
carro[`defeito`] = "pneu murcho..."
console.log(carro)

carro.acelerar()
carro.trocarAno(2001)
console.log(carro)