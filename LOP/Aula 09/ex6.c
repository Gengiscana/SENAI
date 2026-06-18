#include <stdio.h>
void main(){
	int lata;
	float galao, area;
	printf("Quantos metros quadrados serão pintados?");
	scanf("%f", &area);
	lata = area/18;
	galao = area/3.6;
	
	if(area%18 > 0){
		lata = lata + 1;
	}
	if(area%3.6 > 0){
		galao = galao + 1;
	}
	
	printf("%d", galao);
}