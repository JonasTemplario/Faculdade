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
	/* INT 1 */
	int stamina1, vida1, tipoInimigo1;
	int staminaMedia1 = 50, staminaBaixa1 = 20, vidaMedia1 =50, vidaBaixa1 = 20;
	/* INT 2 */
	int zona2, vida2, escudo2, tempo2;
	int vidaAlta2 = 70, escudoAlto2 = 50, tempoCurto2 = 5, statusSeguro2 = 70;
	/* INT 3 */
	int aliados3, inimigos3, vida3, ult3;
	int vantagemNumerica3 = 2, vidaAlta3 = 70, vidaMedia3 = 40;
	/* INT 4 */
	int hora4, fome4, temAbrigo4;
	int horaQueFicaClaro4 = 6, horaQueFicaEscuro4 = 18, fomeAlta4 = 7, fomeBaixa4 = 3;

	cout<<"Stamina: ";
	cin>>stamina1;
	cout<<"Vida: ";
	cin>>vida1;
	cout<<"Tipo de inimigo (1 comum, 2 elite, 3 boss): ";
	cin>>tipoInimigo1;
	switch(tipoInimigo1){
		case 1:
			/* Comum */
			if(stamina1 > staminaMedia1 && vida1 > vidaMedia1){
				cout<<"Jogador tende a ser agressivo"<<endl;
			}else{
				cout<<"Adota postura mais defensiva"<<endl;
			}
			break;
		case 2:
			/* Elite */
			cout<<"Precisa mais stamina para confronto direto"<<endl;
			if(stamina1 > staminaMedia1 && vida1 > vidaMedia1){
				if(vida1 > vidaMedia1){
					cout<<"Pode enfrentar o inimigo de frente"<<endl;
				}else{
					cout<<"Deve recuar"<<endl;
				}
			}
			break;
		case 3:
			/* Boss */
			if(vida1 <= vidaBaixa1){
				cout<<"Situação crítica"<<endl;
				}else if(vida1 <= vidaBaixa1 && stamina1 >= staminaMedia1){
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

cout<<"Zona (1 - Dentro, 2 - Fora): "<<endl;
cin>>zona2;
cout<<"Vida:"<<endl;
cin>>vida2;
cout<<"Escudo:"<<endl;
cin>>escudo2;
cout<<"Tempo restante da zona:"<<endl;
cin>>tempo2;

switch (zona2){
	case 1:
		if(vida2 >= vidaAlta2 || escudo2 >= escudoAlto2){
			cout<<"Boa posição"<<endl;
		}
		else{
			cout<<"Se preparar para combate"<<endl;
		}
		break;
	case 2:
		if(tempo2 <= tempoCurto2){
			cout<<"Corre para zona segura"<<endl;
		}
		else{
			if(vida2 + escudo2 >= statusSeguro2){
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


cout<<"Quantidade de aliados proximos:"<<endl;
cin>>aliados3;
cout<<"Quantidade de inimigos proximos:"<<endl;
cin>>inimigos3;
cout<<"Vida do jogador:"<<endl;
cin>>vida3;
cout<<"Ultimate pronta? (1 sim, 2 nao):"<<endl;
cin>>ult3;

if(aliados3 > inimigos3){
	if(vida3 >= vidaAlta3){
		cout<<"Iniciar luta"<<endl;
	}else{
		cout<<"Aguardar melhor momento"<<endl;
	}
}else if(aliados3 == inimigos3){
		switch (ult3){
		case 1:
			if(vida3 >= vidaAlta3){
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
}else if(aliados3  < inimigos3){
	switch (ult3){
	case 1:
		if(vida3 >= vidaAlta3){
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
    
cout<<"Hora do jogo (0-23):"<<endl;
cin>>hora4;
cout<<"Nivel de fome (0 - 7):"<<endl;
cin>>fome4;
cout<<"Tem abrigo? (1 sim, 0 nao):"<<endl;
cin>>temAbrigo4;

if(hora4 >= 24){
	hora4 = hora4 % 24;
	cout<<"Novo valor da hora: "<<hora4<<endl;

if(hora4 < 6 || hora4 >= 18){/* ESCURO */
	if(temAbrigo4 == 1){
		if(fome4 <= fomeAlta4){
			cout<<"Comer e descansar"<<endl;
		}else{
			cout<<"Ficar seguro no abrigo"<<endl;
		}
	}else{
		if(fome4 >= fomeAlta4){
			cout<<"Buscar comida rapidamente"<<endl;
		}else{
			cout<<"Criar abrigo urgente"<<endl;
		}
	}
	}
	else if(hora4 >= 6 && hora4 < 18){
		if(fome4 >= fomeAlta4){
			cout<<"Explorar e coletar recursos"<<endl;
		}else{
			cout<<"Procurar comida"<<endl;
	    }
	}
}


return 0;
}