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
$opcao = 1; //readline("1.Saudação\n2.Data\n3.Sair\nEscolha: ");
// Complete com switch
switch ($opcao) {
case "1":
echo "Olá.";
$opcao = 3;
break;
case "2":
echo date("d.m.y");
$opcao = 3;
break;
case "3":
echo "Até logo!" . PHP_EOL;
break;
default:
echo "Opção inválida" . PHP_EOL;
}
} while ($opcao != 3);

// Exercício 2.5 — Computador escolhe 1-100. Usuário adivinha com dicas. Conte tentativas.
$segredo = rand(1, 5);
$chute = 0;
$tentativas = 0;
// Complete: enquanto chute !== segredo
while ($chute !== $segredo) {
$chute = rand(1, 5); // (int)readline("Chute (1-100): ");
$tentativas++;
if ($chute > $segredo) {
echo "Chute mais alto </br>";
} elseif ($chute < $segredo) {
echo "Chute mais baixo </br>";
}
}
echo "Acertou em $tentativas!" . PHP_EOL;


// -------- Bloco 3 --------//
// Exercício 3.1 — Para cada echo, diga: funciona? imprime o quê? notice/error?
$a = 1;
function teste() {
$b = 2;
if (true) {
$c = 3;
$d = 4; // sem var, vaza do if
echo $a . PHP_EOL; // ?
echo $b . PHP_EOL; // ?
echo $c . PHP_EOL; // ?
echo $d . PHP_EOL; // ?
}
echo $c . PHP_EOL; // ?
echo $d . PHP_EOL; // ?
}
teste();
echo $d . PHP_EOL; // ?
Código inicial:




// -------- Bloco 4 --------//

