
1- Cadastro de Produtos com Filtro
Crie um programa que cadastre até 30 produtos com:
●	Nome, código e preço
 Permita:
●	Listar todos os produtos
●	Listar produtos com preço maior que um valor informado pelo usuário
●	Buscar produto pelo código
enquanto o usuário desejar cadastrar
    ler nome[i], codigo[i], preco[i]
    i = i + 1
fim enquanto
exibir menu:
1 - Listar todos
2 - Listar acima de um valor
3 - Buscar por código
executar a opção escolhida

#include <stdio.h>

int main()
{
    char nome[30][50];
    int cod[30];
    int codigo;
    int qtd;
    float preco[30];
    float valor;

    printf("Quantos produtos deseja cadastrar (minimo 1 e maximo 30)? ");
    scanf("%d", &qtd);
    for (int i = 0; i < qtd; i++) {
   	 printf("Cadastro do produto %d:\n", i + 1);
   	 printf("Produto: ");
   	 scanf("%s", &nome[i]);
   	 printf("Codigo: ");
   	 scanf("%d", &cod[i]);
   	 printf("Preco: ");
   	 scanf("%f", &preco[i]);
    }
    printf("\n** Lista de Produtos Cadastrados **\n");
    for (int i = 0; i < qtd; i++) {
   	 printf("Produto: %s, Codigo: %d, Preco: %f\n", nome[i], cod[i], preco[i]);
    }
    printf("\n Digite o valor minimo dos produtos que deseja encontrar: ");
    scanf("%f", &valor);
    printf("Produtos com preço maior ou igual a R$ %f:\n", valor);
   	 for (int i = 0; i < qtd; i++){
   		 if (preco[i] >= valor){
   			 printf("Produto: %s | Código: %d | Preço: R$ %.2f\n", nome[i], cod[i], preco[i]);
   		 }
    }
    printf(" Digite o codigo dos produtos que deseja encontrar: ");
    scanf("%d", &codigo);
   	 for (int i = 0; i < qtd; i++) {
   		 if (cod[i] == codigo) {
   		 printf("Produto encontrado: %s, Codigo: %d, R$ %f\n", nome[i], cod[i], preco[i]);
   	 }
    }   		 
}

2- Controle de Estoque
Você deve criar um sistema que armazene o estoque de até 30 itens. Para cada item, armazene: nome, quantidade em estoque e valor unitário. O programa deve:
●	Permitir entrada de dados
●	Atualizar a quantidade de um produto (entrada ou saída de estoque)
●	Calcular o valor total em estoque
para i de 0 até N-1
    ler nome[i], quantidade[i], valor[i]
fim para
mostrar menu:
1 - Entrada de estoque
2 - Saída de estoque
3 - Valor total do estoque
atualizar os valores conforme a opção

#include <stdio.h>
#include <string.h>


