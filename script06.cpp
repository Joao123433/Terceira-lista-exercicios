#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 10, coluna = 3;
	int i, j, pesquisa[linha][coluna], quantIdade1525, quantFilhos1425;
	float somaSalario, quantSalario, mediaSalario, somaFilhos, quantFilhos, mediaFilhos, soma2030, quant2030, media2030;
	printf("1 - salario \n2 - idade \n3 - numero de filhos\n");
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			printf("Insira os dados da pesquisa: ");
			scanf("%d", &pesquisa[i][j]);
		}
	}
	
	for(i = 0; i < linha; i++) {
		for(j = 0; j < coluna; j++) {
			// A
			if(j == 0) {
				somaSalario += pesquisa[i][j];
				quantSalario++;
			}
			
			// B
			if(j == 2) {
				somaFilhos += pesquisa[i][j]; 
				quantFilhos++;
			}
			
			// C 
			if(j == 1) {
				if(pesquisa[i][j] > 15 && pesquisa[i][j] < 25) {
					quantIdade1525 += pesquisa[i][2];
				}
				
				// D
				if(pesquisa[i][j] > 20 && pesquisa[i][j] < 30) {
					soma2030 += pesquisa[i][0];
					quant2030++;
				}
			}
		}
	}
	
	mediaSalario = somaSalario / quantSalario;
	mediaFilhos = somaFilhos / quantFilhos;
	media2030 = soma2030 / quant2030;
	
	printf("\nA média de salário da população: %.2f", mediaSalario);
	printf("\nA média do número de filhos: %.2f", mediaFilhos);
	printf("\nA quantidade de filhos das pessoas que tem idade entre 15 a 25 anos: %d", quantIdade1525);
	printf("\nA média de salário de pessoas que tem idade entre 20 a 30 anos: %.2f", media2030);
	return 0;
}
