#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int main() {
	int tabuleiro[9];
	int dado1, dado2, somadados;
	int somatabuleiro, jogada, somajogadas;
	int i;

	for (i = 0; i < 9; i++) {
		tabuleiro[i] = i + 1;
	}

	srand(time(NULL));

	dado1 = rand() % 6 + 1;
	dado2 = rand() % 6 + 1;
	printf("\n Dado 1: %d\n Dado 2: %d\n Soma dos dados:\n", dado1, dado2, somadados);
	
	while (1) {
		somatabuleiro = 0;
		printf("Números disponiveis:", tabuleiro);
		for (i = 0; i < 9; i++);{
			if (tabuleiro[i] != 0);{
				printf("%d", tabuleiro[i]);
				somatabuleiro += tabuleiro[i];
			}
		}
		if (somatabuleiro == 0);{
			printf("Parabens, vc ganhou!\n");
			break;
		}
	}
}

