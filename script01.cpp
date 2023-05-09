#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 3, coluna = 5;
	int i, j;
	int numeros[linha][coluna], menorNumero, somaMultiplos3, maiorNumero;
	float soma, quant, media;
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("Insira os numeros: ");
			scanf("%d", &numeros[i][j]);
		}
	}
	
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			// calculo do menor numero da matriz
			if(i  == 0 && j == 0) {
				menorNumero = numeros[i][j];
			} else if(numeros[i][j] < menorNumero) {
				menorNumero = numeros[i][j];
			}
			
			// soma dos numeros multiplos de 3
			if(numeros[i][j] % 3 == 0) {
				somaMultiplos3 += numeros[i][j];
			}
			
			// maior numero da terceira coluna da matriz(indice 2)
			if(j == 2) {
				if(numeros[i][j] > maiorNumero) {
					maiorNumero = numeros[i][j];
				}
			}
			
			soma += numeros[i][j];
			quant = linha * coluna;
		}
	}
	
	media = soma / quant;
	
	printf("\n\nMenor n�mero da matriz: %d", menorNumero);
	printf("\nSoma dos n�meros m�ltiplos de 3 da matriz: %d", somaMultiplos3);
	printf("\nMaior n�mero da 3�coluna da matriz (�ndice 2): %d", maiorNumero);
	printf("\nM�dia dos n�meros da matriz: %.2f", media);
	return 0;
}