int main()
{
    char prod[30][100];
    char prodbusca[100];
    int qte[30];
    int rep;
    int escolha;
    int alterar;
    int estoque;
    int qteatual = 0;
    int qtetotal = 0;
    float precototal = 0;
    float precoatual = 0;
    float preco[30];

    printf("Quantos produtos deseja cadastrar (minimo 1 e maximo 30)? ");
    scanf("%d", &rep);
    for (int i = 0; i < rep; i++) {
   	 printf("Cadastro do produto %d:\n", i + 1);
   	 printf("Produto: ");
   	 scanf("%s", &prod[i]);
   	 printf("Quantidade: ");
   	 scanf("%d", &qte[i]);
   	 printf("Preco: ");
   	 scanf("%f", &preco[i]);
   	 precototal = precototal + (qte[i] * preco[i]);
   	 qtetotal = qtetotal + qte[i];
    }
    printf("\n** Lista de Produtos Cadastrados **\n");
    for (int i = 0; i < rep; i++) {
   	 printf("Quantidade: %d, Produto: %s, Preco: %f\n", qte[i], prod[i], preco[i]);
    }
    printf("\n Quantidade de produtos em estoque: %d", qtetotal);
    printf("\n Valor de produtos em estoque: %f", precototal);
    printf("\nO que vc precisa fazer agora? Incluir - digite 1... Retirar - digite 2... Sair digite 3 \n");
    scanf("%d", &escolha);

    while (escolha == 1) {
   	 printf("Digite o nome do produto: ");
   	 scanf("%s", &prodbusca);

   	 for (int i = 0; i < rep; i++) {
   		 if (strcmp(prod[i], prodbusca) == 0) {
   			 printf("Produto %s\n", prod[i]);
   			 printf("Quantidade atual: %d\n", qte[i]);
   			 printf("Digite a quantidade a adicionar: ");
   			 scanf("%d", &alterar);

   			 if (qte[i] + alterar < 0) {
   				 printf("Erro: estoque insuficiente!\n");
   				 printf("\nO que vc precisa fazer agora? Incluir - digite 1... Retirar - digite 2... Sair digite 3 ");
   				 scanf("%d", &escolha);
   			 }
   			 else {
   				 qte[i] += alterar;
   				 printf("Estoque atualizado! Nova quantidade: %d\n", qte[i]);
   				 printf("\nO que vc precisa fazer agora? Incluir - digite 1... Retirar - digite 2... Sair digite 3 ");
   				 scanf("%d", &escolha);
   			 }
   		 }
   	 }
    }
    while (escolha == 2) {
   	 printf("Digite o nome do produto: ");
   	 scanf("%s", &prodbusca);

   	 for (int i = 0; i < rep; i++) {
   		 if (strcmp(prod[i], prodbusca) == 0) {
   			 printf("Produto %s\n", prod[i]);
   			 printf("Quantidade atual: %d\n", qte[i]);
   			 printf("Digite a quantidade a retirar: ");
   			 scanf("%d", &alterar);

   			 if (qte[i] - alterar < 0) {
   				 printf("Erro: estoque insuficiente!\n");
   				 printf("\nO que vc precisa fazer agora? Incluir - digite 1... Retirar - digite 2... Sair digite 3 ");
   				 scanf("%d", &escolha);
   			 }
   			 else {
   				 qte[i] -= alterar;
   				 printf("Estoque atualizado! Nova quantidade: %d\n", qte[i]);
   				 printf("\nO que vc precisa fazer agora? Incluir - digite 1... Retirar - digite 2... Sair digite 3 ");
   				 scanf("%d", &escolha);
   			 }
   		 }
   	 }
    }
}
3 - Análise de Temperaturas (com matriz)
Crie um programa que registre a temperatura diária durante uma semana para 4 cidades diferentes. A matriz será de 4x7. Ao final, o programa deve:
●	Calcular a média semanal de cada cidade
●	Informar qual cidade teve a maior média
●	Mostrar qual foi o dia mais quente da semana (cidade e dia)
para cidade de 0 até 3
    para dia de 0 até 6
        ler temperatura[cidade][dia]
    fim para
fim para
para cidade de 0 até 3
    somar temperaturas da semana
    calcular média
    verificar maior média
fim para
buscar maior temperatura da matriz
exibir cidade e dia correspondentes

#include <stdio.h>
#include <string.h>

int main()
{
    int matriz[4][7];
    int i, j;
    int soma;
    float media [4];
    int cidademax = 0;
    int diamax = 0; 
    int tempmax = -1000;
    float maiormedia = 0;
    int cidademaiormedia = 0;
    
    
    for (int i = 0; i <= 3; i++) {
    printf("Cidade %d\n", i+1);
        for (int j = 0; j < 7; j++) {
            printf(" Dia %d - Temperatura: ", j + 1);
            scanf("%d", &matriz[i][j]);
            
            if (matriz[i][j] > tempmax) {
                tempmax = matriz[i][j];
                cidademax = i;
                diamax = j;
            }
        }
    }
        
        printf("\n Media semanal de cada cidade:\n");
        for(int i = 0; i <= 3; i++) {
            soma = 0;
            for (j = 0; j < 7; j++){
                soma += matriz[i][j];
            }
            media[i] = soma / 7.0;
            printf("Cidade%d, %f\n", i+1, media[i]);
            
            if (media[i] > maiormedia) {
                maiormedia = media[i];
                cidademaiormedia = i;
            }
        }
        
        printf("\nCidade com maior média: Cidade %d (%.2f°C)\n", cidademaiormedia + 1, maiormedia);
        printf("Dia mais quente da semana: Cidade %d, Dia %d (%d°C)\n", cidademax + 1, diamax + 1, tempmax);

    }



