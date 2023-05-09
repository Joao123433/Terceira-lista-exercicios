#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 7, coluna = 10;
	int i, j, numeros[linha][coluna], soma[coluna];
	for(i = 0; i < 6; i++) {
		for(j = 0; j < coluna; j++) {
			printf("Insira os numeros: ");
			scanf("%d", &numeros[i][j]);
			soma[j] = 0;
		}
	}
	
	
	for(i = 0; i < 6; i++) {
		for(j = 0; j < coluna; j++) {
			soma[j] += numeros[i][j];
		}
	}
	
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			if(i < 6) {
				printf("%d ", numeros[i][j]);
			} else {
				printf("%d ", soma[j]);
			}
		}
		printf("\n");
	}
	return 0;
}
