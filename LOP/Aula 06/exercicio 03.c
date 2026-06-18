#include <stdio.h>
void main (){
	int provas, notas, media;
	printf("Quantas provas tu fez?\n");
	scanf("%d", &provas);
	printf("Qual foi sua nota total somando todas essas provas?\n");
	scanf("%d", &notas);
	media = notas/provas;
	if(media >= 7){
		printf("Parabéns, você passou!");
	}
	else{
		printf("Muito burro kkkkkkkkk");
	}
	getch();
}