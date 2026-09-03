Fluxogramas para ter como base para a resolução:
https://miro.com/app/board/uXjVI2cDtVQ=/?share_link_id=595172056146 

Contexto 1 - Converter Temperatura de Fahrenheit (℉) para Celsius (°C)
Crie um algoritmos que receba uma temperatura em Fahrenheit, converta para o valor em Celsius e mostre o resultado adicionando o °C no final.

Algoritmo converter_temperatura
	Var  ºF, ºC, :float
Início
	Print “Informe temperatura:”
	Read ºF e aplique a fórmula graus = (ºF - 32) × 5 / 9
	Retorne em ºC
Fim


Contexto 2 - Controle de Acesso à Biblioteca
Crie um algoritmo que verifica se a pessoa pode entrar na biblioteca. Só podem entrar alunos ou professores com matrícula ativa.

Algoritmo entrada_biblioteca
Var CPF aluno ou professor, matrícula ativa, :integer
Início
	Prompt “digite o CPF”
	Read CPF
	If CPF= matrícula ativa
If CPF= professor || aluno  
		print “entrada liberada”
	else if
		print “Acesso negado”
Else
Fim
	
	
Contexto 3 - Cálculo de IMC e Classificação
Crie um algoritmo para calcular o IMC de uma pessoa e classificá-la.

Algoritmo Classificação_IMC
	Var peso, altura, :float
Início
	Read peso e altura e aplique a fórmula IMC= (peso/altura²)
	If IMC < 18.5
	print “abaixo do peso”
	Else if IMC <= 24,9
	print “peso normal”
	Else if IMC <= 29,9
	print “sobrepeso”
	Else if IMC<= 39,9
	print “obesidade grau I”
Else
print “obesidade grau II”
Fim


Contexto 4 - Validador de Senha Forte
Crie um algoritmo para verificar se a senha informada é uma senha forte.
Letras e números
Caractere especial
Letras maiúsculas e minúsculas 

Algoritmo Senha_Forte
	Var letra maiúscula, letra minúscula,número, caractere especial, :string
Início
	Read senha
	if (senha contém letra maiúscula, letra minúscula,número, caractere especial)	
	print “senha forte”
	Else if
	print “senha fraca”
Else
Fim


Contexto 5 - Calculadora de Desconto
Crie um algoritmo para aplicar desconto de acordo com o valor da compra. Defina qual vai ser a porcentagem de desconto baseado no valor da compra que foi realizada, aumentando a porcentagem de desconto conforme o valor da compra aumenta e estipulando um limite máximo de desconto.

Algoritmo Desconto_aplicado
	Var valor da compra, valor do desconto, valor final :float
Início
	Read valor da compra 
	else if (valor da compra >=100 e <500)
aplicar desconto de 10%
else if (valor da compra >= 500 e <1000)
aplicar a fórmula (valor da compra x20/100)
else if (valor da compra >1000)
		aplicar desconto de 30%
Else 
não aplicar desconto
aplicar a fórmula (valor da compra - valor do desconto = valor final)
console.log (“total a pagar” , valor final)
Fim




Contexto 6 - Classificação de Números
Crie um algoritmo que, dado um número inteiro, determine se ele é par, ímpar, positivo ou negativo.
Algoritimo Classificação_numérica
	Var numero :int 
	Var mensagem :string
Inicio
	Read numero 
	if (numero >=0)
		mensagem = (“positivo”)
	else
		mensagem = (“negativo”)
	if (numero /2=0)
		mensagem =(“mensagem + par”)
	else
		mensagem =(“mensagem + impar”)

	console.log (mensagem)
Fim


	


1 - Faça um algoritmo para calcular a média final da disciplina de Programação, mostrar essa média final e também uma mensagem informando se o aluno foi aprovado 
(média >= 7) ou reprovado. Considere duas avaliações.
Algoritmo Resultado_final
	Var nota, média, :float
Inicio 
	Nota = Prompt (nota1, nota2, nota 3, nota4) 
	Aplique a fórmula (nota1+nota2+nota 3+nota4”/4=média)
	if (média >=7)
	console.log (“aprovado”)
	else
	console.log (“reprovado”)
Fim	



2 - Faça um algoritmo que receba a idade do usuário e verifique se ele tem 18 anos ou mais. Se a resposta for positiva escrever “maior de idade”, senão “menor de idade”.

Algoritmo Idade
	Var idade, :int  
Inicio
	Idade= Prompt (“insira sua idade”)
	if (idade >=18)
	console.log (“maior de idade”)
	else
	console.log (“menor de idade”)
Fim



3 - Faça um algoritmo que receba três números inteiros e mostre o maior deles. Considere que os números sempre serão diferentes.

Algoritmo Ordem_numerica 
	Var numero1, numero2, numero3 :int
Inicio
	pompt(“insira 3 numero”)
	if numero1>numero 2

4 - Uma empresa concedeu um bônus de 20% do valor do salário a todos os funcionários com tempo de trabalho na empresa igual ou superior a 5 anos e de 10% aos demais. Faça um algoritmo que receba o salário e o tempo de serviço de um funcionário, calcule e mostre o valor do bônus recebido por ele.

Algoritmo bonificação
	Var, salario, tempo, bonus :float 
Inicio
	Salario=prompt(“valor do salario)
	Tempo=prompt(“tempo de trabalho”)
	if (tempo >= 5 
aplicar formula (bonus = salário+20%)
	console.log (“bonus de”, bonus) 
	else 
aplicar formula (bonus = salario+10%)
	console.log (“bonus de”, bonus)
Fim

5 - Implemente um código para aprovar empréstimo bancário. O código deve pedir 3 informações: valor do empréstimo, número de parcelas e salário do solicitante. Aprovar empréstimo caso o valor das parcelas representem no máximo 30% do salário do solicitante.

Algoritmo emprestimo
	Var emprestimo, valor da parcelas, salario :float 
	Read salario 
	Aplique a formula (valor parcela=salariox30/100)
	if valor da parcela x parcela = emprestimo
	console.log (“emprestimo liberado”)
	else
	console.log (“emprestimo não liberado”)
Fim

