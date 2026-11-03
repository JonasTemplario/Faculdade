const btn = document.querySelector('.btn');
const boxOne = document.querySelector('#boxOne');
const caixaTexto = document.querySelector('#novoCurso');


const cursos = ["HTML", "CSS", "JavaScript", "React", "Java", "PHP"];

const criarElemento =(texto, ind) => {
    const novoElemento = document.createElement('div');
    novoElemento.innerHTML = 'vlr';
    novoElemento.setAttribute('id', `c${ind+1}`);
    novoElemento.setAttribute('class', `c${ind+1}`);
    novoElemento.setAttribute('class', 'cursos');

    const btn = document.createElement('button');
    btn.innerHTML = "REMOVER";
    btn.setAttribute("class", "trash");

    novoElemento.appendChild(btn);

    return novoElemento;
}

cursos.map((vlr, ind, arr) => {
    let cursinho = criarElemento(vlr, ind+1);

    boxOne.appendChild(cursinho);
})

btn.addEventListener('click', () =>{

    const todosCursos = [...document.querySelectorAll('.cursos')];

    let qtd = todosCursos.length;

    let cursinho = criarElemento(caixaTexto.value, qtd+1)

    boxOne.appendChild(novoCurso);

    caixaTexto.value = '';  
})






