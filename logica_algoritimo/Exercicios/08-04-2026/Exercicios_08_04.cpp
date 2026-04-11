#include <iostream>
using namespace std;

int main()
{

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

    return 0;
}