interface ProductProps {
    readonly id: string | number,
    nome: string,
    description: string,
}

let prod1 : ProductProps = {
    id: 1,
    nome: "tenis",
    description: "um tenis legal..."
}

// prod1.id = '123'

console.log(prod1)

