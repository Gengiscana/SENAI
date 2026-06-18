#include <stdio.h>
void main(){
	float a, b ,c;
	printf("Insira um número diferente de 0 e maior que 0\n");
	scanf("%f",&a);
	if (a <= 0){
		printf("Número invalido");
	} 
	else{
	b = a + 1;
	c = a - 1;
	printf("%.0f+1 e %.0f-1 é respectivamente\n%.0f e %.0f", a, a, b, c);
	}
	getch();
}