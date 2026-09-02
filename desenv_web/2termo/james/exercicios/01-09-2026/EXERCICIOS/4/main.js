let array = [
  { 
    nome: 'Bastardos inglórios', 
    release: 2009 },
  { 
    nome: 'Pulp Fiction', 
    release: 1994 },
  { 
    nome: 'Kill Bill: Volume 2', 
    release: 2004 },
  { 
    nome: 'Quatro Quartos', 
    release: 1995 },
  { 
    nome: 'Sin City', 
    release: 2005 },
  { 
    nome: 'Era uma Vez em... Hollywood', 
    release: 2019 },
  { 
    nome: 'Django Livre', 
    release: 2012 },
  { 
    nome: 'Cães de Aluguel', 
    release: 1992 },
  { 
    nome: 'À Prova de Morte', 
    release: 2007 },
  { 
    nome: 'Kill Bill: Volume 1', 
    release: 2003 } 
]

let filmes = array.filter((vlr) =>{
    return vlr.release < 2000
})

filmes.map((vlr) => {
    console.log('Nome:', vlr.nome, ' | Ano: ', vlr.release);
})
