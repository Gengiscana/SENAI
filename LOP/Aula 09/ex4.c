#include <stdio.h>
#include <string.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(65001);
	float sal, ir, inss, sind, liq;
	char perg[10];
	ir = 0.11;
	inss = 0.08;
	sind = 0.05;
	printf("Quer saber seu salario?\n");
	scanf("%s", perg);
	if(strncasecmp(perg, "nao", 3)==0){
		printf("Vai toma no seu cu desgraçado");
		getch();
		return;
	}
	else if(strncasecmp(perg, "sim", 3)== 0){
		printf("Qual seu salario bruto?\n");
		scanf("%f", &sal);
		liq = sal - (sal * ir + sal * inss + sal * sind);
		ir = sal*ir;
		inss=inss*sal;
		sind=sind*sal;
		printf("Seu salario liquido é %.2f\nPagou R$%.2f de INSS.\nPagou R$%.2f de IR.\nPagou R$%.2f pro Sindicato.", liq, inss, ir, sind);
		getch();
		return;
	}
}