interface CadastroProps{
nome?: string;
email: string;
status: boolean;
}

// ? é opcional

const novoUsuario: CadastroProps = {
nome: "Joselito",
email: "joselito@gmail.com",
status: true
}

console.log(novoUsuario)

function newUser({nome, email, status}: CadastroProps){
console.log(nome)
}

newUser({nome: "meleka", email: "meleka@gmail.com", status: true})