"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
let loja;
loja = {
    nome: "lojinha do sale",
    endereco: "Rua que sobe",
    status: true,
};
const lojinha = {
    nome: "Sua loja",
    endereco: "Aquela rua",
    status: false,
};
console.log(lojinha);
function novaLoja({ nome, endereco, status }) {
    console.group("===== Loja =====");
    console.log(`Loja ${nome} criada com sucesso`);
    console.log(`Endereço da loja ${endereco}`);
    console.log(`Status da loja ${status}`);
    console.groupEnd();
}
novaLoja({ nome: "Loja 1", endereco: "rua alguma", status: true });
//# sourceMappingURL=interface.js.map