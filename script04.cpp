#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 4, coluna = 3;
	int i, j, numeros[linha][coluna], soma2E4Linha, iPrimo, primo, somaPrimo = 0, maiorNumero;
	float soma, quant, media;
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("Insira o numero: ");
			scanf("%d", &numeros[i][j]);
		}
	}
	
	
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("%d ", numeros[i][j]);
			
			if(i == 1 || i == 3) {
				soma2E4Linha += numeros[i][j];
			}
			
			primo = 0;
			for(iPrimo = 1; iPrimo <= numeros[i][j]; iPrimo++) {
				if(numeros[i][j] % iPrimo == 0) {
					primo++;
				}
			}
			if(primo == 2) {
				somaPrimo += numeros[i][j];
			}
			
			soma += numeros[i][j];
			quant++;
			
			if(numeros[i][j] > maiorNumero) {
				maiorNumero = numeros[i][j];
			}
		}
		printf("\n");
	}
	
	media = soma / quant;
	
	printf("\n\nA soma dos elementos que estão na 2ª e 4ª linhada matriz: %d", soma2E4Linha);
	printf("\nA soma dos números primos: %d", somaPrimo);
	printf("\nA média dos números da matriz: %.2f", media);
	printf("\nO maior número da matriz: %d", maiorNumero);
	return 0;
}