4- Controle de Vagas em Estacionamento
Um estacionamento possui 30 vagas. Cada carro que entra informa a placa e a hora de entrada. Quando o carro sai, a hora de saída é informada e o programa calcula o tempo de permanência e o valor a pagar (R$5 por hora).
●	Armazenar placa e hora de entrada
●	Calcular valor a pagar ao sair
●	Listar os carros ainda estacionados
enquanto usuário desejar
    mostrar menu: 1-Entrada / 2-Saída / 3-Listar / 0-Sair
    se opção == 1 então
         validar se ainda tem vaga disponível
        ler placa e hora_entrada
        guardar em vetor
    senão se opção == 2 então
        ler placa e hora_saida
        calcular tempo = hora_saida - hora_entrada
        calcular valor = tempo * 5
        remover carro do vetor
    senão se opção == 3 então
        mostrar todas as placas ainda estacionadas
fim enquanto

#include <stdio.h>
#include <string.h>

int main() {
	char placa[30][8];
	char busca[8];
	int horaEntrada[30]; 	 
	int ocupadas[30] = { 0 };    
	int vagas = 30;
	int escolha;
	int saida, tempo, preco;
	int encontrado;

	do {
    	printf("\n*** Escolha uma opcao ***\n");
    	printf("1 - Entrada\n2 - Saida\n3 - Listar\n0 - Sair\n");
    	printf("Escolha: ");
    	scanf("%d", &escolha);

    	if (escolha == 1) {
        	// Entrada de carro
        	int i;
        	for (i = 0; i < vagas; i++) {
            	if (ocupadas[i] == 0) {
                	printf("Placa: ");
                	scanf("%s", placa[i]);

                	printf("Hora de entrada (0-23): ");
                	scanf("%d", &horaEntrada[i]);

                	ocupadas[i] = 1;
                	printf("Carro estacionado na vaga %d.\n", i + 1);
                	break;
            	}
        	}
        	if (i == vagas) {
            	printf("*** Estacionamento cheio ***\n");
        	}
    	}

    	else if (escolha == 2) {
        	// Saída de carro
        	printf("Placa: ");
        	scanf("%s", busca);

        	printf("Hora de saída (0-23): ");
        	scanf("%d", &saida);

        	encontrado = 0;
        	for (int i = 0; i < vagas; i++) {
            	if (ocupadas[i] == 1 && strcmp(placa[i], busca) == 0) {
                	tempo = saida - horaEntrada[i];
                	if (tempo <= 0) tempo += 24;

                	preco = tempo * 5;
                	printf("Tempo: %d hora(s)\n", tempo);
                	printf("Valor: R$ %d\n", preco);

                	ocupadas[i] = 0; // libera a vaga
                	encontrado = 1;
                	break;
            	}
        	}
        	if (!encontrado) {
            	printf("Carro com placa %s não encontrado.\n", busca);
        	}
    	}

    	else if (escolha == 3) {
        	// Listar todos os carros estacionados
        	int algum = 0;
        	printf("\n*** Carros Estacionados ***\n");
        	for (int i = 0; i < vagas; i++) {
            	if (ocupadas[i]) {
                	printf("Vaga %d: Placa %s - Entrada às %dh\n", i + 1, placa[i], horaEntrada[i]);
                	algum = 1;
            	}
        	}
        	if (!algum) {
            	printf("Nenhum carro estacionado.\n");
        	}
    	}

    	else if (escolha != 0) {
        	printf("Opção inválida.\n");
    	}

	} while (escolha != 0);

	printf("Sistema encerrado!\n");
	return 0;
}




5- Sistema de Quiz de Perguntas
Crie um sistema que armazene 5 perguntas de múltipla escolha (A, B, C ou D). O usuário responde uma a uma e ao final o programa mostra:
●	Total de acertos
●	Lista das perguntas que ele errou com a resposta correta
●	Vetor com perguntas e gabarito
●	Validação de respostas
●	Comparação com o gabarito
armazenar perguntas[5], gabarito[5]
para i de 0 até 4
    mostrar pergunta[i]
    ler resposta_usuario[i]
    se resposta_usuario[i] == gabarito[i]
        acertos++
    senão
        registrar pergunta errada
