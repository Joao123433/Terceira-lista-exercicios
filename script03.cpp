#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 5, coluna = 3;
	int i, j, vendas[linha][coluna], totalCadaVendedor[linha], totalVendas, maiorVendaMes01, menorVendaMes03;
	char nomes[linha][30];
	
	for(i = 0; i < linha; i++) {
		printf("Insira o nome do vendedor: ");
		gets(nomes[i]);
		for(j = 0; j < coluna; j++) {
			printf("Quanto o vendedor vendeu: ");
			scanf("%d", &vendas[i][j]);
			fflush(stdin);
		}
	}
	
	
	for(i = 0; i < linha; i++) {
		totalCadaVendedor[i] = 0;
		for(j = 0; j < coluna; j++) {
			totalCadaVendedor[i] += vendas[i][j];
			
			if(j == 0) {
				if(vendas[i][j] > maiorVendaMes01) {
					maiorVendaMes01 = vendas[i][j];
				}
			}
			
			if(j == 2) {
				if(i == 0) {
					menorVendaMes03 = vendas[i][j];
				} else if(vendas[i][j] < menorVendaMes03) {
					menorVendaMes03 = vendas[i][j];
				}
			}
			
			totalVendas += vendas[i][j];
		}
		printf("\n\n");
	}
	
	for(i = 0; i < linha; i++) {
		printf("\nVendedor %s - Total vendido: %d", nomes[i], totalCadaVendedor[i]);
	}
	printf("\nA maior venda do mês 1: %d", maiorVendaMes01);
	printf("\nA menor venda do mês 3: %d", menorVendaMes03);
	printf("\nO total vendido por mêsde todos os vendedores: %d", totalVendas);
	return 0;
}
