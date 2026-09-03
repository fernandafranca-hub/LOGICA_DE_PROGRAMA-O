Exercícios de Vetores, Matriz e Funções
1. Função para encontrar o maior elemento
Escreva uma função que receba um vetor de inteiros e retorne o maior valor contido nele. O programa deve ler 10 números, armazená-los em um vetor e chamar a função para exibir o resultado.
#include <stdio.h>


int maiorvalor(int numero[], int maior){
   for(int i = 0; i < 10; i++){
      if(numero[i] > maior){
         maior = numero[i];
      } 
   }
   return maior;
}  
int main() {
    int numero[10];
    
    printf("Digite 10 numeros inteiros\n");
    for(int i = 0; i < 10; i++){
    printf("Numero %d:", i + 1);
    scanf("%d", &numero[i]);
    }
int maior = maiorvalor(numero, 10);
    printf("O maior numero digitado é: %d\n", maior);
    return 0;
}



2. Função de soma dos elementos
Crie uma função que receba um vetor de números reais e retorne a soma de todos os elementos. O programa deve preencher o vetor com 8 valores lidos do usuário.
#include <stdio.h>

float soma(float numero, float resultado){
   return resultado + numero;
}  
int main() {
   float numero[8];
   float resultado =0;
   
   
   for(int i = 0; i < 8; i ++){
       printf("Digite %dº numero inteiro:", i+1);
        scanf("%f", &numero[i]);
        resultado = soma(numero[i], resultado);
   }
        printf("\n O resultado da soma dos elementos é: %f\n", resultado);
        return 0;
}

3. Função de busca em vetor
Implemente uma função que receba um vetor e um número inteiro. A função deve retornar 1 se o número estiver presente no vetor e 0 caso contrário. Teste com um vetor de 15 posições.
#include <stdio.h>


int busca(int vetor[], int numero){
   for(int i = 0; i < 15; i++){
      if(vetor[i] == numero){
        return 1;
      } 
   }
   return 0;
}  
int main(){
    int vetor[15];
    int numero;
    
    printf("Digite 15 numeros inteiros\n");
    for(int i = 0; i < 15; i++){
        scanf("%d", &vetor[i]);
    }
    printf("Digite o numero para buscar:");
        scanf("%d", &numero);

    if(busca(vetor, numero)){
        printf("Numero encontrado no vetor");
    }
    else {
        printf("Numero não encontrado no vetor");
    }
    return 0;
}

4. Função de ordenação
Escreva uma função que receba um vetor de inteiros e o ordene em ordem crescente. O programa deve ler 12 números, exibir o vetor original e o vetor ordenado após chamar a função.
#include <stdio.h>

int maiornumero(int v[], int n) {
    int maior = v[0];
    for (int i = 1; i < n; i++) {
        if (v[i] > maior) {
            maior = v[i];
        }
    }
    return maior;
}

int main() {
    int numeros[12];

    printf("\nDigite 12 numeros inteiros e distintos\n");
    for (int i = 0; i < 12; i++) {
        printf("%dº numero: ", i + 1);
        scanf("%d", &numeros[i]);
    }

    printf("O maior numero e: %d\n", maiornumero(numeros, 12));

    return 0;
}

5. Média e acima da média
Crie uma função que calcule a média dos elementos de um vetor e outra função que mostre apenas os elementos maiores que a média. O programa deve trabalhar com um vetor de 10 números reais.

#include <stdio.h>

float media(float num[]) {
    float soma = 0;
    for (int i = 0; i < 10; i++) {
        soma += num[i];
    }
        float med = soma / 10;
    return  med;
}
void acimaMedia(float num[], float media) {
    printf("Numeros acima da media:\n");
    for (int i = 0; i < 10; i++) {
        if (num[i] > media) {
            printf("%.2f ", num[i]);
        }
    }
    printf("\n");
}

int main() {
    float vetor[10];
    int med = 0;

    printf("Digite 10 numeros inteiros:\n");
    for (int i = 0; i < 10; i++) {
        scanf("%f", &vetor[i]);
    }
    printf("Media: %.2f\n", media);

    acimaMedia(vetor, med);

    return 0;
}

6. Função de multiplicação de matrizes
Implemente uma função que receba duas matrizes 2x2 e retorne a matriz resultante da multiplicação entre elas.
void multimatriz(int A[2][2], int B[2][2]) {
    int i, j;
    float multi[2][2];
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            multi[i][j] = A[i][j] * B[i][j];
            printf("[%.0f] ", multi[i][j]);
        }
        printf("\n");
    }
    return;
}

#include <stdio.h>

