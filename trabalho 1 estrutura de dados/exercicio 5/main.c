#include <stdio.h>
#include <stdlib.h>
#include <string.h>

/* run this program using the console pauser or add your own getch, system("pause") or input loop */

struct MusicBand {
		
	char NameBand[40];
	char TypeofMusic[30];
	int NumberofMembers;
	int UrRankPosition;
		
};

int main(int argc, char *argv[] ) {
	
	struct MusicBand band;
	
	strcpy(band.NameBand, "Twice");
	strcpy(band.TypeofMusic, "K-POP");
	band.NumberofMembers = 9;
	band.UrRankPosition = 2;
	
	printf("Nome da banda: %s \n", band.NameBand);
	printf("Tipo de Musica: %s \n", band.TypeofMusic);
	printf("Membros da banda: %d \n", band.NumberofMembers);
	printf("Posicao dentre os 5 favoritos: %d", band.UrRankPosition);
	
	/*tipo eu preenchi ela automatico com a minha preferencia mas tambem da para colocar para uma pessoa preencher e aparecer
	
	printf("Qual o nome da banda: ");
	scanf("%s", band.NameBand);
	
	printf("Tipo de música que a banda toca: ");
	scanf("%s", band.TypeofMusic);
	
	printf("Quanto membros a banda tem: ");
	scanf("%d", &band.NumberofMembers);
	
	printf("Qual a posicao dessa banda entre os 5: ");
	scanf("%d", &band.UrRankPosition);
	
	*/
	
	return 0;
}