●	Escrever um algoritmo que leia uma matriz[3][3] de inteiros e calcule e escreva a soma de todos os elementos da matriz.

#include <stdio.h>

int main() {
	int matriz[3][3];
	int i, x, soma = 0;
	printf("Digite os elementos da matriz 3x3:\n");
	for (i = 0; i < 3; i++) {
    	for (x = 0; x < 3; x++) {
        	printf("Elemento[%d][%d]: ", i, x);
        	scanf("%d", &matriz[i][x]);
        	soma = soma + matriz[i][x];
    	}
	}
	printf("\nMatriz digitada:\n");
	for (i = 0; i < 3; i++) {
    	for (x = 0; x < 3; x++) {
        	printf("%d\t", matriz[i][x]);
    	}
    	printf("\n");
	}
	printf("\nSoma de todos os elementos: %d\n", soma);
}
 
●	Escrever um algoritmo que leia uma matriz[3][3] de inteiros e calcule e escreva a soma dos elementos da coluna 2 da matriz.
 #include <stdio.h>

int main() {
    int matriz[3][3];
    int i, x, soma = 0;
    printf("Digite os elementos da matriz 3x3:\n");
    for (i = 0; i < 3; i++) {
   	 for (x = 0; x < 3; x++) {
   		 printf("Elemento[%d][%d]: ", i, x);
   		 scanf("%d", &matriz[i][x]);
   	 }
    }
    for (i = 0; i < 3; i++) {
   	 soma = soma + matriz[i][1];
    }
    printf("\nSoma dos elementos da coluna 2: %d\n", soma);
}

●	Escrever um algoritmo que leia uma matriz[5][5] e efetue as somas indicadas, escrevendo-as:
a) soma dos elementos da linha 3
b) soma dos elementos da coluna 4
c) soma dos elementos de toda a matriz

#include <stdio.h>

int main() {
    int matriz[5][5];
    int i, x;
    int somatotal = 0;
    int somalinha3 = 0;
    int somacoluna4 = 0;
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
   	 for (x = 0; x < 5; x++) {
   		 printf("Elemento[%d][%d]: ", i, x);
   		 scanf("%d", &matriz[i][x]);
   		 somatotal = somatotal + matriz[i][x];
   	 }
    }
    for (i = 0; i < 5; i++) {
   	 somacoluna4 = somacoluna4 + matriz[i][3];
   	 }
    for (x = 0; x < 5; x++) {
   	 somalinha3 = somalinha3 + matriz[2][x];
   	 }
    printf("\nMatriz digitada:\n");
    for (i = 0; i < 5; i++) {
   	 for (x = 0; x < 5; x++) {
   		 printf("%d\t", matriz[i][x]);
   	 }
   	 printf("\n");
    }
    printf("\nSoma dos elementos da linha 3: %d\n", somalinha3);
    printf("\nSoma dos elementos da coluna 4: %d\n", somacoluna4);
    printf("\nSoma de todos os elementos: %d\n", somatotal);
}





#include <stdio.h>

int main() {
    int matriz[5][5];
    int x, i;
    int somatotal = 0;
    int somacoluna1 = 0;
    int somacoluna2 = 0;
    int somacoluna3 = 0;
    int somacoluna4 = 0;
    int somacoluna5 = 0;
    printf("Digite os elementos da matriz 5x5:\n");
    for (i = 0; i < 5; i++) {
   	 for (x = 0; x < 5; x++) {
   		 printf("Elemento[%d][%d]: ", i, x);
   		 scanf("%d", &matriz[i][x]);
   		 somatotal = somatotal + matriz[i][x];
   	 }
    }
    for (i = 0; i < 5;i++) {
   	 somacoluna1 = somacoluna1 + matriz[i][0];
   	 }
    for (i = 0; i < 5; i++) {
   	 somacoluna2 = somacoluna2 + matriz[i][1];
   	 }
    for (i = 0; i < 5; i++) {
   	 somacoluna3 = somacoluna3 + matriz[i][2];
    }
    for (i = 0; i < 5; i++) {
   	 somacoluna4 = somacoluna4 + matriz[i][3];
    }
    for (i = 0; i < 5; i++) {
   	 somacoluna5 = somacoluna5 + matriz[i][4];
    }
    for (i = 0; i < 5; i++) {
   	 printf("\nMatriz digitada:\n");
   	 for (i = 0; i < 5; i++) {
   		 for (x = 0; x < 5; x++) {
   			 printf("%d\t", matriz[i][x]);
   		 }
   		 printf("\n");
   	 }
    }
    printf("%d, %d, %d, %d, %d,    ", somacoluna1, somacoluna2, somacoluna3, somacoluna4, somacoluna5);
    printf("\nSoma de todos os elementos: %d\n", somatotal);
}