int main() {
    int A[2][2], B[2][2];
    int i, j;

    printf("Digite os elementos da matriz A (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &A[i][j]);
        }
    }

    printf("Digite os elementos da matriz B (2x2):\n");
    for (i = 0; i < 2; i++) {
        for (j = 0; j < 2; j++) {
            scanf("%d", &B[i][j]);
        }
    }
    multimatriz(A, B);
}




7. Função de transposição de matriz
Escreva uma função que receba uma matriz 3x3 e retorne a sua transposta. O programa deve imprimir a matriz original e a matriz transposta. (matriz transposta quando invertemos as posições das linhas e das colunas nas matrizes)


#include <stdio.h>

void imprimeMatriz(int M[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            printf("%4d ", M[i][j]);
        }
        printf("\n");
    }
}

void transposta(int M[3][3], int T[3][3]) {
    int i, j;
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            T[j][i] = M[i][j];
        }
    }
}

int main() {
    int M[3][3];
    int T[3][3];
    int i, j;

    printf("Digite os elementos da matriz (3x3):\n");
    for (i = 0; i < 3; i++) {
        for (j = 0; j < 3; j++) {
            scanf("%d", &M[i][j]);
        }
    }

    printf("\nMatriz Original:\n");
    imprimeMatriz(M);

    transposta(M, T);
    printf("\nMatriz Transposta:\n");
    imprimeMatriz(T);

    return 0;
}



8. Função de soma de linhas
Crie uma função que receba uma matriz 4x4 e retorne um vetor contendo a soma de cada linha.


#include <stdio.h>

void somalinhas(int matriz[4][4], int linha[4]) {
    int i, j;
    for (i = 0; i < 4; i++) {
        linha[i] = 0;
        for (j = 0; j < 4; j++) {
            linha[i] += matriz[i][j];
           }
        }
   }


int main() {
    int matriz[4][4];
    int linha[4];
    int i;
    int j;

    printf("Digite os elementos da matriz(4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d ", &matriz[i][j]);
        }
    }
    printf("Matriz 4x4: \n");
    for(i = 0; i < 4; i ++){
        for(j = 0; j < 4; j ++) {
            printf("%4d" , matriz [i][j]);
        }
       printf("\n"); 
    }
    
    somalinhas(matriz, linha);
    
    printf("\nSoma de cada linha: \n");
    for(i = 0; i < 4; i ++) {
        printf("Linha %d: %d\n", i + 1, linha[i]);
    }
     
    return 0;
   
}







9. Função de maior elemento da matriz
Implemente uma função que receba uma matriz 5x5 e retorne o maior valor contido nela, junto com sua posição (linha e coluna).

#include <stdio.h>

int maiornumero(int matriz[5][5], int *linha, int *coluna) {
    int i, j;
    *linha = 0;
    *coluna = 0;
    int maior = matriz[0][0];
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            if (matriz[i][j] > maior) {
                maior = matriz [i][j];
                *linha = i;
                *coluna = j;
            }
        }
   }
   return maior;
}


int main() {
    int matriz[5][5];
    int i;
    int j;
    int linha;
    int coluna;

    printf("Digite os elementos da matriz(5x5):\n");
    for (i = 0; i < 5; i++) {
        for (j = 0; j < 5; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz 5x5: \n");
    for(i = 0; i < 5; i ++){
        for(j = 0; j < 5; j ++) {
            printf("%4d" , matriz [i][j]);
        }
       printf("\n"); 
    }
    
    int maior = maiornumero(matriz, &linha, &coluna);
    printf("\n O maior numero da matriz é: %d\n", maior);
    printf("\n O maior esta na linha %d e coluna %d\n", linha +1, coluna + 1);
    
    return 0;
   
}
10. Função de diagonal principal
Crie uma função que receba uma matriz quadrada de ordem 4 e exiba a soma dos elementos da sua diagonal..
#include <stdio.h>

int somadiagonal(int matriz[4][4]) {
    int i;
    int soma = 0;
    
   for (i = 0; i < 4; i++) {
        soma += matriz [i][i];
      
   }
   return soma;
}


int main() {
    int matriz[4][4];
    int i;
    int j;
   
    printf("Digite os elementos da matriz(4x4):\n");
    for (i = 0; i < 4; i++) {
        for (j = 0; j < 4; j++) {
            scanf("%d", &matriz[i][j]);
        }
    }
    printf("Matriz 4x4: \n");
    for(i = 0; i < 4; i ++){
        for(j = 0; j < 4; j ++) {
            printf("%4d" , matriz [i][j]);
        }
       printf("\n"); 
    }
    
    int soma = somadiagonal(matriz);
    printf("\n A soma dos elementos da diagonal principal é: %d\n", soma);
    
    return 0;
   
}

