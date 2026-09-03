#include <stdio.h>
#include <string.h>
#include <ctype.h>

int main() {
	char palavraSecreta[] = "cadilac";  
	int tamanho = strlen(palavraSecreta);
	char letra;
	int erros = 0;
	int acertos = 0;
	int i;
	char letrasUsadas[26];
	int letrasUsadasIndex = 0;

	char palavraOculta[tamanho + 1];

	for (i = 0; i < tamanho; i++) {
    	palavraOculta[i] = '_';
	}
	palavraOculta[tamanho] = '\0';

	printf("🕹️ JOGO DA FORCA\n");
	printf("Adivinhe a palavra com %d letras.\n", tamanho);

	while (erros < 6 && acertos < tamanho) {
    	printf("\nPalavra: ");
    	for (i = 0; i < tamanho; i++) {
        	printf("%c ", palavraOculta[i]);
    	}

    	printf("\n\nDigite uma letra: ");
    	scanf(" %c", &letra);
    	letra = tolower(letra);  // Converte para minúscula

    	// Verifica se a letra já foi usada
    	int repetida = 0;
    	for (i = 0; i < letrasUsadasIndex; i++) {
        	if (letrasUsadas[i] == letra) {
            	repetida = 1;
            	break;
        	}
    	}

    	if (repetida) {
        	printf("Você já usou essa letra. Tente outra.\n");
        	continue;
    	}

    	letrasUsadas[letrasUsadasIndex++] = letra;

    	int acertouLetra = 0;
    	for (i = 0; i < tamanho; i++) {
        	if (palavraSecreta[i] == letra && palavraOculta[i] == '_') {
            	palavraOculta[i] = letra;
            	acertos++;
            	acertouLetra = 1;
        	}
    	}

    	if (!acertouLetra) {
        	erros++;
        	printf("Letra incorreta! Você cometeu %d erro(s).\n", erros);
    	}
	}

	if (acertos == tamanho) {
    	printf("\n🎉 Parabéns! Você acertou a palavra: %s\n", palavraSecreta);
	} else {
    	printf("\n💀 Você perdeu! A palavra era: %s\n", palavraSecreta);
	}

	return 0;
}


