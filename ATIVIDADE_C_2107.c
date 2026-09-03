Exercício 1 – Soma de dois números
Crie uma função chamada soma que receba dois números inteiros como parâmetros e retorne a soma deles. No programa principal main, solicite ao usuário que digite dois números e exiba o resultado da soma utilizando a função.
#include <stdio.h>

int soma(int a, int b){
	printf("A soma de %d e %d é: %d\n", a, b, a + b);
}
	int main()
{
 
   	int a,b;
    	printf("Digite o primeiro numero:");
    	scanf("%d", &a);
    	printf("Digite o segundo numero:");
    	scanf("%d", &b); 	 
    	soma(a, b);
    	return 0;
}
Exercício 2 – Verificação de número par
Escreva uma função chamada ePar que receba um número inteiro como parâmetro e retorne 1 se ele for par e 0 se for ímpar. No main, leia um número do usuário e utilize a função para informar se ele é par ou ímpar.



#include <stdio.h>

int epar(int num) {
    if (num % 2 == 0){
   	 return 1;
    }
    else {
   	 return 0;
    }
}
      
    int main(){
    int num = 0;
    printf("Por favor, digite um numero: ");
    scanf("%d", &num);

    if (epar(num) == 1) {
   	 printf("O numero e par \n");
    }     else {
   	 printf("O numero e impar\n");
    }
    return 0;
}
Exercício 3 – Cálculo de média
Crie uma função chamada media que receba três notas (float) como parâmetros e retorne a média delas. No main, leia as três notas de um aluno e exiba a média calculada pela função.
#include <stdio.h>

float media (float nota1, float nota2, float nota3){
printf("A media e: %f", (nota1 + nota2 + nota3) / 3);
}
      
int main()
{
    float nota1 = 0;
    float nota2 = 0;
    float nota3 = 0;
    printf("Digite a primeira nota: ");
    scanf("%f", &nota1);
    printf("Digite a segunda nota: ");
    scanf("%f", &nota2);
    printf("Digite a terceira nota: ");
    scanf("%f", &nota3);
    media(nota1, nota2, nota3);
}


Exercício 4 – Verificar maior número
Crie uma função chamada maiorNumero que receba três números inteiros como parâmetros e retorne o maior entre eles. No main, solicite ao usuário que digite três valores e exiba o maior número usando a função.
#include <stdio.h>

int maiornumero(int a, int b, int c) {
    int maior = a;
    if (b > maior) {
        maior = b;
    }
     if (c > maior) {
         maior = c;
     }
     return maior; 
 }

int main()
{
    int num1 = 0;
    int num2 = 0;
    int num3 = 0;
    printf("Digite o primeiro numero: ");
    scanf("%d", &num1);
    printf("Digite o segundo numero: ");
    scanf("%d", &num2);
    printf("Digite o terceiro numero: ");
    scanf("%d", &num3);
    printf("O maior numero e: %d\n", maiornumero(num1, num2, num3));
    return 0;
}


 


Exercício 5 – Conversão de temperatura
Crie uma função chamada celsiusParaFahrenheit que receba uma temperatura em Celsius e retorne o valor correspondente em Fahrenheit. A fórmula é:
F = C * 1.8 + 32
Peça ao usuário a temperatura em Celsius no main e exiba o resultado da conversão.
#include <stdio.h>

void celsiusparafahrenheit(float celsius) {
    float fahrenheit = celsius * 1.8 + 32;
      printf("A temperatura em fahrenheit e: %f\n", fahrenheit);
 }

int main()
{
    float celsius = 0;
    printf("Digite a temperatura em Celsius: ");
    scanf("%f", &celsius);
    celsiusparafahrenheit(celsius);
    return 0;
}

