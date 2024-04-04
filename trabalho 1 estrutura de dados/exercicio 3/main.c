#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, a, b;
	char vetor[2][2];
	
	printf("Veja a tabela do jogo da velha: \n");
	printf("\n 0 | 1 | 2 |\n 3 | 4 | 5 |\n 6 | 7 | 8 |\n\nTais numeros possuem respectivas posicoes para colocar X e O para preencher o jogo da velha: \n\n");
	printf("vetor[0][0] = 0 \nvetor[0][1] = 1 \nvetor[0][2] = 2 \nvetor[1][0] = 3 \nvetor[1][1] = 4 \nvetor[1][2] = 5 \nvetor[2][0] = 6 \nvetor[2][1] = 7 \nvetor[2][2] = 8");
	
	for ( i=0; i<=8; i++ ) {
		if ((i%2)==0) {
			printf("\n\nVez de quem usa o X, digite 2 valores para a posicao do vetor[a][b] para o X: ");
			printf("\nValor 1 posicao [a]: ");
			scanf("%d", &a);
			printf("Valor 2 posicao [b]: ");
			scanf("%d", &b);
			vetor[a][b] = 'x';
		}else{
			printf("\n\nVez de quem usa o O, digite 2 valores para a posicao do vetor[a][b] para o O: ");
			printf("\nValor 1 posicao [a]: ");
			scanf("%d", &a);
			printf("Valor 2 posicao [b]: ");
			scanf("%d", &b);
			vetor[a][b] = 'o';
		}
	}
	
	for ( i=0; i<=2; i++ ) {
		printf("\n");
		for ( j=0; j<=2; j++ ){
			printf(" %c |", vetor[i][j]);
		}
	}
	
	return 0;
}