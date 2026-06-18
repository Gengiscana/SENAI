#include <stdio.h>
void main(){
	int nts;
	float media, nota;
	printf("Quantas notas o aluno tem?\n");
	scanf("%d", &nts);
	media = 0;
	for(int i = 1; i <= nts; i++){
		printf("Qual a nota?\n");
		scanf("%f", &nota);
		media = media + nota;
	}
	media = media/nts;
	if(media >= 7){
		printf("Aprovado, nota %.1f", media);
	}
	else{
		printf("Reprovado, nota %.1f", media);
	}
	getch();
}