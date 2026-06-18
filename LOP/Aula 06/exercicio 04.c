#include <stdio.h>
void main(){
	float a, b;
	printf("Me fale os numerais\n");
	scanf("%f %f", &a, &b);
	if(a > b){
		printf("%.2f é maior %.2f\n", a, b);
	}
	else if(b > a){
		printf("%.2f é maior %.2f\n", b, a);
	}
	else{
		printf("%.2f é igual a %.2f\n", a, b);
	}
	printf("Burro pra caralho");
}