#include <iostream>
using namespace std;

int main()
{

// Exercicio 01 - Zelda
int estado; // 1 = bem, 2 = cansado, 3 = crítico
int stamina;

cout<<"Estado atual do Link - (1-Bem, 2-bCansado, 3-Crítico):"<<endl;
cin>>estado;
cout<<"Stamina atual:"<<endl;
cin>>stamina;
// Mostrar "estado atual do Link - (1 bem, 2 cansado, 3 crítico):"
// Digitar valor para estado
// Mostrar "stamina atual:"
// Digitar valor para stamina

switch (estado){
case 1:
    if (stamina > 50){
        cout<<"Exploração liberada"<<endl;
break;
}
    else{
        cout<<"Pode explorar, mas com cautela"<<endl;
    }
break;
case 2:
    if (stamina > 30){
        cout<<"Ainda consegue lutar"<<endl;
    }
    else{
        cout<<"Precisa descansar"<<endl;
    }
break;
case 3:
    cout<<"Estado crítico! Fuja ou recupere vida"<<endl;
break;
default:
    cout<<"Valor inválido"<<endl;
    break;
}
// Fazer um switch/case com a variavel estado
// Se for 1
	// Se stamina > 50 → mostrar "Exploração liberada"
	// Senão → mostrar "Pode explorar, mas com cautela"
// Se for 2
    // Se stamina > 30 → mostrar "Ainda consegue lutar"
    // Senão → mostrar "Precisa descansar"
// Se for 3
    // Mostrar "Estado crítico! Fuja ou recupere vida"
// colocar valor default, para caso o jogador digite outro número inválido:
    // Mostrar "Valor inválido"


// Exercicio 02 - COD
int tipoCombate; // 1 = Easy, 2 = Mid, 3 = Hard
int municao;
int vida;

cout<<"Tipo de combate no Call of Duty ( 1-Easy, 2-Mid, 3-Hard):"<<endl;
cin>>tipoCombate;
cout<<"Munição:"<<endl;
cin>>municao;
cout<<"Vida:"<<endl;
cin>>vida;
// Mostrar "tipo de combate no Call of Duty (1 easy, 2 mid, 3 hard):"
// Digitar valor para tipoCombate
// Mostrar "munição:"
// digitar valor para municao
// Mostrar "vida:"
// digitar valor para vida

switch (tipoCombate){
case 1:
    cout<<"Tranquilo"<<endl;
break;
case 2:
    if( municao > 20 && vida > 40 ){
        cout<<"Combate tá equilibrado"<<endl;
    }
    else{
        cout<<"Atenção, cuidado"<<endl;
    }
break;
case 3:
    if (municao > 50 )
    {
        if(vida > 60){
            cout<<"Ataque hard!"<<endl;
        }
        else{
            cout<<"Ataque perigoso"<<endl;
        }
    }
    else{
        cout<<"Recuar! Recuar!"<<endl;
    }   
break;
default:
    cout<<"Valor inválido"<<endl;
    break;
}
//Usar switch/case com a variavel tipoCombate
// Se for 1
    // Mostrar "Tranquilo"
// Se for 2
    // Se municao > 20 E vida > 40 → mostrar "Combate ta equilibrado"
    // Senão → mostrar "Atenção, cuidado"
// Se for 3
    // Se municao > 50
        // Se vida > 60 → mostrar "Ataque hard!"
        // Senão → mostrar "Ataque perigoso"
    // Senão → mostrar "Recuar! Recuar!"
// colocar valor default, para caso o jogador digite outro número inválido:
    // Mostrar "Valor inválido"


// Exercicio 03 - Pokemon
int acao; // 1 atacar, 2 curar, 3 fugir
int hp;
int temItem;

cout<<"Ação (1-Atacar, 2-Curar, 3-Fugir):"<<endl;
cin>>acao;
cout<<"HP:"<<endl;
cin>>hp;
cout<<"Tem item? (1-SIM, 2-NÃO):"<<endl;
cin>>temItem;
// Mostrar "ação (1 atacar, 2 curar, 3 fugir):"
// digitar valor para acao
// Mostrar "HP:"
// digitar valor para hp
// Mostrar "tem item? (1-SIM ___ 0-NAO):"
// digitar valor para temItem

switch (acao){
case 1:
    if (hp > 50){
        cout<<"Ataque forte"<<endl;
    }
    else{
        cout<<"Ataque fraco"<<endl;
    }
break;
case 2:
    if (temItem == 1){
        if(hp < 40){
            cout<<"Cura eficiente"<<endl;
        }
        else{
            cout<<"Cura leve"<<endl;
        }
    }
    else{
        cout<<"Sem itens"<<endl;
    }
break;
case 3:
    if (hp < 30){
        cout<<"Fuga bem-sucedida"<<endl;
    }
    else{
        cout<<"Dificuldade para fugir"<<endl;
    }
break;
default:
    cout<<"Valor inválido"<<endl;
    break;
}

//Usar switch/case com a variavel acao
// Se for 1
    // Se hp > 50 → mostrar "Ataque forte"
    // Senão → mostrar "Ataque fraco"
// Se for 2
    // Se temItem == 1
        // Se hp < 40 → mostrar "Cura eficiente"
        // Senão → mostrar "Cura leve"
    // Senão → mostrar "Sem itens!"
// Se for 3
    // Se hp < 30 → mostrar "Fuga bem-sucedida"
    // Senão → mostrar "Dificuldade para fugir"
// colocar valor default, para caso o jogador digite outro número inválido:
    // Mostrar "Valor invalido"


// Exercicio 04 - GTA
int situacao; // 1 livre, 2 suspeito, 3 perseguido
int gasolina;
int dano;

cout<<"Situação (1-Livre, 2-Suspeito, 3-Perseguido):"<<endl;
cin>>situacao;
cout<<"Gasolina:"<<endl;
cin>>gasolina;
cout<<"Nível de dano do carro:"<<endl;
cin>>dano;
// Mostrar "situação (1-livre, 2-suspeito, 3-perseguido):"
// digitar valor para situacao
// Mostrar "gasolina:"
// digitar valor para gasolina
// Mostrar "nível de dano do carro:"
// digitar valor para dano

switch (situacao)
{
case 1:
    cout<<"Dirigindo normal"<<endl;
break;
case 2:
    if(gasolina > 30){
        cout<<"Fica na surdina!"<<endl;
    }
    else{
        cout<<"Precisa abastecer"<<endl;
    }
break;
case 3:
    if(gasolina > 50){
        if(dano < 50){
            cout<<"Fugiu! Mission Passed. Respect+"<<endl;
        }
        else{
            cout<<"Fuga arriscada, cuidado"<<endl;
        }
    }
    else{
        cout<<"Sem gasolina para dar fuga!"<<endl;
    }
break;
default:
    cout<<"Valor inválido"<<endl;
    break;
}
//Usar switch/case com a variavel situacao
// Se for 1
    // Mostrar "Dirigindo normal"
    // break

// Se for 2
    // Se gasolina > 30 → mostrar "Fica na surdina"
    // Senão → mostrar "Precisa Abastecer"
    // break

// Se for 3
    // Se gasolina > 50
        // Se dano < 50 → mostrar "Fugiu! Mission Passed. Respect+"
        // Senão → mostrar "Fuga arriscada, cuidado"
    // Senão → mostrar "Sem gasolina para dar fuga!"
// colocar valor default, para caso o jogador digite outro número inválido:
    // Mostrar "Valor invalido"

    return 0;
}