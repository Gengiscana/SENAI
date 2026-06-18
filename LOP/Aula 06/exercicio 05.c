#include <stdio.h>
#include <string.h>
void main(){
	float sal, ajuste;
	char sabe[100];
	char resp;
	char burro[100];
	printf("Sabe seu salário?\n");
	scanf(" %s", sabe);
	if(strcmp(sabe, "nao")==0){
		printf("animal do carai");
		return;
	}
	else if(strcmp(sabe, "sim")==0){
		printf("Qual é?\n");
		scanf(" %[^\n]", burro);
		if(strcmp(burro, "nao sei")==0){
			printf("Puta que pariu\n");
			return;
		}
		sscanf(burro, "%f", &sal);
	}
	printf("Aumento? s pra sim e n pra não\n");
	scanf(" %c", &resp);
	if(resp == 's' && sal > 1800){
		ajuste = sal + sal * 10 / 100;
		printf("Seu novo salário é %.2f", ajuste);
	}
	else if(resp == 's' && sal <= 1800){
		ajuste = sal + sal * 15 / 100;
		printf("Seu novo salário é %.2f", ajuste);
	}
	else if(resp == 'n' && sal > 1800){
		ajuste = sal - sal * 10 / 100;
		printf("Seu novo salário é %.2f", ajuste);
	}
	else if(resp == 'n' && sal <= 1800){
		ajuste = sal - sal * 15 / 100;
		printf("Seu novo salário é %.2f", ajuste);
	}
	getch();
}