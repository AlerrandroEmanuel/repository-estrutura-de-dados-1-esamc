#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

int main(int argc, char *argv[]) {
	int i, n, x;
	printf("digite o tamanho do seu vetor:");
	scanf("%d", &n);
	
	int vetor[n];
	printf("digite o numero de cada vetor: \n");
	for(i=0; i<=(n-1); i++){
		printf("vetor[%d] - valor:", i);
		scanf("%d", &vetor[i]);
	}
	
	for(i=0; i<=n; i++){
		if(vetor[i] < vetor[i+1]){
			x=1;
		}else{
			x=0;
			break;
		}
	}
	
	if(x){
		printf("\nO vetor foi colocado de forma ordenada :)");
	}else{
		printf("\nO vetor nao esta ordenado :(");
	}
	return 0;
}