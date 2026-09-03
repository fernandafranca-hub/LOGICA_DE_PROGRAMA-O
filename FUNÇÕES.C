Exercício 1 – Aplicativo de Pedágio – Cálculo de custo por viagem
Contexto: Um motorista deseja saber quanto irá gastar ao viajar entre duas cidades. A viagem envolve três pedágios e o consumo de combustível.

Detalhes:
- O carro faz 12 km por litro.
- O litro da gasolina custa R$ 5,59.
- Os pedágios custam R$ 9,50 cada.
- A distância total da viagem é fornecida pelo usuário.

Tarefas:
- Crie uma função calcularCombustivel(float distancia)
- Crie uma função calcularPedagio(int qtd)
- Crie uma função calcularCustoTotal(float distancia, int qtd) que usa as anteriores
#include <stdio.h>
float combustivel(float distancia){
    float rendimento = 12;
    float preco = 5.59;
    return (distancia/rendimento)* preco;
}
float pedagio(int qte){
   float pedagio = 9.5;
   return qte * pedagio;
}
float custo(float distancia, int qte){
    return combustivel(distancia) + pedagio(qte);
}

int main() {
	float km = 0;
	int pedagio = 3;
	//do {
		printf("\n Entre quantos km\n");
		scanf("%f", &km);
		printf("\n Entre quantos pedagios\n");
		scanf("%d", &pedagio);
		printf("\n custo %f\n", custo(km, pedagio));
}

Exercício 2 – Sistema de supermercado – Múltiplas funções
Contexto: Um pequeno supermercado quer automatizar o caixa. O cliente informa quantos produtos vai comprar e digita o valor de cada um. Depois, escolhe se vai pagar em dinheiro, cartão de crédito ou débito.

Descontos:
- Dinheiro: 10%
- Débito: 5%
- Crédito: sem desconto

Tarefas:
- Função calcularTotal(int qte)
- Função aplicarDesconto(float total, int metodo)
- Função principal que exibe o valor total
#include <stdio.h>
float calculartotal(int qte){
    float valor, total = 0;
    for (int i = 1; i <= qte; i++){
        printf("Entre o valor do produto %d: R$ ", i);
		scanf("%f", &valor);
		total += valor;
    }
    return total;
    
}
float aplicardesconto (float total, int escolha){
    if(escolha == 1){
        return total * 0.90;
    }
    else if(escolha == 2){
        return total * 0.95;
    }
    else {
        return total;
    }
}

int main() {
	int qte = 0;
	int escolha = 0;
	float total;
	float totalcomdesconto;

		printf("\n Entre quantos produtos\n");
		scanf("%d", &qte);
		
		total = calculartotal(qte);
		
		printf("\n Forma de pagamento:\n");
		printf(" 1 - Dinheiro\n");
		printf(" 2 - Débito\n");
		printf(" 3 - Crédito\n");
		scanf("%d", &escolha);
		
		totalcomdesconto = aplicardesconto(total, escolha);
		
		printf("\nValor total da compra:R$%f", total);
		printf("\nValor total com desconto: R$%f", totalcomdesconto);
		
		return 0;
}

Exercício 3 – Academia – Simulador de IMC com categorias
Contexto: Uma academia quer registrar o IMC (Índice de Massa Corporal) de seus alunos e classificar o resultado.

Fórmula: IMC = peso / (altura * altura)

Classificações:
- Abaixo de 18.5: Abaixo do peso
- Entre 18.5 e 24.9: Peso normal
- Entre 25.0 e 29.9: Sobrepeso
- 30.0 ou mais: Obesidade

Tarefas:
- Função calcularIMC(float peso, float altura)
- Função classificarIMC(float imc)
- Função principal que recebe os dados e chama as anteriores
#include <stdio.h>

float calcularIMC(float peso, float altura) {	
		return peso / (altura * altura);
}
float classificarIMC(float imc) {

	if (imc < 18.5) {
		printf("Classificação: Abaixo do peso\n");
	}
	if (imc >= 18.5 && imc < 24.9) {
		printf("Classificação: Peso normal\n");
	}
	else if (imc >= 25 && imc < 29.9) {
		printf("Classificação: Sobrepeso\n");
	}
	else {
		printf("Classificação: Obesidade\n");
	}
}


int main() {
	float peso = 0;
	float altura = 0;
		printf("Digite sua altura:");
		scanf("%f", &altura);
		printf("Digite seu peso:");
		scanf("%f", &peso);
		float imc = calcularIMC(peso, altura);
		printf("Seu IMC é de:%f\n", imc); 
		classificarIMC(imc);
		return 0;
}

Exercício 4 – Sistema de aluguel de filmes – Regras de cobrança
Contexto: Uma locadora cobra:
- R$ 5 por dia para filmes comuns
- R$ 7 por dia para lançamentos

O cliente pode alugar vários filmes e informa o tipo (comum ou lançamento) e a quantidade de dias de cada um.

Tarefas:
- Função calcularFilme(int tipo, int dias)
- Função calcularTotalAluguel() que lê N filmes e soma os valores
- O sistema exibe um recibo ao final

#include <stdio.h>

float calcularfilme(int tipo, int dias) {
	if (tipo == 1) {
		return dias * 5;
	}
	else {
		return dias * 7;
	}
}
	float calcularTotalAluguel(){
		int n, tipo, dias;
		float total = 0;
		printf("Quantos filmes deseja alugar?");
		scanf("%d", &n);

		for (int i = 0; i < n; i++) {
			printf("\n#*FILME*#\n", i + 1);
			printf("1 - FILME COMUM R$ 5,00\n");
			printf("2 - FILME LANÇAMENTO R$ 7,00\n");
			printf("Escolha o tipo de filme: ");
			scanf("%d", &tipo);

			printf("Quantos dias?\n");
			scanf("%d", &dias);
			
			total += calcularfilme(tipo, dias);
		}
		return total;
	}

int main() {
	float total = calcularTotalAluguel();
	printf("Total a pagar R$:%f\n", total);
	return 0;
}

Exercício 5 – Sistema de biblioteca – Controle de empréstimo e multa
Contexto: Um sistema de biblioteca calcula multas por atraso na devolução de livros. As regras são:
- Até 3 dias de atraso: R$ 1,00 por dia
- De 4 a 7 dias: R$ 2,00 por dia
- Acima de 7 dias: R$ 5,00 por dia

Tarefas:
- Função calcularMulta(int diasAtraso)
- Função que permita o cadastro de vários livros e a quantidade de dias de atraso
- O programa exibe o total de multa ao final
#include <stdio.h>

float calcularMulta(int diasAtraso){
	if (diasAtraso <= 3) {
		return diasAtraso * 1;
	}
	else if (diasAtraso >= 4 && diasAtraso<= 7) {
		return diasAtraso * 2;
	}
	else {
		return diasAtraso * 5;
	}
}
	float calcularTotalMultas(){
		int livro, diasAtraso;
		float total = 0;

		printf("Quantos livros estão em atraso?");
		scanf("%d", &livro);

		for (int i = 0; i < livro; i++) {
			printf("\nLivro %d:\n", i + 1);
			printf("Quantos dias de atraso?\n");
			scanf("%d", &diasAtraso);
			
			float multa = calcularMulta(diasAtraso);
			total += multa;
			printf("Multa deste livro é de: R$ %f\n", multa);
		}
		return total;
	}

int main() {
	float total = calcularTotalMultas();
	printf("Total a pagar R$:%f\n", total);
	return 0;
}

