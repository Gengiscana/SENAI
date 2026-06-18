#include<stdio.h>
void main(){
	float a, b, c, res;
	printf("Insira o valor de A\n");
	scanf("%f",&a);
	printf("Insira o valor de B\n");
	scanf("%f",&b);
	printf("Insira o valor de C\n");
	scanf("%f",&c);
	res = (a+b)/c;
	printf("(%f + %f)/%f é %f", a, b, c, res);
	getch();
}