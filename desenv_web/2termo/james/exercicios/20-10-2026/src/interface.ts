let loja: object;

loja = {
    nome: "lojinha do sale",
    endereco: "Rua que sobe",
    status: true,
}
// console.log(loja)
interface lojaProps{
    nome: string,
    endereco: string,
    status: boolean,
}

const lojinha: lojaProps = {
    nome: "Sua loja",
    endereco: "Aquela rua",
    status: false,
}

console.log(lojinha)

function novaLoja({nome, endereco, status}:lojaProps){
    console.group("===== Loja =====");
        console.log(`Loja ${nome} criada com sucesso`)
        console.log(`Endereço da loja ${endereco}`)
        console.log(`Status da loja ${status}`)
    console.groupEnd()
}

novaLoja({nome: "Loja 1", endereco: "rua alguma", status: true})

