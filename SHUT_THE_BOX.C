#include <stdio.h>
#include <stdlib.h>
#include <time.h>

int combinacao(int tabuleiro[], int usado[], int soma, int n, int atual) {
    if (atual == soma) return 1;
    if (atual > soma) return 0;

    for (int i = 0; i < n; i++) {
        if (!usado[i]) {
            usado[i] = 1;
            if (combinacao(tabuleiro, usado, soma, n, atual + tabuleiro[i])) {
                usado[i] = 0;
                return 1;
            }
            usado[i] = 0;
        }
    }
    return 0;
}
int main(){
    int dado1 = 0;
    int dado2 = 0;
    int somadados = 0;
    int tabuleiro [9] = {1,2,3,4,5,6,7,8,9};
    int usado [9] = {0};
    int jogada = 0;
    int valido = 0;
    int venceu = 0;
    int somajogador = 0;
    
srand(time(NULL));

printf("***** SHUT THE BOX *****");
  

    while (1) {
        venceu = 1;
        for (int i = 0; i < 9; i ++){
            if (usado[i] == 0){
                venceu = 0;
                break;
            }
        }
        if (venceu) {
            printf("\n#####SHUT THE BOX#####\n");
            break;
            }
    dado1 = rand() % 6 + 1;
    dado2 = rand() % 6 + 1;
    somadados = dado1 + dado2;
    somajogador = 0;

   
    printf("\n 🎲 ROLE OS DADOS 🎲");
    printf("\n Dado 1: %d", dado1);
    printf("\n Dado 2: %d", dado2);
    printf("\n Soma dos dados: %d", somadados);
    
    int copia[9];
        for (int i = 0; i < 9; i++) copia[i] = usado[i];
        if (!combinacao(tabuleiro, copia, somadados, 9, 0)) {
            printf("\n❌ Nenhuma jogada possível! FIM DE JOGO!\n");
            break;
        }
    
    while (somajogador < somadados) {
    
    printf("\n *TABULEIRO* \n");
    for (int i = 0; i < 9; i++) {
        if(usado[i] == 0)
        printf("%d ", tabuleiro[i]);
        else
        printf("%d✔ ", tabuleiro[i]);
    }
    printf("\n");
    
    printf("\nDigite um número para riscar (0 para cancelar a jogada): ");
    scanf("\n%d", &jogada);
    
    if (jogada == 0) {
        printf ("\n JOGADA CANCELADA! \nFIM DE JOGO!\n");
        return 0;
        }
        
    valido = 0;
    for (int i = 0; i < 9; i ++) {
        if (tabuleiro[i] == jogada && usado[i] == 0) {
            usado[i] = 1;
            somajogador += jogada;
            valido = 1;
            break;
        }
    }
    if (!valido) {
         printf("❌ NUMERO INVALIDO!\n");
            } 
            else if (somajogador > somadados) {
                printf("❌ A soma ultrapassou o valor dos dados!\n");
                return 0; 
            } 
            else if (somajogador == somadados) {
                printf("✅ Você completou a soma!\n");
                break; 
            }
        }
    }
return 0; 
}
    

