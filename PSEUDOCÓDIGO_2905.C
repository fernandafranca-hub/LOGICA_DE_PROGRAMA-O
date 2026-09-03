1 - Verificar se um número é positivo, negativo ou zero
Peça ao usuário que digite um número inteiro e exiba se ele é positivo, negativo ou zero.

INÍCIO
    Ler numero
    SE numero > 0 ENTAO
        Escrever "Positivo"
    SENAO SE numero < 0 ENTAO
        Escrever "Negativo"
    SENAO
        Escrever "Zero"
FIM

#include <stdio.h>

int main()
{
	int numero;
	printf("Por favor, digite um numero: ");
	scanf("%d", &numero);
	if (numero > 0){
		printf("numero positivo");
	}
	else if (numero < 0) {
		printf("numero negativo");
	}
	else {
		printf("0");
	}

}

2 - Contagem de 1 a 10
Crie um programa que utilize um laço de repetição para contar de 1 até 10.

INÍCIO
    Para i de 1 até 10 faça
        Escrever i
    FimPara
 FIM
#include <stdio.h>

int main()
{
	for (int i = 1; i <= 10; i++) {
		printf("%d\n", i);
	}
}
3 - Soma de 5 números
Leia 5 números e apresente a soma total.

INÍCIO
    soma = 0
    Para i de 1 até 5 faça
        Ler numero
        soma = soma + numero
    FimPara
    Escrever soma
FIM

#include <stdio.h>

int main()
{
	int numero = 0;
	int soma = 0;
	for (int i = 1; i <=5; i++){
	    printf("Por favor, digite um numero: ");
	    scanf("%d", &numero);
	    soma = soma + numero;
	    printf("A soma é: %d \n", soma);
	}
}

 

4 - Tabuada de um número
Peça ao usuário um número e mostre a tabuada dele até 10.

INÍCIO
    Ler numero
    Para i de 1 até 10 faça
        resultado = numero * i
        Escrever resultado
    FimPara
FIM
#include <stdio.h>

int main()
{
	int numero = 0;
	int resultado = 0;
	printf("Por favor, digite um numero para gerar a tabuada: ");
	scanf("%d", &numero);
	for (int i = 1; i <=10; i++){
	    resultado = numero * i;
	    printf("%d \n", resultado);
	}
}



5 - Verificar se um número é par ou ímpar
Peça um número inteiro e informe se ele é par ou ímpar.

INÍCIO
    Ler numero
    SE numero % 2 == 0 ENTAO
        Escrever "Par"
    SENAO
        Escrever "Ímpar"
FIM

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


6 - Contagem regressiva",
Faça um programa que conte de 10 até 1 e exiba na tela.

INÍCIO
    Para i de 10 até 1 passo -1 faça
        Escrever i
    FimPara
FIM

#include <stdio.h>

int main()
{
	int numero = 0;
	for (int i = 10; i >=1; i--){
	printf("Lançamento em %d\n", i);
	} 
	    printf("Lançamento autorizado");
}




7 - Média de 4 notas
Leia 4 notas, calcule a média e informe se o aluno está aprovado (média >= 7) ou reprovado.

INÍCIO
    soma = 0
    Para i de 1 até 4 faça
        Ler nota
        soma = soma + nota
    FimPara
    media = soma / 4
    SE media >= 7 ENTAO
        Escrever "Aprovado"
    SENAO
        Escrever "Reprovado"
FIM

#include <stdio.h>

int main()
{
	float nota = 0;
	float media = 0;
	float soma = 0;
	for (int i = 1; i <=4; i++){
	    printf ("digite as notas");
	    scanf("%f", &nota);
	    soma = soma + nota;
	    printf ("soma das notas %f\n", soma);
	}
	media = (nota + nota + nota + nota)/4;
	if (media > 7) {
	printf ("aprovado com media %f", media);
    } 
    else {
    printf("reprovado com media %f", media);
    }
}




8 - Verificar maior número
Leia dois números e informe qual é o maior.

INÍCIO
    Ler numero1
    Ler numero2
    SE numero1 > numero2 ENTAO
        Escrever numero1
    SENAO
        Escrever numero2
FIM


9 - Soma até digitar zero
Leia números até que o usuário digite zero. Ao final, exiba a soma de todos os números digitados.

INÍCIO
    soma = 0
    Ler numero
    Enquanto numero != 0 faça
        soma = soma + numero
        Ler numero
    FimEnquanto
    Escrever soma
FIM


10. Faça uma calculadora de 2 números
INÍCIO

    DECLARE numero1, numero2, resultado COMO REAL
    DECLARE operador COMO CARACTERE

    EXIBIR "===== CALCULADORA ====="
    EXIBIR "Digite o primeiro número:"
    LER numero1

    EXIBIR "Digite o operador (+, -, *, /):"
    LER operador

    EXIBIR "Digite o segundo número:"
    LER numero2

    SE operador == "+" ENTÃO
        resultado <- numero1 + numero2
    SENÃO SE operador == "-" ENTÃO
        resultado <- numero1 - numero2
    SENÃO SE operador == "*" ENTÃO
        resultado <- numero1 * numero2
    SENÃO SE operador == "/" ENTÃO
        SE numero2 != 0 ENTÃO
            resultado <- numero1 / numero2
        SENÃO
            EXIBIR "Erro! Divisão por zero não é permitida."
            FIM
        FIMSE
    SENÃO
        EXIBIR "Operador inválido!"
        FIM
    FIMSE

    EXIBIR "O resultado é:", resultado

FIM


