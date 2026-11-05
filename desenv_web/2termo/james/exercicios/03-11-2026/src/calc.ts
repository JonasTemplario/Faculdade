const teclasNum = [...document.querySelectorAll<HTMLButtonElement>('.num')];
const teclasOp = [...document.querySelectorAll<HTMLButtonElement>('.op')];
const teclaRes = document.querySelector<HTMLButtonElement>('.res');
const tOn = document.querySelector<HTMLButtonElement>('#ton');
const tCls = document.querySelector<HTMLButtonElement>('#tcls');
const display = document.querySelector<HTMLElement>('.display');

if (teclasNum.length === 0 || teclasOp.length === 0 || !teclaRes || !tOn || !tCls || !display) {
    throw new Error("Não foi possível inicializar a calculadora: " 
        + "elementos obrigatórios não encontrados no DOM.");
}