<?php

// -------- Bloco 1 --------//

// Exercício 1.1 — Imprima números de 1 a 10, um por linha
// Complete o loop for
for ($i = 1; $i <= 10; $i++) {
echo $i </br>;
}

// Exercício 1.2 — Imprima apenas pares de 1 a 20, depois modifique para ímpares
// PARES: complete o incremento
for ($i = 2; $i <= 20; $i += 2) {
echo $i . PHP_EOL;
} 
echo "</br>";
// ÍMPARES: ajuste início e incremento
for ($i = 1; $i <= 20; $i += 2) {
echo $i . PHP_EOL;
}

// Exercício 1.3 — Some todos os números de 1 a 100 usando loop for
$soma = 0;
// Complete o loop
for ($i = 1; $i <= 100; $i++) {
$soma += $i;
}
echo $soma; // Deve ser 5050

// Exercício 1.4 — Peça um número e imprima a tabuada de 1 a 10
$n = 325;
// Complete o loop para tabuada 1-10
for ($i = 1; $i <= 10; $i++) {
echo "$n x $i = " . $n * $i . PHP_EOL;
echo "</br>";
}

// Exercício 1.5 — Imprima cada fruta com seu índice (0-based)
$frutas = ["maçã", "banana", "laranja", "uva", 
"manga"];
// Complete: use count() na condição
for ($i = 0; $i < count($frutas); $i++) {
echo $i . " - " . $frutas[$i];
echo "</br>";
}




// -------- Bloco 2 --------//

// Exercício 2.1 — Refaça exercício 1.1 (1 a 10) usando while
$i = 1;
// Complete a condição e o incremento
while ($i <= 10) {
echo $i . PHP_EOL;
$i++;
echo "</br>";
}

// Exercício 2.2 — Some números aleatórios (1-10) até soma > 100. Conte quantos números.
$soma = 0;
$count = 0;
// Complete: enquanto soma <= 100
while ($soma <= 100) {
$num = rand(1, 10);
$soma += $num;
$count++;
}
echo "Soma: $soma, Números: $count" . PHP_EOL;

// Exercício 2.3 — Peça senha até acertar "secreto123". Conte tentativas.
$tentativas = 0;
$senha = "";
// Complete: do...while
do {
$senha = "readline("Digite a senha: ")";
$tentativas++;
} while ($senha !== "secreto123");
echo "Acertou em $tentativas tentativas" . PHP_EOL;

// Exercício 2.4 — Menu que repete até escolher "Sair": 1.Saudação 2.Data 3.Sair
$opcao = "";
do {
$opcao = readline("1.Saudação\n2.Data\n3.Sair\nEscolha: 
");
// Complete com switch
switch ($opcao) {
case "1":
$opcao[];
break;
case "2":
_______;
break;
case "3":
echo "Até logo!" . PHP_EOL;
break;
default:
echo "Opção inválida" . PHP_EOL;
}
} while (_______)


// -------- Bloco 3 --------//






// -------- Bloco 4 --------//

