1 - Lista de Compras do Supermercado
Imagine que você foi ao supermercado e cada produto que você coloca no carrinho recebe um código numérico (inteiro).
?	Crie um programa que utilize uma lista (vetor) para armazenar até 20 códigos de produtos.

?	O usuário poderá:

1.	Adicione um novo produto no final da lista.

2.	Remover um produto informando sua posição.

3.	Listar todos os produtos no carrinho.

4.	Pesquisar se um produto está no carrinho.
#include <stdio.h>

int main() {

	int produto[20];
	int i = 0;
	int qte = 0;
	int opcao = 0;
	int cod = 0;
	int posicao = 0;
	int encontrado = 0;


	do {
		printf("**MENU**\n");
		printf("Escolha uma opção:\n");
		printf("1 - Adicionar Produto\n");
		printf("2 - Remover Produto( posição)\n");
		printf("3 - Listar Produtos\n");
		printf("4 - Pesquisar Produto(codigo)\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (qte < 20) {
				printf("Digite o codigo do produto:\n");
				scanf("%d", &produto[qte]);
				qte++;
				printf("Produto Adicionado!\n");
			}
			else {
				printf("Carrinho cheio!\n");
			}
		}
		else if (opcao == 2) {
			if (qte >= 0) {
				printf("Digite a posição do produto que deseja remover: (0 a %d)\n", qte - 1);
				scanf("%d", &posicao);

				if (posicao >= 0 && posicao < qte) {
					for (i = posicao; i < qte - 1; i++) {
						produto[i] = produto[i + 1];
					}
					qte--;
					printf("Produto Removido");
				}
				else {
					printf("Posição Invalida\n");
				}
			}
			else {
				printf("Carrinho Vazio!");
			}
		}
			else if (opcao == 3) {
				if (qte == 0) {
					printf("Carinho Vazio:\n");
				}
				else {
					printf("Produtos no carrinho:\n");
					for (i = 0; i < qte; i++) {
						printf("Posição %d: %d\n", i, produto[i]);
					}
				}
			}
			else if (opcao == 4) {
				printf("Digite o codigo do produto para pesquisar:\n", cod);
				scanf("%d", &cod);
				encontrado = 0;

				for (i = 0; i < qte; i++) {
					if (produto[i] = cod) {
						printf("Produto econtrado na posição : %d\n", i);
						encontrado = 1;
						break;
					}
				}
				if (!encontrado) {
					printf("Produto não encontrado!\n");
				}
			}
			
		else if (opcao == 0) {
			printf("Saindo...\n");
		}
		else {
			printf("Opção Invalida!\n");
		}
	} while (opcao != 0);

	return 0;
}


2 - Fila de Atendimento no Banco
Um banco precisa organizar o atendimento dos clientes. Cada cliente recebe uma senha numérica (inteiro).
?	Crie um programa que utilize uma fila (vetor) para armazenar até 10 senhas.

?	O programa deve permitir:

1.	Gerar uma nova senha e colocá-la no fim da fila.

2.	Chamar o próximo cliente (remover do início da fila).

3.	Mostrar quem é o próximo a ser atendido sem removê-lo.

4.	Exibir a fila completa de espera.

5.	Mostrar quantas senhas restam para serem geradas.

#include <stdio.h>

int main() {

	int fila[10];
	int inicio = 1;
	int fim = -1;
	int total = 0;
	int proxsenha = 0;
	int opcao = 0;
	int i = 0;


	do {
		printf("\n**MENU BANCO**\n");
		printf("Escolha uma opção:\n");
		printf("1 - Gerar nova senha\n");
		printf("2 - Chamar próximo cliente\n");
		printf("3 - Ver Próximo cliente\n");
		printf("4 - Exibir lista\n");
		printf("5 - Exibir senhas restantes\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (total < 10) {
			    fim ++;
			    fila[fim] = proxsenha;
			    proxsenha++;
			    total ++;
				printf("Senha gerada com sucesso!\n");
			}
			else {
				printf("Fila cheia! Aguarde Atendimento!\n");
			}
		}
		else if (opcao == 2) {
			if (total > 0) {
				printf("Chamando cliente com senha: %d\n", fila[inicio]);
				inicio ++;
				total --;
			}
			else {
				printf("Fila Vazia! Nenhum cliente para chamar!\n");
			}
		}
		else if (opcao == 3) {
			if (total > 0) {
				printf("Próximo Cliente: %d\n", fila[inicio]);
			}
			else {
				printf("Fila Vazia!");
			}
		}
		else if (opcao == 4) {
			if (total > 0) {
				printf("Fila de espera: \n");
				for (i = inicio; i <= fim; i++) {
					printf("%d\n", fila[i]);
				}
				printf("\n");
			}
			else {
				printf("Fila Vazia!");
			}
		}
		else if(opcao == 5){
		    printf("Senhas restantes: %d\n", 10 - total);
		}
		else if (opcao == 0) {
			printf("Saindo...\n");
		}
		else {
			printf("Opção Invalida!\n");
		}
	} while (opcao != 0);

	return 0;
}



