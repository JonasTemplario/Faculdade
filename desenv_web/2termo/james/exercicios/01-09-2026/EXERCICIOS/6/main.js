let array = [  
  { nome: 'Dark Souls III', preco: 95.03 },
  { nome: 'Shadow of the Tomb Raider', preco: 101.19 },
  { nome: 'Sekiro: Shadows Die Twice', preco: 179.99 },
  { nome: 'Resident Evil 2', preco: 119.90 },
  { nome: 'Death Stranding', preco: 149.99 },
]

console.group("Jogos");
array.map((vlr) => {
  console.log(vlr.nome, `- R$${vlr.preco}`)
})
console.groupEnd();