fim para
mostrar acertos e perguntas erradas com resposta certa
#include <stdio.h>
#include <string.h>

int main() {
	char perguntas[5][200] = {
    	"1. Quantos fios de cabelos uma essoa tem na cabeça?\nA) 100 mil\nB) 100mil e 1\nC) 100 mil e 2\nD) 100mil e 3",
    	"2. O que acontece se voce apertar todos os botoes do elevador?\nA) Voce vira piloto\nB) Voce entra em modo aviao\nC) Ele para em todos os andares e voce vira odiado por todos\nD) O elevador te julga silenciosamente",
    	"3. Qual é o superpoder de toda avo?\nA) Invisibilidade\nB) Controlar o clima com ramo bento\nC) Multiplicar comida infinitamente\nD) voar com vassoura",
    	"4. Se vc esquecer de colocar o arroz na agua o que acontece?\nA) Ele começa a te julgar\nB) Ele vira pipoca\nC) Ele chama o miojo pra ajudar\nD) Ele continua cru, como sempre",
    	"5. O que acontece quando seu celular cai no chao e nao quebra?\nA) Voce usou um codigo de sorte\nB) O chao teve pena\nC) Milagre moderno da ciencia\nD) Sinal divino"
	};

	char gabarito[5] = { 'C', 'D', 'C', 'B', 'C' };
	char resposta[5];
	int acertos = 0;

	for (int i = 0; i < 6; i++) {
    	do {
        	printf("\n%s\n Sua resposta: ", perguntas[i]);
        	scanf(" %c", &resposta);
        	if (resposta < 'A' || resposta > 'D') {
            	printf("Opção inválida! Digite apenas A, B, C ou D.\n");
        	}
    	} while (resposta < 'A' || resposta > 'D');

    	if (resposta == gabarito[i]) {
        	acertos++;
    	}
	}
}


6- Simulador de Cofrinho Eletrônico
Um cofrinho armazena o valor de moedas inseridas. Cada vez que o usuário "insere" uma moeda (valores válidos: 0.10, 0.25, 0.50, 1.00), o valor é somado ao total. O usuário pode consultar o valor acumulado e "retirar" o dinheiro, zerando o cofre.
●	Vetor de moeda
●	Laço para repetição das inserções
●	Condicional para validar os valores
inicializar total = 0
enquanto verdadeiro
    mostrar menu: 1-Inserir moeda / 2-Consultar / 3-Retirar / 0-Sair
    se opção == 1
        ler valor
        se valor válido (0.10, 0.25, 0.50, 1.00)
            adicionar ao total
        senão
            mostrar "Moeda inválida"
    se opção == 2
        mostrar total
    se opção == 3
        mostrar total e zerar total
fim enquanto

#include <stdio.h>

int main() {
	float moeda[4] = {0.10, 0.25, 0.50, 1.00};
	float total = 0;
	float valor = 0;
	int valido;
	int opcao = 0;
    
	do {
    	printf("\n*MENU*\n");
    	printf("1 - Inserir Moeda\n 2 - Consultar\n 3 - Retirar (esvaziar)\n 0 - Sair\n");
    	printf("Escolha uma opção: ");
    	scanf("%d", &opcao);
   	 
    	if (opcao == 1) {
        	valido = 0;
        	printf("Digite o valor da moeda (0.10, 0.25, 0.50, 1.0): ");
        	scanf("%f", &valor);
       	 
        	for (int i = 0; i < 4; i++) {
            	if (valor == moeda[i]) {
                	valido = 1;
                	break;
            	}
        	}
       	 
        	if (valido) {
            	total += valor;
            	printf("Moeda de %.2f inserida!\n", valor);
        	}
        	else {
            	printf("Moeda inválida!\n");
        	}
    	}
    	else if (opcao == 2) {
        	printf("Valor total no cofrinho: R$ %f\n", total);
    	}
    	else if (opcao == 3) {
        	printf("Você retirou todo o valor: R$ %f\n", total);
        	total = 0;
    	}
    	else if (opcao != 0) {
        	printf("Opção inválida!\n");
    	}
   	 
	} while (opcao != 0);
    
	printf("Programa encerrado!\n");
	return 0;
}




