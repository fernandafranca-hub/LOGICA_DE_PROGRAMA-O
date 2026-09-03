Exercício 1 – Soma dos números pares até N
Crie uma função chamada somaPares que receba um número inteiro N e retorne a soma de todos os números pares de 1 até N. Use um laço de repetição dentro da função. No main, leia um valor para N e exiba o resultado usando a função.
#include <stdio.h>

int somapares(int num) {
    int soma = 0;
    for (int i = 1; i <= num; i++) {
        if (i % 2 == 0) {
            soma += i;
        }
    }
     return soma; 
 }

int main()
{
    int num = 0;
    printf("Digite um numero maior que 1:");
    scanf("%d", &num);
    int resultado = somapares(num);
    printf("A soma dos numeros pares de 1 ate %d e: %d\n", num, resultado);
}

Exercício 2 – Tabuada de um número
Crie uma função chamada tabuada que receba um número inteiro e exiba a tabuada de multiplicação desse número de 1 a 10. Utilize um laço de repetição dentro da função. No main, solicite um número ao usuário e chame a função para exibir a tabuada.
#include <stdio.h>

void tabuada(int num) {
   printf("\nTabuada do %d:\n", num);
   for (int i = 1; i <= 10; i++) {
       printf("\nA tabuada do numero %d * %d = %d\n", num, i, num * i);
    }
 }

int main()
{
    int num = 0;
    printf("Digite um numero de 1 a 10 para ver a sua tabuada: ");
    scanf("%d", &num);
    tabuada (num);
    return 0;   
}

Exercício 3 – Contagem regressiva com passo
Crie uma função chamada contagemRegressiva que receba dois inteiros: um valor inicial e um valor de passo (positivo).
A função deve exibir uma contagem decrescente a partir do valor inicial, diminuindo de acordo com o passo, até chegar a zero ou menos.
No main, peça ao usuário o número inicial e o passo, e chame a função para exibir a contagem.
Exemplo: contagemRegressiva(10, 2) → 10, 8, 6, 4, 2, 0

#include <stdio.h>

void contagemregressiva(int num, int passo) {
	printf("**Contagem Regressiva**");
		for (int i = num; i >= 0; i -= passo) {
			printf("%d\n", i);
		}
}
int main() {
	int inicio, passo;

	printf("Digite o valor inicial: ");
	scanf("%d", &inicio);
	printf("Digite o valor do passo: ");
	scanf("%d", &passo);
	contagemregressiva(inicio, passo);
	return 0;
}



Exercício 4 – Menu interativo com funções
Implemente um programa com as seguintes funções:
- soma(a, b) que retorna a soma de dois números;
- subtrai(a, b) que retorna a subtração de dois números;
- multiplica(a, b) que retorna a multiplicação de dois números;
- divide(a, b) que retorna a divisão de dois números.

Crie uma função menu() que mostre as opções ao usuário e use um laço while para continuar exibindo o menu até o usuário digitar a opção de sair.
#include <stdio.h>
float adicao(float a, float b) {
	return a + b;
}
float subtracao(float a, float b) {
	return a - b;
}
float multiplicacao(float a, float b) {
	return a * b;
}
float divisao(float a, float b) {
	return a / b;
}
int main() {
	int escolha = 0;
	do {
		printf("\n *** Escolha uma função: ***\n");
		printf("1 - adição\n");
		printf("2 - subtração\n");
		printf("3 - multiplicação\n");
		printf("4 - divisão\n");
		printf("0 - sair\n");
		scanf("%d", &escolha);
		if (escolha >= 0 && escolha <= 4) {
		    if (escolha == 0) {
				printf("**Programa encerrado!**\n");
				return 0;
			}
			float a, b, resultado;
			printf("Digite o primeiro numero:");
			scanf("%f", &a);
			printf("Digite o segundo numero:");
			scanf("%f", &b);

			if (escolha == 1) {
				resultado = adicao(a, b);
				printf("Resultado da adição: %f\n", resultado);
			}
			else if (escolha == 2) {
				resultado = subtracao(a, b);
				printf("Resultado da subtração: %f\n:", resultado);
			}
			else if (escolha == 3) {
				resultado = multiplicacao(a, b);
				printf("Resultado da multipliação: %f\n", resultado);
			}
			else if (escolha == 4) {
				resultado = divisao(a, b);
				printf("Resultado da divisão: %f\n", resultado);
			}
		}
		else {
			printf("Opção invalida! Tente novamente!\n");
		}
	}while (escolha != 0);
	return 0;
}




