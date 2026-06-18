#include <stdio.h>
void main(){
	float n1, n2, n3, med;
	printf("Quais foram as suas notas?\n");
	scanf("%f %f %f", &n1, &n2, &n3);
	med = (n1+n2+n3)/3;
	if(med >= 7){
		printf("Aprovado, sua média foi %.1f", med);
	}
	else if(med >= 5 && med < 7){
		printf("Recuperação, sua média foi %.1f", med);
	}
	else{
		printf("Reprovado, sua média foi %.1f", med);
	}
	getch();
}