7 - Controle de Frequência de Alunos (com Matriz)
Você deve controlar a presença de 5 alunos durante 4 dias de aula. Armazene em uma matriz binária (1 = presente, 0 = ausente). No final, informe:
●	A quantidade de faltas por aluno
●	Quais alunos estão abaixo de 75% de presença
●	Matriz 5x4 (aluno x dia)
●	dia = presença ou falta (1 ou 0)
●	Cálculo de frequência
para aluno de 0 até 4
    para dia de 0 até 3
        ler presença[aluno][dia] (0 ou 1)
    fim para
fim para
para aluno de 0 até 4
    somar presença
    calcular % de presença = (soma/4)*100
    se < 75%, exibir alerta
fim para

#include <stdio.h>

int main() {
	int presenca[5][4];
	int soma;
	float percentual;

    	for (int aluno = 0; aluno < 5; aluno++) {
    	printf("Aluno %d:\n", aluno + 1);
    	for (int dia = 0; dia < 4; dia++) {
        	printf("  Dia %d - 1 = presente, - 0 = ausente): ", dia + 1);
        	scanf("%d", &presenca[aluno][dia]);
    	}
	}
    	printf("\nRelatório de frequência:\n");
	for (int aluno = 0; aluno < 5; aluno++) {
    	soma = 0;
    	for (int dia = 0; dia < 4; dia++)
        	soma += presenca[aluno][dia];

    	percentual = (soma / 4.0) * 100;
    	printf("Aluno %d: %d faltas, %.0f de presença", aluno + 1, soma, percentual);
    	if (percentual < 75) printf("  <-- abaixo de 75%%");
    	printf("\n");
	}

	return 0;
}


8- Simulador de Lanchonete
Um cardápio tem 5 produtos com códigos e preços fixos. O usuário faz pedidos informando o código do produto e a quantidade. Ao final, o programa mostra o total da compra e lista os itens consumidos.
●	Registro dos pedidos com laço e condições
definir cardápio: codigos[5], nomes[5], precos[5]
enquanto verdadeiro
    mostrar cardápio
    ler codigo e quantidade
    se codigo válido
        calcular subtotal e adicionar ao total
        registrar item no vetor de pedidos
    se código == 0
        sair
fim enquanto
mostrar total da compra e lista dos itens

#include <stdio.h>
#include <stdio.h>

int main() {
	int cod[5] = {1, 2, 3, 4, 5};
	char produto[5][20] = {"bolo", "torta", "sanduiche", "cafe", "suco"};
	float preco[5] = {4.00, 5.00, 6.00, 6.00, 5.00};
	int pedidos[5] = {0};
	int i;
	int codigo = 0;
	int qte;
	int valido = 0;
	float total = 0;
	printf("\n**# CARDAPIO #**");
    	for (i = 0; i < 5; i++) {
        	printf("\n%d - %s (R$ %.2f)\n", cod[i], produto[i], preco[i]);
    	}	
    	printf(" \n0- Finalizar pedido\n");
    	
	
	while (1) {
    	printf("\nDigite o código do produto: \n");
    	scanf("%d", &codigo);
    	if (codigo == 0) {
    	break;
	}
	for (i = 0; i < 5; i++) {
	    if (codigo == cod[i]) {
	        printf("Quantidade: ");
	        scanf("%d", &qte);
	        
	        pedidos[i] += qte;
	        total += preco[i] * qte;
	        valido = 1;
	        break;
	    }
	}
	 if (!valido) {
	     printf ("Codigo invalido");
	 }
}

printf ("\n **# RESUMO DO PEDIDO#** \n");
for (i=0; i < 5; i++) {
    if (pedidos[i] > 0) {
        printf("\n%d x %s = R$ %.2f\n", pedidos[i], produto[i], pedidos[i] * preco[i]);
        
    }
}
printf(" TOTAL A PAGAR: R$ %.2f\n", total);

return 0;
}

