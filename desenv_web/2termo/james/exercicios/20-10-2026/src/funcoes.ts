interface CursoProps {
id: string;
nome: string;
preco: number;
promocao: (preco: number) => void;
}

function mostraPromocao(preco: number): void{
console.log(`Promoção no curso por apenas R$ ${preco}`)
}

const novoCurso: CursoProps = {
id: "1",
nome: "TypeScript",
preco: 950,
promocao: mostraPromocao


// promocao: (preco: number): void => {
// console.log(`Promoção no curso por apenas R$ ${preco}`)
// }
}

novoCurso.promocao(250)

console.log(novoCurso)


interface SomaProps{
(vlr1: number, vlr2: number): number
}

let somaNumeros: SomaProps = (vlr1:number, vlr2: number): number => {
return vlr1 + vlr2;
}

const res = somaNumeros(25, 75)
console.log("Resultado da var: ", res)