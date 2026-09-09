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
echo "Acertou em $tentativas tentativas" . PHP_EOL; // Era apenas para completar, então não testei com tentativas de senhas

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
echo "Opção inválida" . PHP_EOL; // Modifiquei esse código porque não tem como literalmente escolher, então coloquei um número de exempplo na escolha
}
} while ($opcao != 3);

// Exercício 2.5 — Computador escolhe 1-100. Usuário adivinha com dicas. Conte tentativas.
$segredo = rand(1, 100);
$chute = 0;
$tentativas = 0;
// Complete: enquanto chute !== segredo
while ($chute !== $segredo) {
$chute = rand(1, 100); // (int)readline("Chute (1-100): ");
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
echo $a . PHP_EOL . "<br>"; // 
echo 'Funciona. Não imprime nada. Warning: Undefined Variable, porque foi criada fora da função' . "<br><hr><br>";

echo $b . PHP_EOL . "<br>"; // 
echo 'Funciona. Imprime "2". Sem aviso/erro' . "<br><hr><br>";

echo $c . PHP_EOL . "<br>"; // 
echo 'Funciona. Imprime "3". Sem aviso/erro' . "<br><hr><br>";

echo $d . PHP_EOL . "<br>"; // 
echo 'Funciona. Imprime "4". Sem aviso/erro' . "<br><hr><br>";
}
echo $c . PHP_EOL . "<br>"; // 
echo 'Funciona. Imprime "3". Sem aviso/erro' . "<br><hr><br>";

echo $d . PHP_EOL . "<br>"; // 
echo 'Funciona. Imprime "4". Sem aviso/erro' . "<br><hr><br>";
}
teste();
echo $d . PHP_EOL . "<br>"; // 
echo 'Funciona. Não imprime nada. Warning: Undefined Variable, porque foi criada dentro da função' . "<br><hr><br>";

// Exercício 3.2 — Como acessar/modificar variável global dentro da function?
$valor = "global";
function primeiro() {
// Como ler $valor global aqui?
global $valor;
echo $valor . PHP_EOL . "<br><br>";
// Como MODIFICAR $valor global aqui?
$valor = "modificado na function";
}
primeiro();
echo $valor . PHP_EOL; // Deve mostrar "modificado na function"

// Exercício 3.3 — Crie função contador() que mantém valor entre chamadas usando static
function contador() {
// Declare $count como static com valor inicial 0
static $count = 0;
$count++;
return $count;
}
echo contador() . PHP_EOL; // 1
echo contador() . PHP_EOL; // 2
echo contador() . PHP_EOL; // 3

// Exercício 3.4 — Acesse $_SERVER, $_GET, $GLOBALS dentro de function sem global
$config = "produção";
function mostrarAmbiente() {
// Acesse $_SERVER["SERVER_NAME"] sem global
echo "Servidor: " . $_SERVER['SERVER_NAME'] . PHP_EOL . "<br><br>";
// Acesse $config via $GLOBALS
echo "Ambiente: " . $GLOBALS['config'] . PHP_EOL . "<br><br>";
}
mostrarAmbiente();

// Exercício 3.5 — Arquivo incluido vê variáveis do arquivo que incluiu
// arquivo: config.php
$apiKey = "secret-123";
$debug = true;
// arquivo: app.php
// include "config.php";
// Como acessar $apiKey e $debug aqui?
_______
echo "API: $apiKey, Debug: " . ($debug ? "on" : 
"off") . PHP_EOL;




// -------- Bloco 4 --------//

// Exercício 4.1 — Crie 4 funções tipadas: somar, subtrair, multiplicar, dividir

declare(strict_types=1);

function somar(int $a, int $b): int { return $a + $b; }
function subtrair(int $a, int $b): int { return $a - $b; }
function multiplicar(int $a, int $b): int { return $a * $b;}
function dividir(int $a, int $b): ?float { 
    if ( $b == 0 ){
    return null;
  }
  return $a / $b;
}
echo somar(10, 5) . PHP_EOL;        // 15
echo subtrair(10, 5) . PHP_EOL;     // 5
echo multiplicar(10, 5) . PHP_EOL;  // 50
echo dividir(10, 5) . PHP_EOL;      // 2.0
var_dump(dividir(10, 0));           // null

// Exercício 4.2 — apresentar(string $nome, int $idade, string $cidade = "Não informada"): string

function apresentar(string $nome, int $idade, string 
$cidade = "Não informada"): string {
return "Nome: $nome, Idade: $idade, Cidade: 
$cidade";
}
echo apresentar("Ana", 25) . PHP_EOL;
echo apresentar("Bruno", 30, "Rio de Janeiro") . 
PHP_EOL;

// Exercício 4.3 — media(int ...$notas): float retorna média. Trate array vazio.

function media(int ...$notas): float {
// Se count($notas) === 0, retorne 0.0
if (count($notas) === 0) return 0.0;
// Use array_sum para somar
$soma = array_sum($notas);
return $soma / count($notas);
}
echo media(7, 8, 9) . "<br>" . PHP_EOL;   // 8.0
echo media(10, 5) . "<br>" . PHP_EOL;     // 7.5
echo media() . "<br>" . PHP_EOL;          // 0.0

// Exercício 4.4 — aplicaOperacao(int $a, int $b, callable $operacao): mixed

function aplicaOperacao(int $a, int $b, callable $operacao): mixed {
return $operacao($a, $b);
}
$somar = fn($x, $y) => $x + $y;
$multiplicar = fn($x, $y) => $x * $y;
$subtrair = fn($x, $y) => $x - $y;
echo aplicaOperacao(10, 5, $somar) . "<br>" . PHP_EOL; // 15
echo aplicaOperacao(10, 5, $multiplicar) . "<br>" .  PHP_EOL; // 50
echo aplicaOperacao(10, 5, $subtrair) . "<br>" .  PHP_EOL; // 5

// Exercício 4.5 — dividirSeguro(mixed $a, mixed $b): ?float valida tipos e zero

function dividirSeguro(mixed $a, mixed $b): ?float {
// Valide tipos: is_numeric() ou gettype()
if (!is_numeric($a) || !is_numeric($b)) {
    error_log("Erro: tipos inválidos");
    return null;
}
// Valide divisão por zero
if ($b == 0) {
    error_log("Erro: divisão por zero");
    return null;
}
return (float) $a / $b;
}
echo "<pre>";
var_dump(dividirSeguro(10, 2));   // float(5)
var_dump(dividirSeguro(10, 0));   // null + log
var_dump(dividirSeguro("a", 2));  // null + log