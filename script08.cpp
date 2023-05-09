#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 2, coluna = 6;
	int i, j, numeros[linha][coluna], maiorNumero, somaMultiplos3, media;
	float somaIndice1, quantIndice1, mediaIndice1, somaTotal, quantTotal, mediaTotal;
	for(i = 0; i < linha; i++) {
		for( j = 0; j < coluna; j++) {
			printf("Insira os numeros: ");
			scanf("%d", &numeros[i][j]);
		}
	}
	
	for(i = 0; i < linha; i++) {
		for( j = 0; j < coluna; j++) {
			if(numeros[i][j] > maiorNumero) {
				maiorNumero = numeros[i][j];
			}
			
			if(numeros[i][j] % 3 == 0) {
				somaMultiplos3 += numeros[i][j];
			}
			
			if(i == 1) {
				somaIndice1 += numeros[i][j];
				quantIndice1++;
			}
			
			somaTotal += numeros[i][j];
			quantTotal++; 
		}
	}
	
	mediaIndice1 = somaIndice1 / quantIndice1;
	mediaTotal = somaTotal / quantTotal;
	
	printf("\n\nMaior número da matriz: %d", maiorNumero);
	printf("\nSoma dos números múltiplos de 3 da matriz: %d", somaMultiplos3);
	printf("\nMédia dos números da segunda linha (índice 1): %.2f", mediaIndice1);
	printf("\nMédia dos números da matriz: %.2f\n\n", mediaTotal);
	
	for(i = 0; i < linha; i++) {
		for( j = 0; j < coluna; j++) {
			printf("%.1f ", numeros[i][j] * mediaTotal);
		}
		printf("\n");
	}
	return 0;
}
