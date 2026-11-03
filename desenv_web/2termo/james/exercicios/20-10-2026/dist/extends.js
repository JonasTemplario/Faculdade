"use strict";
Object.defineProperty(exports, "__esModule", { value: true });
const fifa = {
    id: '1456',
    nome: 'fifa 2026',
    description: 'jogo de bola',
    plataforma: ['PS5', 'Xbox', 'PC']
};
console.log(fifa);
console.log('-------------------------');
const fifaPatch = {
    id: '142',
    nome: 'Fifa Patch',
    description: "aquele jogo...",
    plataforma: ['PC'],
    adicionais: ["Novos jogadores", "arenas novas"]
};
console.log(fifaPatch);
const fifaPatch2 = {
    id: '142',
    nome: 'Fifa Patch',
    description: 'aquele jogo',
    plataforma: ['PC'],
    JogoOriginal: fifa,
    adicionais: ["Novos jogadores", "areas novas"]
};
console.log(fifaPatch);
//# sourceMappingURL=extends.js.map