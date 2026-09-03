#include<stdio.h>

typedef struct Aluno
{
	char nome[50];
	int idade;
	int nota;
    
}p;

int main()
{
	p pessoas[6];
    
	for(int i=0; i < 6; i++)
	{
	printf("Informe seu nome: ");
	scanf("%s", pessoas[i].nome);
	printf("Informe sua idade: ");
	scanf("%d",&pessoas[i].idade);
	printf("Informe a sua nota: ");
	scanf("%f",&pessoas[i].nota);
	}
    
	for(int i=0; i < 6; i++){
    
	printf("%s\n%d\n%.2f\n\n", pessoas[i].nome, pessoas[i].idade,pessoas[i]. nota);
	}
}

