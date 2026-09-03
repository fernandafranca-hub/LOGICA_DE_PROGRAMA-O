1 - Estoque de Produtos em uma Loja
Contexto: Uma loja deseja cadastrar o nome de 5 produtos e suas quantidades em estoque. No final, o sistema deve exibir os produtos que estão com estoque abaixo de 10 unidades, alertando que precisam ser repostos.
Declarar vetor nome[5] como texto
Declarar vetor quantidade[5] como inteiro

Para i de 0 até 4 faça
    Escreva "Digite o nome do produto:"
    Leia nome[i]
    Escreva "Digite a quantidade em estoque:"
    Leia quantidade[i]
FimPara

Escreva "Produtos com estoque abaixo de 10:"
Para i de 0 até 4 faça
    Se quantidade[i] < 10 então
        Escreva nome[i], " possui apenas ", quantidade[i], " unidades no estoque."
    FimSe
FimPara
#include <stdio.h>

int main()
{
	char prod[5][100];
	int qte[5];
	for (int i = 0; i < 5; i++){
	printf("Digite o nome do produto\n");
	scanf("%s", prod[i]);
	printf("Digite a quantidade\n");
	scanf("%d", &qte[i]);
   	 
	}
	printf("Produtos com estoque baixo:\n");
	for(int i = 0; i < 5; i++){
    	if(qte[i] < 10){
    	printf ("%s: com estoque baixo : %d\n", prod[i], qte[i]);
    	}
	}
}




________________________________________
2 - Controle de Frequência dos Alunos
Contexto: Uma escola quer registrar a quantidade de faltas de 6 alunos. Se algum aluno tiver mais de 3 faltas, o sistema deve alertar que ele está em risco de reprovação.
Declarar vetor aluno[6] como texto
Declarar vetor faltas[6] como inteiro

Para i de 0 até 5 faça
    Escreva "Digite o nome do aluno:"
    Leia aluno[i]
    Escreva "Digite a quantidade de faltas:"
    Leia faltas[i]
FimPara

Escreva "Alunos em risco de reprovação:"
Para i de 0 até 5 faça
    Se faltas[i] > 3 então
        Escreva aluno[i], " está em risco com ", faltas[i], " faltas."
    FimSe
FimPara

#include <stdio.h>

int main()
{
	char aluno[6][100];
	int faltas[6];
	for (int i = 0; i < 6; i++){
	printf("Digite o nome do aluno\n");
	scanf("%s", aluno[i]);
	printf("Faltas:\n");
	scanf("%d", &faltas[i]);
   	 
	}
	printf("Aluno com risco de reprovação:\n");
	for(int i = 0; i < 6; i++){
    	if(faltas[i] > 3){
    	printf ("%s: risco de reprovação : %d\n", aluno[i], faltas[i]);
    	}
	}
}




________________________________________
3 - Lista de Compras com Orçamento
Contexto: Um usuário irá cadastrar 5 produtos e seus respectivos preços. Definir um valor de orçamento. No final, o sistema deve informar se a soma dos preços ultrapassa o valor do orçamento.
Declarar vetor produto[5] como texto
Declarar vetor preco[5] como float
Declarar orcamento como float
Declarar soma como float = 0

Para i de 0 até 4 faça
    Escreva "Digite o nome do produto:"
    Leia produto[i]
    Escreva "Digite o preço do produto:"
    Leia preco[i]
    soma = soma + preco[i]
FimPara

Se soma > orcamento então
    Escreva "Atenção! Sua compra ultrapassa o orçamento. Total: ", soma
Senao
    Escreva "Compra dentro do orçamento. Total: ", soma
FimSe
#include <stdio.h>

