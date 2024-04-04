#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	
	int i, j, n, a, b, c, x, matriz[9][9];
	
	for ( i=0; i<=9; i++ ){
		for ( j=0; j<=9; j++ ){
			printf("escreva o valor da matriz[%d][%d]: ", i, j);
			scanf("%d", &matriz[i][j]);
		}
	}
	
	n = 0;
	for ( i=0; i<=9; i++ ){
		printf("\n");
		for ( j=0; j<=9; j++ ){
			printf("%d ", matriz[i][j]);
		}
	}
	
	x = 0;
	for ( i=0; i<=9; i++ ){
		for ( j=0; j<=9; j++ ){
			if((matriz[i][j]) >= x ) {
				
				
				x = matriz[i][j];
				a = i;
				b = j;
				c = matriz[i][j];
				
			}
		}
	}
	
	printf("\n\nO maior valor localizado foi %d sendo da matriz[%d][%d].", c, a, b);
	
	
	return 0;
}