3 - Pilha de Pratos em uma Festa
Em uma festa, os pratos são empilhados e as pessoas vão pegando sempre o prato do topo.
?	Use uma pilha (vetor) para representar até 15 pratos.

?	O programa deve permitir:

1.	Colocar um prato limpo na pilha.

2.	Retirar um prato (quando alguém pega para se servir).

3.	Mostrar qual prato está no topo da pilha.

4.	Exibir quantos pratos ainda restam na pilha.

#include <stdio.h>

int main() {
	int pilha[15];
	int topo = -1;
	int opcao;

	do {
		printf("**MENU**\n");
		printf("Escolha uma opção:\n");
		printf("1 - Colocar prato limpo\n");
		printf("2 - Retirar Prato\n");
		printf("3 - Ver prato do topo\n");
		printf("4 - Exibir total de pratos\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (topo < 14) {
				topo++;
				pilha[topo] = 1;
				printf(" Prato limpo colocado na pilha.\n");
			}
			else {
				printf("Pilha Cheia! Não é possivel colocar mais pratos.\n");
			}
		}
		else if (opcao == 2) {
			if (topo >= 0) {
				printf(" Prato retirado na pilha");
				topo--;
			}
			else {
				printf("Pilha Vazia! Não ha pratos para retirar");
			}
		}
		else if (opcao == 3) {
			if (topo >= 0) {
				printf("Ha um prato no topo do pilha: (posicao %d);\n", topo);
			}
			else {
				printf("A pilha esta vazia! Nenhum prato no topo.\n");
			}
		}
		else if (opcao == 4) {
			printf("Total de pratos na pilha: %d\n", topo + 1);
		}
		else if (opcao == 0) {
			printf("Saindo...\n");
		}
		else {
			printf("Opção Invalida!\n");
		}
	} while (opcao != 0);

	return 0;
}







4 - Histórico de Navegação na Internet
Um navegador guarda as últimas páginas visitadas como um histórico.
?	Crie um programa que utilize uma pilha (vetor) para armazenar até 10 páginas, representadas por números inteiros (ex: 101 = Google, 202 = YouTube, etc.).

?	O usuário poderá:

1.	Visitar uma nova página (empilhar).

2.	Voltar para a página anterior (desempilhar).

3.	Mostrar a página atual (topo da pilha).

4.	Exibir o histórico completo.

#include <stdio.h>

int main() {
	int pilha[10] = {0};
	int topo = -1;
	int pagina;
	int opcao;
	int i = 0;

	do {
		printf("**MENU**\n");
		printf("Escolha uma opção:\n");
		printf("1 - Visitar nova pagina\n");
		printf("2 - Voltar pagina\n");
		printf("3 - Voltar pagina atual\n");
		printf("4 - Exibir histórico completo\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (topo < 9) {
				printf("Digite o codigo da pagina: ");
				scanf("%d", &pagina);
				topo++;
				pilha[topo] = pagina;
				printf(" Pagina %d visitada.\n", pagina);
			}
			else {
				printf("Historico Cheio! Não é possivel visitar mais paginas.\n");
			}
		}
		else if (opcao == 2) {
			if (topo >= 0) {
				printf(" Voltamos a pagina %d.\n", pilha[topo - 1]);
				
			}
			else {
				printf("Não ha paginas anteriores para voltar.\n");
			}
		}
		else if (opcao == 3) {
			if (topo >= 0) {
				printf("Pagina atual: %d\n", pilha[topo]);
			}
			else {
				printf("Nenhuma pagina foi visitada ainda.\n");
			}
		}
		else if (opcao == 4) {
			if (topo >= 0) {
				printf("Historico de navegação: ");
				for (i = 0; i < 10; i++) {
					if (pilha[i] != 0) {
						printf("%d\n", pilha[i]);
					}
				}
			}
		else {
			printf("Historico Vazio!\n");
		}
	}
		else if (opcao == 0) {
			printf("Saindo...\n");
		}
		else {
			printf("Opção Invalida!\n");
		}
	} while (opcao != 0);

	return 0;
}


5 - Lista de Chamadas em Sala de Aula
Um professor faz a chamada de alunos em ordem, mas pode inserir novos alunos ou retirar um que saiu do curso.
?	Crie um programa que utilize uma lista (vetor) para armazenar até 30 números de matrícula (inteiros).

?	O programa deve permitir:

