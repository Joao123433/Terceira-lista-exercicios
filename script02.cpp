#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 4, coluna = 6;
	int i, j, quantEntre1030, somaParesMaior10, somaQuartaColuna;
	int numeros[linha][coluna];
	float soma, quant, mediaTerceiraLinha;
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("Insira os numeros: ");
			scanf("%d", &numeros[i][j]);
		}
	}
	
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("%d ", numeros[i][j]);
			if(numeros[i][j] >= 10 && numeros[i][j] <= 30) {
				quantEntre1030++;
			}
			
			if(numeros[i][j] % 2 == 0 && numeros[i][j] > 10) {
				somaParesMaior10 += numeros[i][j];
			}	
			
			if(j == 3) {
				somaQuartaColuna += numeros[i][j];
			}
			
			if(i == 2) {
				soma += numeros[i][j];
				quant++;
			}
		}
		printf("\n");
	}
	
	mediaTerceiraLinha = soma / quant;
	
	printf("\n\nA quantidade de números que estão no intervalo entre 10 e 30: %d", quantEntre1030);
	printf("\nA soma dos números maiores que 10 e pares: %d", somaParesMaior10);
	printf("\nA soma dos números que estão na quarta coluna da matriz: %d", somaQuartaColuna);
	printf("\nA média dos números da matriz que estão na terceira linha: %.2f", mediaTerceiraLinha);
	return 0;
}
