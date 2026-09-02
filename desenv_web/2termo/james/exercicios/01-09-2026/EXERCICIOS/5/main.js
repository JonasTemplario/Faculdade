let array = [
  { nome: 'Breaking Bad', lancamento: 2008 },
  { nome: 'Mr. Robot', lancamento: 2015 },
  { nome: 'True Detective', lancamento: 2014 },
  { nome: 'Hannibal', lancamento: 2013 },
  { nome: 'The Handmaid\'s Tale', lancamento: 2017 },
  { nome: 'House M.D.', lancamento: 2004 },
  { nome: 'Watchmen', lancamento: 2019 },
  { nome: 'Sandman', lancamento: 2022 },
  { nome: 'DuckTales', lancamento: 1987 },
]

console.group("Séries: ");
array.map((vlr) => {
  console.log(vlr.nome);
})
console.groupEnd();

