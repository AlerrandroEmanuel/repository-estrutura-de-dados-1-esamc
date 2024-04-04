#include <stdio.h>
#include <stdlib.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

void ChangeValue(int *x, int *y){
	
	int z = 0;
	
	z = *x;
	*x = *y;
	*y = z;

}

int main(int argc, char *argv[]) {
	
	int a, b;
	
	printf("Coloque o valor de a: ");
	scanf("%d", &a);
	
	printf("Coloque o valor de b: ");
	scanf("%d", &b);
	
	printf("\nvalor antes do ponteiro:");
	printf("\nValor a = %d \nValor b = %d", a,b);
	
	ChangeValue(&a, &b);
	
	printf("\n\nvalor depois do ponteiro:");
	printf("\nValor a = %d \nValor b = %d", a,b);
	
	return 0;
}