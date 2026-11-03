"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
function mostraPromocao(preco) {
    console.log(`Promoção no curso por apenas R$ ${preco}`);
}
const novoCurso = {
    id: "1",
    nome: "TypeScript",
    preco: 950,
    promocao: mostraPromocao
    // promocao: (preco: number): void => {
    // console.log(`Promoção no curso por apenas R$ ${preco}`)
    // }
};
novoCurso.promocao(250);
console.log(novoCurso);
let somaNumeros = (vlr1, vlr2) => {
    return vlr1 + vlr2;
};
const res = somaNumeros(25, 75);
console.log("Resultado da var: ", res);
//# sourceMappingURL=funcoes.js.map