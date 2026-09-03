1 - Soma de Elementos Inteiros
Crie um algoritmo que leia um vetor de 10 números inteiros e calcule a soma de todos os elementos. No final, exiba o valor da soma.
#include <stdio.h>

int main()
{
    int numero[10];
    int soma =0;
    printf("Digite dez numero inteiros\n");
    for (int i = 0; i < 10; i++){
    scanf("%d", &numero[i]);
    soma = soma + numero[i];}
    printf ("%d", soma);
}

________________________________________
2 - Média de Notas (Float)
Crie um algoritmo que leia um vetor de 5 números reais representando notas. Calcule e exiba a média das notas.
#include <stdio.h>

int main()
{
    int numero[5];
    float media =0;
    float soma = 0;
    printf("Digite as 5 notas\n");
    for (int i = 0; i < 5; i++){
    scanf("%d", &numero[i]);
    soma = soma + numero[i];
    media = soma/5;}
    printf ("Sua média é: %f", media);
}


________________________________________
3 - Contagem de Valores Positivos e Negativos (Int)
Crie um vetor de 8 números inteiros. O algoritmo deve contar quantos números são positivos e quantos são negativos e exibir esses resultados.
#include <stdio.h>

int main()
{
    int numero[8];
    int positivo = 0;
    int negativo = 0;
    printf("Digite 8 numeros\n");
    for (int i = 0; i < 8; i++){
   	 scanf("%d", &numero[i]);
    if (numero[i]<0){
    	negativo = negativo+1;}
    else if (numero[i]>0){
    	positivo = positivo+1;}
    }
    printf("Numero negativo %d\n", negativo);
    printf("Numero positivo %d", positivo);
}

________________________________________
4 - Nomes de Alunos (String)
Crie um vetor de 5 strings para armazenar o nome de alunos. Leia e armazene os nomes. No final, exiba todos os nomes cadastrados.
#include <stdio.h>
#include <string.h>

int main() {
    char nome[5][20];
    printf("Digite 5 nomes \n");
    for(int i = 0; i < 5; i++){
    scanf("%s", nome[i]);
   	 
    }
    printf ("ALUNOS CADASTRADOS\n");
    for (int i = 0; i < 5; i++){
    printf("%s\n", nome[i]);
    }
}________________________________________
5 - Busca por Nome (String com Condicional)
Utilizando o vetor de nomes do exercício anterior, permita que o usuário digite um nome. O algoritmo deve informar se o nome está presente no vetor.
#include <stdio.h>
#include <string.h>

int main() {
    char nome[5][20];
    char busca[20];
    int enc = 0;
    printf("Digite 5 nomes \n");
    for(int i = 0; i < 5; i++){
    scanf("%s", nome[i]);
    }
    printf ("ALUNOS CADASTRADOS\n");
    for (int i = 0; i < 5; i++){
    printf("%s\n", nome[i]);
    }
    printf ("Qual nome deseja procurar?\n");
    scanf ("%s", busca);
    for (int i = 0; i < 5; i++){
    if (strcmp(nome[i], busca) ==0){
    	enc=1;
    	break;
    }
    }
    if (enc){
    printf("Nome na lista");
    }
	else{
	printf ("Nome não esta na lista");
	}
}
________________________________________
6 - Maior e Menor Valor (Int com Condicional)
Leia um vetor de 7 números inteiros. O algoritmo deve encontrar e exibir o maior e o menor número armazenados.
#include <stdio.h>
int main() {
    int numero[7];
    int i, maior, menor; 
for(i = 0; i < 7; i++) {
    printf("Digite o número %d: ", i + 1);
    scanf("%d", &numero[i]);
    }
    maior =numero[0];
    menor = numero[0];

for(i = 1; i < 7; i++) {
 if(numero[i] > maior) {
            maior = numero[i];
        }
        if(numero[i] < menor) {
            menor = numero[i];
        }
    }
   printf("Maior número: %d\n", maior);
   printf("Menor número: %d\n", menor);
}

________________________________________
7 - Quantidade de Notas Acima da Média (Float com Condicional)
Leia as notas de 6 alunos e calcule a média. Depois, informe quantos alunos tiveram nota acima da média.
#include <stdio.h>
int main() {
    float nota[6];
    float total = 0, media;
    int contador = 0;
       for (int aluno = 0; aluno < 6; aluno++) {
        printf("Informe a nota do aluno %d: ", aluno + 1);
        scanf("%f", &nota[aluno]);
        total += nota[aluno];  
    }
    media = total / 6;
    for (int aluno = 0; aluno < 6; aluno++) {
        if (nota[aluno] > media) {
            contador++;
        }
    }
    printf("\nMédia geral: %.2f\n", media);
    printf("Alunos com nota acima da média: %d\n", contador);
}


________________________________________
8 - Contagem de Palavras Específicas (String com Condicional)
Crie um vetor de 5 palavras. Depois, peça que o usuário digite uma palavra e informe quantas vezes essa palavra aparece no vetor.
________________________________________
9 - Números Pares e Ímpares (Int com Condicional)
Leia um vetor de 10 números inteiros. Separe e exiba quais são os números pares e quais são os ímpares.
#include <stdio.h>
int main()
   {
    int numero[10];
    int i;
    for (int i = 0; i < 10; i++){
    printf("Por favor, digite um numero:\n");
    scanf("%d", &numero[i]);
    }
    printf("NUMEROS PARES:\n");
    	for (i = 0; i < 10; i++) {
    	if (numero[i] % 2 == 0) {
        	printf("%d\n ", numero[i]);
    	}
	}

	printf("NUMEROS IMPARES:\n");
	for (i = 0; i < 10; i++) {
    	if (numero[i] % 2 != 0) {
        	printf("%d\n ", numero[i]);
    	}
	}
	printf("\n");
}   

