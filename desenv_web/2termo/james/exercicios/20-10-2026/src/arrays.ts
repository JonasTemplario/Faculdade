interface tecProps {
    id: string | number,
    nome: string,
    slug: string[]
}

const tecnologia: tecProps = {
    id: 22,
    nome: 'teclado',
    slug: ['php', 'php do zero']
}

console.log(tecnologia)

interface tecnologiaProps {
    id: string,
    nome: string,
    description: string
}

interface nomesProps {
    tecnologia: tecnologiaProps[],
    status: boolean
}

let frontend: nomesProps = {
    tecnologia: [
        {id: '33', nome: "ReactsJS", description: "Biblioteca de interfaces"},
        {id: '44', nome: "ValueJS", description: "Aleatorio"},
    ],
    status: true
}

console.log(frontend)