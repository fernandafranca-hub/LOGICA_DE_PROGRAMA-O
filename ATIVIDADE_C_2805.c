Exercícios de Programação em Linguagem C
Objetivo: Praticar comandos de entrada, saída, declaração de variáveis, constantes e operadores.
1.	Exiba uma mensagem de boas-vindas na tela.
	Início
	    Escreva "Bem-vindo ao curso de C!"
	Fim
	
	#include <stdio.h>
	
	int main()
	{
		printf("Bem vindo ao curso C");
	}
	
2.	Peça ao usuário para digitar seu nome e exiba uma mensagem de saudação.
Início
    Ler nome
    Escreva "Olá", nome
Fim

#include <stdio.h>

int main()
{
	char nome[50];
	printf("Por favor, digite o seu nome: ");
	scanf("%s", &nome);
	printf("Bem vindo %s", nome);
}

3.	Leia dois números inteiros, calcule e exiba a soma deles.
Início
    Ler num1, num2
    soma ← num1 + num2
    Escreva "A soma é: ", soma
Fim




#include <stdio.h>

int main()
{
    int soma = 0;
    int n1 = 0;
    int n2 = 0;
    printf("Digite um número: ");
    scanf("%d", &n1);
    printf("Digite mais um número: ");
    scanf("%d", &n2);
    soma = n1 + n2;
    printf("A soma é: %d" ,soma);
}



4.	Leia duas notas, calcule e exiba a média.
Início
    Ler nota1, nota2
    media ← (nota1 + nota2) / 2
    Escreva "A média é:", media
Fim


#include <stdio.h>

int main()
{
    float media = 0;
    float nota1 = 0;
    float nota2 = 0;
    scanf("%f", &nota1);
    scanf("%f", &nota2);
    media = (nota1+nota2)/2;
    printf("A media e: %f", media);
}






5.	Peça um número inteiro e mostre o dobro dele.
Início
    Ler numero
    dobro ← numero * 2
    Escreva "O dobro é:", dobro
Fim

#include <stdio.h>

int main()
{
    int numero = 0;
    int dobro = 0;
    scanf("%d", &numero);
    dobro = numero * 2;
    printf("O dobro é: %d", dobro);
}



6.	Leia um valor em metros e converta para centímetros.
Início
    Ler metros
    centímetros ← metros * 100
    Escreva "Equivale a", centímetros, "cm"
Fim

#include <stdio.h>

int main()
{
    float m = 0;
    float cm = 0;
    scanf("%f", &m);
    cm = m*100;
    printf("Equivale a: %f", cm);
}



7.	Peça a idade de uma pessoa e informe se ela é maior ou menor de idade.
Início
    Ler idade
    Se idade >= 18 então
        Escreva "É maior de idade"
    Senão
        Escreva "É menor de idade"
Fim

#include <stdio.h>

int main()
{
	int idade;
	printf("Por favor, digite sua idade: ");
	scanf("%d", &idade);
	if (idade >= 18) {
		printf("menor de idade");
	}
	else {
		printf("maior de idade");
	}

}


8.	Leia o salário de um funcionário e adicione um bônus fixo de R$ 500,00, depois exiba o salário final.
Início
    Ler salario
    salarioFinal ← salario + 500
    Escreva "Salário final:", salarioFinal
Fim

#include <stdio.h>

int main()
{
	int salarioinicial = 0;
	int salariofinal = 0;
	int bonus = 500;
	scanf("%d", &salarioinicial);
	salariofinal = salarioinicial + bonus;
	printf("salariofinal sera:%d ", salariofinal);
}

9.	Peça um número inteiro e informe se ele é par ou ímpar.
Início
    Ler numero
    Se numero % 2 == 0 então
        Escreva "Número par"
    Senão
        Escreva "Número ímpar"
Fim

#include <stdio.h>

int main()
{
	int numero;
	printf("Por favor, digite um numero: ");
	scanf("%d", &numero);
	if (numero%2==0) {
		printf("numero par");
	}
	else {
		printf("numero impar");
	}

}


10.	Peça o raio de um círculo e calcule sua área (use PI = 3.1416).
Início
    PI ← 3.14
    Ler raio
    area ← PI * (raio * raio)
    Escreva "Área do círculo:", area
Fim
#include <stdio.h>

float main()
{
	float pi = 3.1416;
	float raio = 0;
	float area = 0;
	scanf("%f", &raio);
	area = pi * (raio * raio);
	printf("area do circulo:%f ", area);
}

11.	Converter a temperatura de fahrenheit para graus.
Início
    Declarar variável fahrenheit, celsius (real)
    Escrever "Digite a temperatura em Fahrenheit:"
    Ler fahrenheit
    celsius ← (fahrenheit - 32) * 5 / 9
    Escrever "A temperatura em Celsius é: ", celsius
Fim
#include <stdio.h>

float main()
{
	float fahrenheit = 0;
	float celsius = 0;
	printf("Digite a temperatura em fahrenheit : ");
	scanf("%f", &fahrenheit);
	celsius = (fahrenheit - 32) * 5 / 9;
	printf("A temperatura em celsius e:%f ", celsius);
}




