#include <iostream>
using namespace std;

int main()
{

// Exercicio 01 - Zelda
int estado; // 1 = bem, 2 = cansado, 3 = crítico
int stamina;

cout<<"Estado atual do Link - (1-Bem, 2-Cansado, 3-Crítico):"<<endl;
cin>>estado;
cout<<"Stamina atual:"<<endl;
cin>>stamina;

switch (estado){
case 1:
    if (stamina > 50){
        cout<<"Exploração liberada"<<endl;
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


// Exercicio 02 - COD
int tipoCombate; // 1 = Easy, 2 = Mid, 3 = Hard
int municao;
int vida;

cout<<"Tipo de combate no Call of Duty (1-Easy, 2-Mid, 3-Hard):"<<endl;
cin>>tipoCombate;
cout<<"Munição:"<<endl;
cin>>municao;
cout<<"Vida:"<<endl;
cin>>vida;

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

return 0;
}