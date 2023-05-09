#include <stdio.h>
#include <locale.h>

int main() {
	setlocale(LC_ALL, "Portuguese");
	const int linha = 5, coluna = 4;
	int i, j, notas[linha][coluna], indiceMaiorMedia;
	char nomes[linha][50];
	float soma[linha], quant = coluna, media[linha], maiorMedia;
	for(i = 0; i < linha; i++) {
		printf("Insira o nome dos alunos: ");
		gets(nomes[i]);
		for(j = 0; j < coluna; j++) {
			printf("Insira as notas: ");
			scanf("%d", &notas[i][j]);
			fflush(stdin);
		}
	}
	
	for(i = 0; i < linha; i++) {
		media[i] = 0;
		for(j = 0; j < coluna; j++) {
			soma[i] += notas[i][j];
		}
		media[i] = soma[i] / quant;
		
		if(media[i] > maiorMedia) {
			maiorMedia = media[i];
			indiceMaiorMedia = i;
		}
	}
	
	printf("\n\nMaior media: %.2f - Aluno: %s", maiorMedia, nomes[indiceMaiorMedia]);
	for(i = 0; i < linha; i++) {
		printf("\nNome: %s - Media: %.2f", nomes[i], media[i]);
	}
	return 0;
}
