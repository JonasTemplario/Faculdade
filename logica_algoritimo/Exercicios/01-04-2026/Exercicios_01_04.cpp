#include <iostream>
#include <string>
using namespace std;

int main()
{


/*01 — DARK SOULS (COMBATE)

 Criar base do programa
 Criar variaveis a serem digitadas: stamina, vida, TipoInimigo:
 Criar variáveis a serem comparadas com valores pre-definidos: staminaMedia, staminaBaixa, vidaMedia, vidaBaixa

 Faça o jogador digitar as variaveis:
 "Stamina:"
 "Vida:"
 "Tipo de inimigo (1 comum, 2 elite, 3 boss):"

 A ideia é o programa devolver o comportamento do jogador dada as variaveis

 de acordo com o inimigo
	 comum:
	 se a stamina alta e vida boa "jogador tende a ser agressivo"
	 Senão "adota postura mais defensiva"

	 elite:
	 Precisa mais stamina para confronto direto
	 Mesmo com stamina suficiente, a vida influencia na decisão
	 Caso não tenha stamina suficiente, deve recuar

	 Boss:
	 Vida baixa representa situação crítica
	 Senão estiver crítico, stamina define possibilidade de ataque especial

	 Caso o jogador tenha digitado um tipo de inimigo não seja válido:
	 Informar erro
*/
	int stamina, vida, tipoInimigo;
	int staminaMedia = 50, staminaBaixa = 20, vidaMedia =50, vidaBaixa = 20;

	cout<<"Stamina: ";
	cin>>stamina;
	cout<<"Vida: ";
	cin>>vida;
	cout<<"Tipo de inimigo (1 comum, 2 elite, 3 boss): ";
	cin>>tipoInimigo;
	switch(tipoInimigo){
		case 1:
			/* Comum */
			if(stamina > staminaMedia && vida > vidaMedia){
				cout<<"Jogador tende a ser agressivo"<<endl;
			}else{
				cout<<"Adota postura mais defensiva"<<endl;
			}
			break;
		case 2:
			/* Elite */
			cout<<"Precisa mais stamina para confronto direto"<<endl;
			if(stamina > staminaMedia && vida > vidaMedia){
				if(vida > vidaMedia){
					cout<<"Pode enfrentar o inimigo de frente"<<endl;
				}else{
					cout<<"Deve recuar"<<endl;
				}
				break;
			}
		case 3:
			/* Boss */
			if(vida <= vidaBaixa){
				cout<<"Situação crítica"<<endl;
				}else if(vida <= vidaBaixa && stamina >= staminaMedia){
				   cout<<"Pode usar ataque especial"<<endl;
			   }else{
				   cout<<"Ataque especial indisponível"<<endl;
				   }
			break;
		}

/*02 — FORTNITE (ZONA SEGURA)

 Criar variaveis a serem digitadas: zona, vida, escudo, tempo
 Criar variáveis a serem comparadas com valores pre-definidos: vidaAlta, escudoAlto, tempoCurto, statusSeguro

 Faça o jogador digitar as variaveis:
 "Zona (1 dentro, 2 fora):"
 "Vida:"
 "Escudo:"
 "Tempo restante da zona:"

 A ideia é o programa devolver a estratégia do jogador

 de acordo com a zona
	 dentro da zona:
	 se vida alta OU escudo alto → "boa posição"
	 senão → "se preparar para combate"

	 fora da zona:
	 se tempo curto → "corre para zona"
	 senão:
		 se vida + escudo for alto → "dá pra arriscar loot"
		 senão → "prioridade total sobreviver"

	 Caso o jogador digite valor inválido:
	 Informar erro
*/
int zona, vida, escudo, tempo;
int vidaAlta = 70, escudoAlto = 50, tempoCurto = 5, statusSeguro = 70;

cout<<"Zona (1 - Dentro, 2 - Fora): "<<endl;
cin>>zona;
cout<<"Vida:"<<endl;
cin>>vida;
cout<<"Escudo:"<<endl;
cin>>escudo;
cout<<"Tempo restante da zona:"<<endl;
cin>>tempo;

switch (zona){
	case 1:
		if(vida >= vidaAlta || escudo >= escudoAlto){
			cout<<"Boa posição"<<endl;
		}
		else{
			cout<<"Se preparar para combate"<<endl;
		}
		break;
	case 2:
		if(tempo <= tempoCurto){
			cout<<"Corre para zona segura"<<endl;
		}
		else{
			if(vida + escudo >= statusSeguro){
				cout<<"Dá para arriscar loot"<<endl;
			}else{
				cout<<"Prioridade total : sobreviver"<<endl;
			}
		}
		break;
	default:
		cout<<"Valor inválido para zona"<<endl;
	break;
}

/*03 — LEAGUE OF LEGENDS (TEAM FIGHT)

 Criar variaveis a serem digitadas: aliados, inimigos, vida, ult
 Criar variáveis a serem comparadas com valores pre-definidos: vantagemNumerica, vidaAlta, vidaMedia

 Faça o jogador digitar as variaveis:
 "Quantidade de aliados proximos:"
 "Quantidade de inimigos proximos:"
 "Vida do jogador:"
 "Ultimate pronta? (1 sim, 0 nao):"

 A ideia é o programa decidir se o jogador deve lutar ou recuar

 de acordo com a situação da luta

	 quando há vantagem numérica (mais aliados que inimigos):
	 se vida alta → "iniciar luta"
	 senão → "aguardar melhor momento"

	 quando há empate:
	 se ultimate disponível E vida boa → "pode engajar"
	 senão → "jogar com cautela"

	 quando há desvantagem:
	 se ultimate disponível E vida muito alta → "tentar jogada arriscada"
	 senão → "recuar imediatamente"
*/
int aliados, inimigos, vida, ult;
int vantagemNumerica = 2, vidaAlta = 70, vidaMedia = 40;

cout<<"Quantidade de aliados proximos:"<<endl;
cin>>aliados;
cout<<"Quantidade de inimigos proximos:"<<endl;
cin>>inimigos;
cout<<"Vida do jogador:"<<endl;
cin>>vida;
cout<<"Ultimate pronta? (1 sim, 0 nao):"<<endl;
cin>>ult;

if(aliados > inimigos){
	if(vida >= vidaAlta){
		cout<<"Iniciar luta"<<endl;
	}else{
		cout<<"Aguardar melhor momento"<<endl;
	}
}else if(aliados == inimigos){
		switch (ult){
		case 1:
			if(vida >= vidaAlta){
				cout<<"Pode engajar"<<endl;
			}else{
				cout<<"Jogar com cautela"<<endl;
			}
			break;
		case 2:
			cout<<"Jogar com cautela"<<endl;
			break;
		default:
			cout<<"Valor inválido para ultimate"<<endl;
			break;
		}
}else if(aliados  < inimigos){
	switch (ult){
	case 1:
		if(vida = vidaAlta){
			cout<<"Tentar jogada arriscada"<<endl;
		}else{
			cout<<"Recuar imediatamente"<<endl;
		}
		break;
	case 2:
		cout<<"Recuar imediatamente"<<endl;
		break;
	default:
		cout<<"Valor inválido para ultimate"<<endl;
		break;
	}
}

/*04 — MINECRAFT (SOBREVIVÊNCIA)

 Criar base do programa
 Criar variaveis a serem digitadas: hora, fome, temAbrigo
 Criar variáveis a serem comparadas: horaQueFicaClaro, horaQueFicaEscuro, fomeAlta, fomeBaixa, situacaoSegura, MomentoDoDia (0 - claro, 1 - escuro)

 Faça o jogador digitar as variaveis:
 "Hora do jogo (0-23):"
 "Nivel de fome:"
 "Tem abrigo? (1 sim, 0 nao):"

 A ideia é o programa definir o comportamento do jogador no mundo
 de acordo com MomentoDoDia
 
 Se o valor digitado for maior ou igual a 24, pegue o resto da divisão do valor digitado por 24 para definir o horário atual
 e mostre na tela o novo valor, então
 Compare o horário digitado para saber qual é o MomentoDoDia (se está claro ou escuro) 

	 caso esteja escuro
		 se tiver abrigo
			 se fome baixa → "comer e descansar"
			 senão → "ficar seguro no abrigo"
		 senão
			 se fome alta → "buscar comida rapidamente"
			 senão → "criar abrigo urgente"

	 caso estja claro
		 se fome alta → "explorar e coletar recursos"
		 senão → "procurar comida"

*/
int hora, fome, temAbrigo;
int horaQueFicaClaro = 6, horaQueFicaEscuro = 18, fomeAlta = 7, fomeBaixa = 3;
    
cout<<"Hora do jogo (0-23):"<<endl;
cin>>hora;
cout<<"Nivel de fome (0 - 7):"<<endl;
cin>>fome;
cout<<"Tem abrigo? (1 sim, 0 nao):"<<endl;
cin>>temAbrigo;

if(hora >= 24){
	hora = hora % 24;
	cout<<"Novo valor da hora: "<<hora<<endl;
	if(hora < 6 || hora >= 18){/* ESCURO */
		if(temAbrigo == 1){
			if(fome <= fomeAlta){
				cout<<"Comer e descansar"<<endl;
			}else{
				cout<<"Ficar seguro no abrigo"<<endl;
			}
		}else{
			if(fome >= fomeAlta){
				cout<<"Buscar comida rapidamente"<<endl;
			}else{
				cout<<"Criar abrigo urgente"<<endl;
			}
			}
	}
	if(hora >= 6 && hora < 18){
		if(fome >= fomeAlta){
			cout<<"Explorar e coletar recursos"<<endl;
		}else{
			cout<<"Procurar comida"<<endl;
	    }
	}
}




return 0;
}