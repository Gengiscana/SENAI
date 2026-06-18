#include <stdio.h>
void main(){
	int cami, alqu, viagens, quebrados;
	printf("Quantos caminhões há?\n");
	scanf("%d",&cami);
	printf("Quantos alqueires há?\n");
	scanf("%d",&alqu);
	viagens = (alqu * 250) / (cami * 18);
	quebrados = (alqu * 250) % (cami * 18);
	if (quebrados != 0){
		viagens = viagens + 1;
		printf("Vai ser um total de %d viagens", viagens);
	}
	getch();
}