interface JogosProps{
    id: string,
    nome: string,
    description: string,
    plataforma: string[],
}

const fifa: JogosProps = {
    id: '1456',
    nome: 'fifa 2026',
    description: 'jogo de bola',
    plataforma: ['PS5', 'Xbox', 'PC']
}

console.log(fifa)
console.log('-------------------------')

interface PatchProps extends JogosProps {
    adicionais: string[]
}

const fifaPatch: PatchProps = {
    id: '142',
    nome: 'Fifa Patch',
    description: "aquele jogo...",
    plataforma: ['PC'],
    adicionais: ["Novos jogadores", "arenas novas"]
}

console.log(fifaPatch)

interface PatchProps2 extends JogosProps {
    adicionais: string[],
    JogoOriginal: JogosProps
}

const fifaPatch2: PatchProps2 = {
    id: '142',
    nome: 'Fifa Patch',
    description: 'aquele jogo',
    plataforma: ['PC'],

    JogoOriginal: fifa,
    adicionais: ["Novos jogadores", "areas novas"]
}

console.log(fifaPatch)