1.	Inserir um aluno no fim da lista.

2.	Remover um aluno específico informando a matrícula.

3.	Exibir a lista completa.

4.	Contar quantos alunos ainda estão na lista.


#include <stdio.h>

int main() {
    int lista[30];
    int encontrado = 0;
    int qte = 0;
    int matricula;
    int opcao;
    int i;
    int j;

    do {

        printf("\n MENU \n");
        printf("** Escolha uma opção**\n");
        printf("1 - Inserir Aluno\n");
        printf("2 - Remover Aluno\n");
        printf("3 - Ver lista completa.\n");
        printf("4 - Contar Alunos.\n");
        printf("0 - Sair\n");
        scanf("%d", &opcao);

        if (opcao == 1) {
            if (qte < 30) {
                printf("\nDigite a matricula do aluno:");
                scanf("%d", &matricula);
                lista[qte] = matricula;
                qte++;
                printf("Matricula inserida!\n");
            }
            else {
                printf("Lista cheia... Não é possivel adicionar mais alunos!\n");
            }
        }
        else if (opcao == 2) {
            if (qte == 0) {
                printf("Lista Vazia. Nenhum aluno para remover!\n");
            }
            else {
                printf("Digite a matricula a ser removida: \n");
                scanf("%d", &matricula);


                for (i = 0; i < qte; i++) {
                    if (lista[i] == matricula) {
                        for (j = i; j < qte - 1; j++) {
                            lista[j] = lista[j + 1];
                        }
                        qte--;
                        encontrado = 1;
                        printf("Matricula Removida!\n");
                        break;
                    }
                }
                if (encontrado == 0) {
                    printf("Matricula encontrada!\n");
                }
            }
        }
        else if (opcao == 3) {
            if (qte == 0) {
                printf("Lista Vazia.\n");
            }
            else {
                printf("Lista de Matriculas: \n");
                for (i = 0; i < qte; i++) {
                    printf("%d\n”, lista[i]);
                }
            }
        }
        else if (opcao == 4) {
            printf("Total de alunos: %d\n", qte);
        }
        else if (opcao == 0) {
            printf("Encerrando...\n");
        }
        else {
            printf("Opção Invalida!\n");
        }
    } while (opcao != 0);

    return 0;
}
 
6 - Caixa de Supermercado (Fila + Cálculo)
Em um supermercado, os clientes entram na fila para pagar. Cada cliente é identificado por um número inteiro que representa o valor total da compra.
?	Use uma fila (vetor) para até 10 clientes.

?	O programa deve permitir:

1.	Inserir um novo cliente na fila (informando o valor da compra).

2.	Atender o próximo cliente e somar o valor ao total do caixa.

3.	Mostrar o próximo cliente a ser atendido.

4.	Exibir o total de dinheiro arrecadado até o momento.

#inc#include <stdio.h>

int main() {

	int fila[10];
	int inicio = 1;
	int fim = -1;
	int total = 0;
	int compra = 0
	int caixa = 0;
	int opcao;


	do {
		printf("\n**MENU CAIXA SUPERMERCADO**\n");
		printf("Escolha uma opção:\n");
		printf("1 - INSERIR CLIENTE\n");
		printf("2 - ATENDER CLIENTE\n");
		printf("3 - MOSTRAR PROXIMO CLIENTE\n");
		printf("4 - MOSTRAR TOTAL\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (fim +1) {
				printf("Fila cheia! Não é possivel inserir novo cliente!\n");
			}
			else {
				printf("DIGITE O VALOR DA COMPRA");
				scanf("%f", &compra);
				fila[fim] <- compra;
				printf(" CLIENTE INSERIDO COM O VALOR DE: %d\n", compra);
			}
		}
		else if (opcao == 2) {
			if (inicio == fim) {
				printf("FILA VAZIA! NENHUM CLIENTE PARA ATENDER!);
				
			}
			else {
				printf("Fila Vazia! Nenhum cliente para chamar!\n");
			}
		}
		else if (opcao == 3) {
			if (total > 0) {
				printf("Próximo Cliente: %d\n", fila[inicio]);
			}
			else {
				printf("Fila Vazia!");
			}
		}
		else if (opcao == 4) {
			if (total > 0) {
				printf("Fila de espera: \n");
				for (i = inicio; i <= fim; i++) {
					printf("%d\n", fila[i]);
				}
				printf("\n");
			}
			else {
				printf("Fila Vazia!");
			}
		}
		else if (opcao == 5) {
			printf("Senhas restantes: %d\n", 10 - total);
		}
		else if (opcao == 0) {
			printf("Saindo...\n");
		}
		else {
			printf("Opção Invalida!\n");
		}
	} while (opcao != 0);

	return 0;
}





