#include <iostream>
using namespace std;

int main()
{
int gadget1, inimigo1, vida1, energia1;
int vidaAlta1 = 80, energiaAlta1 = 80;

int inimigos2, altura2, energiaTeia2, modo2;
int muitosInimigos2 = 5, energiaAlta2 = 80, alturaSegura2 = 10;

int stamina3, saltos3, dificuldade3, vento3;
int staminaBaixa3 = 30, quantidadeAltaDeSaltos3 = 10;

int municao4, vida4, tipoInimigo4, temErvas4;
int municaoBaixa4 = 10, vidaCritica4 = 20;


/*01 — BATMAN (GADGETS E INIMIGOS)

 Criar variaveis a serem digitadas: gadget, inimigo, vida, energia
 Criar variáveis de referência: vidaAlta, energiaAlta

 Faça o jogador digitar:
 "Tipo de gadget (1 batarangue, 2 gel explosivo, 3 choque):"
 "Tipo de inimigo (1 capanga, 2 armado, 3 chefe):"
 "Vida (0-100):"
 "Nivel de energia:"
 
 A ideia é decidir a estratégia do Batman

caso o gadget:

	 batarangue:
		caso o inimigo:
			capanga - "ataque rápido à distância"
			armado - "ataque com cuidado à distância"
			chefe - "usar para distração"
			Caso valores inválidos: informar erro
			
	 gel explosivo:
		 caso o inimigo:
			capanga - "usar para varios inimigos"
			armado - "usar e atrair inimigo para bomba"
			chefe - "bastante dano"
			Caso valores inválidos: informar erro

	 disruptor:
		 caso o inimigo:
			capanga - "nocautear"
			armado - "nocautear enquanto escondido"
			chefe - "paralisa temporariamente o chefe"
			Caso valores inválidos: informar erro
			
	Caso valores inválidos: informar erro	
	*/
cout<<"Tipo de gadget (1 batarangue, 2 gel explosivo, 3 choque):";
cin>>gadget1;
cout<<"Tipo de inimigo (1 capanga, 2 armado, 3 chefe):";
cin>>inimigo1;
cout<<"Vida (0-100):";
cin>>vida1;
cout<<"Nivel de energia:";
cin>>energia1;

switch (gadget1)
{
case 1:
	switch (inimigo1)
	{case 1:
		cout<<"Ataque rápido à distância";
	break;
	case 2:
		cout<<"Ataque com cuidado à distância";
	break;;
	case 3:
		cout<<"Usar para distração";
	break;
	default:
		cout<<"Valor inválido para inimigo";
	}
case 2:
	switch (inimigo1)
	{case 1:
		cout<<"Usar para varios inimigos";
	break;
	case 2:
		cout<<"Usar e atrair inimigo para bomba";
	break;;
	case 3:
		cout<<"Bastante dano";
	break;
	default:
		cout<<"Valor inválido para inimigo";
	}
case 3:
	switch (inimigo1)
	{case 1:
		cout<<"Nocautear";
	break;
	case 2:
		cout<<"Nocautear enquanto escondido";
	break;
	case 3:
		cout<<"Paralisa temporariamente o chefe";
	break;
	default:
		cout<<"Valor inválido para inimigo";
	}
default:
	cout<<"Valor inválido para gadget";
}

/*02 — HOMEM-ARANHA (COMBATE E MOBILIDADE)

 Criar variaveis: inimigos, altura, energiaTeia, modo
 Criar referências: muitosInimigos, energiaAlta, alturaSegura

 Faça o jogador digitar:
 "Quantidade de inimigos:"
 "Altura atual (metros):"
 "Energia da teia:"
 "Modo (1 furtivo, 2 combate, 3 fuga):"

 Caso o modo seja:

	 furtivo:
		 se poucos inimigos  "neutralizar silenciosamente"
		 senão → "evitar combate"

	 combate:
		 se energia alta  "usar golpes especiais"
		 senão → "combate básico"

	 fuga:
		 se altura segura  "balançar entre prédios"
		 senão → "correr pelo chão"
Caso valores inválidos: informar erro
	
se muitos inimigos E energia baixa  "alto risco"
senão "baixo risco"
*/
cout<<"Quantidade de inimigos:";
cin>>inimigos2;
cout<<"Altura atual (metros):";
cin>>altura2;
cout<<"Energia da teia:";
cin>>energiaTeia2;
cout<<"Modo (1 furtivo, 2 combate, 3 fuga):";
cin>>modo2;

switch (modo2)
{
case 1:
	if (inimigos2 < muitosInimigos2){
		cout<<"Neutralizar silenciosamente";
	}
	else{
	cout<<"Evitar combate";
	}
	break;
case 2:
	if (energia1 >= energiaAlta2){
		cout<<"Usar golpes especiais";
	}
	else{
	 	cout<<"Combate básico";
	}
	break;
case 3:
    if (altura2 >= alturaSegura2){
		cout<<"Balançar entre prédios";
	}
	else{
		cout<<"Correr pelo chão";
	}
	break;
default:
	cout<<"Valor inválido para modo";
}



/*03 — CELESTE (PLATAFORMA E RESISTÊNCIA)

 Criar variaveis: stamina, saltos, dificuldade, vento
 Criar referências: staminaBaixa, quantidadeAltaDeSaltos

 Faça o jogador digitar:
 "Stamina:"
 "Quantidade de saltos realizados:"
 "Dificuldade (1 fácil, 2 normal, 3 difícil):"
 "Tem vento? (1 sim, 0 nao):"

Caso dificuldade seja:

	 fácil:
		 se stamina baixa  "pausar e recuperar"
		 senão se vento "ventando, cautela"
		 senão "continuar subida"

	 normal:
		 se stamina baixa  "stamina ficando perigosa"
		 senão se vento "ventando, bom dar uma pausa"
		 senão "subida cautelosa"

	 difícil:
		se stamina baixa  "perigo, alto risco de queda"
		senão se vento "ventando, volte pra local seguro"
		senão "continue atento"
Caso valores inválidos: informar erro
*/

cout<<"Stamina:";
cin>>stamina3;
cout<<"Quantidade de saltos realizados:";
cin>>saltos3;
cout<<"Dificuldade (1 fácil, 2 normal, 3 difícil):";
cin>>dificuldade3;
cout<<"Tem vento? (1 sim, 0 nao):";
cin>>vento3;

switch (dificuldade3)
{case 1:
	if (stamina3 <= staminaBaixa3){
		cout<<"Pausar e recuperar";
	}
	else if (vento3 == 1){
		cout<<"Ventando, cautela";
	}
	else{
		cout<<"Continuar subida";
	}
	break;
case 2:
	if (stamina3 <= staminaBaixa3){
		cout<<"Stamina ficando perigosa";
	}
	else if (vento3 == 1){
		cout<<"Ventando, bom dar uma pausa";
	}
	else{
		cout<<"Subida cautelosa";
	}
	break;
case 3:
	if (stamina3 <= staminaBaixa3){
		cout<<"Perigo, alto risco de queda";
	}
	else if (vento3 == 1){
		cout<<"Ventando, volte pra local seguro";
	}
	else{
		cout<<"Continue atento";
	}
	break;
default:
	cout<<"Valor inválido para dificuldade";
}

/*04 — RESIDENT EVIL (GERENCIAMENTO DE RECURSOS)

 Criar variaveis: municao, vida, tipoInimigo, temErvas
 Criar referências: municaoBaixa, vidaCritica

 Faça o jogador digitar:
 "Quantidade de munição:"
 "Vida:"
 "Tipo de inimigo (1 zumbi, 2 licker, 3 boss):"
 "Tem ervas? (1 sim, 0 nao):"

Caso tipoInimigo:

	 zumbi:
		 se munição baixa  "evitar combate"
		 senão  "eliminar inimigo"

	 licker:
		 se vida crítica  "fugir imediatamente"
		 senão  "andar silenciosamente"

	 boss:
		 se munição baixa  "estratégia defensiva"
		 senão  "usar armas pesadas"
	Caso valores inválidos: informar erro
	 
se vida crítica
	se tem ervas → "e usar ervas pra se curar"
	senão "e alto risco de morte, cuidado"
*/

cout<<"Quantidade de munição:";
cin>>municao4;
cout<<"Vida:";
cin>>vida4;
cout<<"Tipo de inimigo (1 zumbi, 2 licker, 3 boss):";
cin>>tipoInimigo4;
cout<<"Tem ervas? (1 sim, 0 nao):";
cin>>temErvas4;

switch(tipoInimigo4)
{
case 1:
	if (municao4 <= municaoBaixa4){
		cout<<"Evitar combate";
	}
	else{
		cout<<"Eliminar inimigo";
	}
	break;
case 2:
	if (vida4 <= vidaCritica4){
		cout<<"Fugir imediatamente";
	}
	else{
		cout<<"Andar silenciosamente";
	}
	break;
case 3:
	if (municao4 <= municaoBaixa4){
		cout<<"Estratégia defensiva";
	}
	else{
		cout<<"Usar armas pesadas";
	}
	break;
default:
	cout<<"Valor inválido para tipo de inimigo";
}
if (vida4 <= vidaCritica4){
	if (temErvas4 == 1){
		cout<<"Usar ervas para se curar";
	}
	else{
		cout<<"Alto risco de morte, cuidado";
	}
}

    return 0;
}