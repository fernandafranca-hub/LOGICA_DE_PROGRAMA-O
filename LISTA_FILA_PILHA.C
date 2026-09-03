LISTA:
1 - Colocar 10 números de telefone em uma lista na ordem que o usuário quiser.
-	Criar um vetor de 10 posições;
-	A cada número colocado ele mostra o vetor com as posições que estão preenchidas e com as que estão disponíveis.
-	Permite que o usuário selecione em qual posição quer adicionar o número (pode ser qualquer posição)
-	Permite remover qualquer música da lista


#include <stdio.h>

int main() {
    int telefones[10] = {0};
    int numero;
    int opcao;
    int posicao;
    int i;
    
  while (1) {
  printf("\n** Lista Telefonica **\n");
      for (i = 0; i< 10; i++) {
        if (telefones[i] == 0)
          printf("[%d] - [------]\n", i);
        else
          printf("[%d] - %d\n", i, telefones[i]);
        }
      
      printf("\n MENU \n");
      printf("** Escolha uma opção**\n");
      printf("1 - Inserir contato\n");
      printf("2 - Remover contato\n");
      printf("0 - Sair\n");
      scanf("%d", &opcao);
      
      if (opcao == 1) {
          printf("\nDigite a posição de 0 a 9:");
          scanf("%d", &posicao);
          
          if (posicao < 0 || posicao >= 10) {
              printf(" Posição Invalida!\n");
          }
          printf("Digite o numero de telefone:\n");
          scanf("%d", &numero);
          
          telefones[posicao] = numero;
          
          printf("Contato adicionado!\n");
          
        }
      else if(opcao == 2) {
          printf("Digite a posição de 1 a 9 para remover:");
          scanf("%d", &posicao);
          
          if (posicao < 0 || posicao >= 10) {
              printf("Posição Invalida!\n");
        }
          if (telefones[posicao] == 0) {
              printf("Essa posição ja esta vazia!\n");
        }
          else {
              telefones[posicao] = 0;
              printf("Numero Removido!\n");
            }
        }
          else if (opcao == 0) {
              printf("Encerrando...\n");
              break;
        }
          else {
              printf ("Opção Invalida!\n");
            }
        }
      return 0;
  }
  
FILA
2 - Criar uma fila de senhas a serem chamadas no posto de saúde.
-	10 senhas (vetor de 1 posições)
-	Menu de gerar senha: pega o cpf e coloca na primeira posição disponível
-	Menu de chamar senha: retira o primeiro número da senha e realoca o restante dos ocupantes da fila
-	Menu ver próximo: mostra o próximo da fila a ser atendido
-	Menu ver lista: mostra todos os elementos da lista em ordem.
#include <stdio.h>

int main() {

	char fila[10][15];
	int i = 0;
	int j = 15;
	int qte = 0;
	int opcao = 0;


	do {
		printf("**MENU**\n");
		printf("Escolha uma opção:\n");
		printf("1 - Gerar senha\n");
		printf("2 - Chamar senha\n");
		printf("3 - Ver Próximo\n");
		printf("4 - Ver Lista\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (qte < 10) {
				printf("Digite o CPF\n");
				scanf("%s", fila[qte]);
				qte++;
				printf("Senha Gerada!\n");
			}
			else {
				printf("Fila cheia!\n");
			}
		}
		else if (opcao == 2) {
			if (qte > 0) {
				printf("Chamando o CPF: %s\n", fila[0]);
				for (int i = 1; i < qte; i++) {
					for (int j = 0; j < 15; j++) {
						fila[i - 1][j] = fila[i][j];
					}
				}
				qte--;
			}
			else {
				printf("Fila Vazia\n");
			}
		}
		else if (opcao == 3) {
			if (qte > 0) {
				printf("Próximo CPF: %s\n", fila[0]);
			}
			else {
				printf("Fila Vazia!");
			}
		}
		else if (opcao == 4) {
			if (qte > 0) {
				printf("CPFs na fila: \n");

				for (int i = 0; i < qte; i++) {
					printf("%d, %s\n", i + 1, fila[i]);
				}
			}
			else {
				printf("Fila Vazia!");
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


PILHA
3 - Criar um gerenciador de tarefas em pilha, onde a última tarefa colocada é a primeira a ser executada
-	vetor de 10 posições 
-	permitir inserir tarefas (podem ser números)
-	permitir ver o próximo elemento
-	permitir ver todos os elementos  
-	Permitir “riscar” tarefas (excluir)
#include <stdio.h>

int main() {

	int pilha[10];
	int topo = - 1;
	int opcao = 0;


	do {
		printf("**MENU**\n");
		printf("Escolha uma opção:\n");
		printf("1 - Inserir tarefa\n");
		printf("2 - Ver Próximo\n");
		printf("3 - Ver todas as tarefas\n");
		printf("4 - Riscar tarefa\n");
		printf("0 - Sair\n");
		scanf("%d", &opcao);

		if (opcao == 1) {
			if (topo < 9) {
				topo++;
				printf("Digite o numero da tarefa:\n");
				scanf("%d", &pilha[topo]);
				printf("Tarefa Adicionada!\n");
			}
			else {
				printf("Pilha cheia!\n");
			}
		}
		else if (opcao == 2) {
			if (topo >= 0) {
				printf("Próxima tarefa: %d\n", pilha[topo]);				
			}
			else {
				printf("Pilha Vazia\n");
			}
		}
		else if (opcao == 3) {
			if (topo >= 0) {
				printf("Tarefas na Pilha:\n");
				for (int i = topo; i >= 0; i--) {
					printf("%d\n", pilha[i]);
				}
			}
			else {
				printf("Pilha Vazia!");
			}
		}
		else if (opcao == 4) {
			if (topo >= 0) {
				printf("Tarefas Riscadas: %d\n", pilha[topo]);
				topo--;
			}
			else {
				printf("Pilha Vazia!");
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