int main()
{
	char produto[5][100];
	float preco[5];
	float orcamento = 0
	float soma= 0
	printf("Declare seu orçamento:")
	scanf("%f", &orcamento)
	for (int i = 0; i < 5; i++){
	printf("Cadastre um produto\n");
	scanf("%s", &produto[i]);
	printf("Preço:\n");
	scanf("%f", &preco[i]);
	soma = soma + preco[i]
    	}
	if(soma > orcamento){
    	printf ("Atenção! Sua soma ultrapassa o orçamento. Total: %f", soma[i]");
    	}
	else{
    	printf ("Compra dentro do orçamento. Total: %f", soma)
    	}
}


________________________________________
4 - Pesquisa de Satisfação de Clientes
Contexto: Uma empresa aplica uma pesquisa de satisfação para 8 clientes, onde cada cliente dá uma nota de 1 a 5. O sistema deve calcular a média das notas e informar quantos clientes deram nota 5 (muito satisfeito).
Declarar vetor nota[8] como inteiro
Declarar soma como inteiro = 0
Declarar contador5 como inteiro = 0

Para i de 0 até 7 faça
    Escreva "Digite a nota do cliente (1 a 5):"
    Leia nota[i]
    soma = soma + nota[i]
    Se nota[i] = 5 então
        contador5 = contador5 + 1
    FimSe
FimPara

media = soma / 8

Escreva "Média das notas: ", media
Escreva "Clientes muito satisfeitos (nota 5): ", contador5

#include <stdio.h>

int main(){

    int nota[8];
    float soma = 0;
    int contador = 0;
    int media = 0;
    for (int i = 0; i < 8; i++){
    printf("Digite a nota do cliente de 1 a 5\n");
    scanf("%d", &nota[i]);
    soma = soma + nota[i];
    if(nota[i] == 5){
   	 contador = contador + 1;
    }
}
   media = soma/8;
   printf ("Média das notas: %d\n", media);
   printf ("Clientes muito satisfeitos: %d", contador);
}
 


________________________________________
5 - Vendas da Semana
Contexto: Uma loja registra as vendas diárias durante 7 dias da semana. O sistema deve calcular o total vendido na semana, o dia com a maior venda e o dia com a menor venda.
Declarar vetor dia[7] como texto
Declarar vetor venda[7] como float
Declarar total como float = 0
Declarar maior como float
Declarar menor como float
Declarar diaMaior como texto
Declarar diaMenor como texto

Para i de 0 até 6 faça
    Escreva "Digite o nome do dia:"
    Leia dia[i]
    Escreva "Digite o valor vendido:"
    Leia venda[i]
    total = total + venda[i]

    Se i = 0 então
        maior = venda[i]
        menor = venda[i]
        diaMaior =dia[i]
        diaMenor =dia[i]
    Senao
        Se venda[i] > maior então
            maior = venda[i]
            diaMaior =dia[i]
        FimSe
        Se venda[i] < menor então
            menor = venda[i]
            diaMenor =dia[i]
        FimSe
    FimSe
FimPara

Escreva "Total vendido na semana: ", total
Escreva "Maior venda foi em ", diaMaior, " no valor de ", maior
Escreva "Menor venda foi em ", diaMenor, " no valor de ", menor


#include <stdio.h>
#include <string.h>

int main() {
    float vendas[7];
    float total = 0.0;
    int diaMaior = 0, diaMenor = 0;
    char *diasSemana[] = {"Domingo", "Segunda", "Terça", "Quarta", "Quinta", "Sexta", "Sábado"};
    for (int i = 0; i < 7; i++) {
        printf("Digite o valor da venda do %s: ", diasSemana[i]);
        scanf("%f", &vendas[i]);
    }
    diaMaior = diaMenor = 0;
    for (int i = 0; i < 7; i++) {
        total += vendas[i];
        if (vendas[i] > vendas[diaMaior]) {
            diaMaior = i;
        }
        if (vendas[i] < vendas[diaMenor]) {
            diaMenor = i;
        }
    }
    printf("\nTotal vendido na semana: R$ %.2f\n", total);
    printf("Maior venda foi no %s: R$ %.2f\n", diasSemana[diaMaior], vendas[diaMaior]);
    printf("Menor venda foi no %s: R$ %.2f\n", diasSemana[diaMenor], vendas[diaMenor]);
}


________________________________________
6 - Controle de Ingressos Vendidos para um Evento
Contexto: Um evento tem 4 setores: Pista, Arquibancada, Camarote e VIP. O sistema deve ler a quantidade de ingressos vendidos em cada setor e informar:
●	O total de ingressos vendidos;
●	Qual setor vendeu mais ingressos.
Declarar vetor setor[4] como texto
Declarar vetor ingressos[4] como inteiro
Declarar total as inteiro = 0
Declarar maior como inteiro
Declarar setorMaior como texto

// Cadastrar setores
setor[0] = "Pista"
setor[1] = "Arquibancada"
setor[2] = "Camarote"
setor[3] = "VIP"

Para i de 0 até 3 faça
    Escreva "Digite a quantidade de ingressos vendidos para ", setor[i], ":"
    Leia ingressos[i]
    total = total + ingressos[i]

    Se i = 0 então
        maior = ingressos[i]
        setorMaior = setor[i]
    Senao
        Se ingressos[i] > maior então
            maior = ingressos[i]
            setorMaior = setor[i]
        FimSe
    FimSe
FimPara

Escreva "Total de ingressos vendidos: ", total
Escreva "Setor com mais ingressos vendidos: ", setorMaior, " com ", maior, " ingressos"

#include <stdio.h>

int main() {
    int ingressos[4];
    int total = 0;
    int setorMaior = 0;
    char *setores[] = {"Pista", "Arquibancada", "Camarote", "VIP"};
    for (int i = 0; i < 4; i++) {
        printf("Digite a quantidade de ingressos vendidos no setor %s: ", setores[i]);
        scanf("%d", &ingressos[i]);
    }
    for (int i = 0; i < 4; i++) {
        total += ingressos[i];
        if (ingressos[i] > ingressos[setorMaior]) {
            setorMaior = i;
        }
    }
    printf("\nTotal de ingressos vendidos: %d\n", total);
    printf("Setor com maior venda: %s (%d ingressos)\n", setores[setorMaior], ingressos[setorMaior]);
}

