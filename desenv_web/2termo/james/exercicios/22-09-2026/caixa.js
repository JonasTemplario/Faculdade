const btn = document.querySelector('.btn');
const boxOne = document.querySelector('#boxOne');
const boxTwo = document.querySelector('#boxTwo');
const cursos = [...document.querySelectorAll('.cursos')];

cursos.map( (el) =>{
    el.addEventListener("click", (evt) =>{
        const cursos = evt.target
        cursos.classList.toggle("selected")
    })
})

btn.addEventListener("click", () => {
    const selecionados = [...document.querySelectorAll('.selected')]    
    const naoselecionados = [...document.querySelectorAll('.cursos:not(.selected)')]  

    selecionados.map(el => boxTwo.appendChild(el))
    naoselecionados.map(el => boxOne.appendChild(el))
})

