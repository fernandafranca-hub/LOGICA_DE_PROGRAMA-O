Exercícios de Lógica de Programação com Laços de Repetição
1.  Máquina de vendas automática (While)
Descrição:
A máquina continua solicitando dinheiro até que o valor total do produto seja alcançado.
 
Pseudocódigo:
valorProduto = 5.00
valorInserido = 0
 
WHILE valorInserido < valorProduto ESCREVA "Insira o dinheiro:"
valor ← LER
valorInserido ← valorInserido + valor FIM WHILE
 
ESCREVA "Produto liberado!"
 
 
let valorProduto = 5.0; let valorInserido = 0;
while (valorInserido < valorProduto) {
let valor = parseFloat(prompt("Insira um valor:")); console.log("Valor:", valor);
valorInserido += valor;
}
console.log("Produto liberado! Valor total: ", valorInserido);
 
 
  
2.  Digitação de senha com tentativas limitadas (Do While)
Descrição:
Um usuário tem no máximo 3 tentativas para digitar a senha correta. O sistema deve permitir pelo menos uma tentativa.
 
Pseudocódigo:
senhaCorreta ← "1234"
tentativas ← 0
MAX_TENTATIVAS ← 3
 
DO
ESCREVA "Digite a senha:" senha ← LER
tentativas ← tentativas + 1
WHILE senha ≠ senhaCorreta E tentativas < MAX_TENTATIVAS
 
IF senha = senhaCorreta ESCREVA "Acesso permitido"
ELSE
ESCREVA "Acesso bloqueado" FIM IF
 
 
const senhaCorreta = "1234"; let tentativas = 0;
let senhaDigitada; do {
senhaDigitada = prompt("Digite a senha:"); tentativas++;
} while (senhaDigitada !== senhaCorreta && tentativas < 3); if (senhaDigitada === senhaCorreta) {
console.log("Acesso permitido");
} else {
console.log("Acesso bloqueado");
}

3.  Contagem regressiva para lançamento de foguete (For)
Descrição:
Um programa faz a contagem regressiva de 10 até 0 antes do lançamento de um foguete.
 
Pseudocódigo:
FOR i = 10; I >= 0; --1 ESCREVA i
FIM FOR
 
ESCREVA "Lançar!"
 
 
for (let i = 10; i >= 0; i--) { console.log(i);
}
console.log("Lançar!");
 
 
4.  Cadastro de nomes até digitar “sair” (While)
Descrição:
O sistema solicita o nome das pessoas em uma lista até que o usuário digite a palavra “sair”.
 
Pseudocódigo:
nome ← ""
 
WHILE nome ≠ "sair"
ESCREVA "Digite um nome (ou 'sair' para encerrar):" nome ← LER
IF nome ≠ "sair"
ESCREVA "Nome registrado:", nome FIM IF
FIM WHILE
 
ESCREVA "Cadastro encerrado"
 
 
let nome = "";
while (nome.toLowerCase() !== "sair") {

nome = prompt("Digite o nome:"); if (nome.toLowerCase() !== "sair") {
console.log("Nome cadastrado:", nome);
}
}
console.log("Cadastro encerrado");
 
 
 
 
5.  Impressão de etiquetas para produtos (For)
Descrição:
O sistema imprime uma quantidade fixa de etiquetas, informada pelo usuário.
 
Pseudocódigo:
ESCREVA "Digite a quantidade de etiquetas:" qtd ← LER
 
FOR i = 1; ATÉ i <= qtd; i++ ESCREVA "Etiqueta número", i
FIM FOR
 
 
let quantidade = 0;
quantidade = prompt("Digite a quantidade:"); for (let i = 1; i <= quantidade; i++) {
console.log(`Etiqueta ${i}`);
}
 
 
 
 
6.  Soma de notas de alunos (Foreach)
Descrição:
Dado um conjunto de notas de um aluno, o sistema percorre a lista e soma os valores para calcular a média.
Pseudocódigo:

notas ← [7.5, 8.0, 6.5, 9.0]
soma ← 0
 
FOR CADA nota EM notas FAÇA soma ← soma + nota
FIM FOR
 
media ← soma / TAMANHO(notas) ESCREVA "Média final:", media
 
 
const notas = [7.5, 8.0, 6.5, 9.0]; let soma = 0;
for (let nota of notas) { soma += nota;
}
let media = soma / notas.length; console.log("Média:", media);
 
 

 
7.  Validação de idade mínima para entrada em festa (Do While)
Descrição:
O sistema solicita a idade até que ela seja maior ou igual a 18 anos.
 
Pseudocodigo:
DO
ESCREVA "Digite sua idade:" idade ← LER
WHILE idade < 18
 
ESCREVA "Entrada permitida"
 
 
let idade; do {

idade = parseInt(prompt("Informe sua idade:"));
} while (idade < 18); console.log("Entrada permitida");
 
 
 
8.  Jogo de adivinhação de número (While)
Descrição:
O sistema escolhe um número aleatório e o jogador tenta adivinhar. As tentativas continuam até acertar.
 
Pseudocodigo:
numeroSecreto ← 7
palpite ← -1
 
WHILE palpite ≠ numeroSecreto ESCREVA "Tente adivinhar o número:" palpite ← LER
 
IF palpite < numeroSecreto ENTÃO ESCREVA "Muito baixo!"
ELSE IF palpite > numeroSecreto ENTÃO ESCREVA "Muito alto!"
FIM IF FIM WHILE
 
ESCREVA "Parabéns, você acertou!"
 
 
const numeroSecreto = 7; let palpite;
while (palpite != numeroSecreto) {
palpite = parseInt(prompt("Tente adivinhar o número:")); if (palpite < numeroSecreto) {
console.log("Muito baixo");
} else if (palpite > numeroSecreto) {

console.log("Muito alto");
}
}
console.log("Parabéns!");
 
9.  Controle de estoque com leitura de itens (Foreach)
Descrição:
O sistema percorre uma lista de produtos no estoque e exibe quais estão com quantidade abaixo do mínimo.
 
Pseudocódigo:
produtos ← [
{"nome": "Caneta", "quantidade": 3},
{"nome": "Lápis", "quantidade": 15},
{"nome": "Borracha", "quantidade": 2}
]
 
FOR CADA produto EM produtos FAÇA IF produto.quantidade < 5 ENTÃO
ESCREVA produto.nome, "com estoque baixo:", produto.quantidade FIM IF
FIM FOR
 
 
const produtos = [
{ nome: "Arroz", quantidade: 3 },
{ nome: "Feijão", quantidade: 8 },
{ nome: "Macarrão", quantidade: 2 }
];
for (let produto of produtos) { if (produto.quantidade < 5) {
console.log(`Estoque baixo de ${produto.nome}`);

}
}
 
 
 
10.  Simulação de corrida de carros (For)
Descrição:
Cada volta da corrida é contada e exibida até completar um número pré-determinado de voltas.
 
Pseudocódigo:
voltas ← 5
 
FOR i = 1; i <= voltas; i++ ESCREVA "Volta número", i
FIM FOR
 
ESCREVA "Corrida finalizada"
 
 
const voltas = 5;
for (let i = 1; i <= voltas; i++) { console.log(`Volta ${i}`);
}
console.log("Corrida finalizada"); 
