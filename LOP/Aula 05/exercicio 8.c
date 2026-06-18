#include <stdio.h>
void main(){
	float dia, alt, area, vol, raio;
	printf("Informe o diâmetro\n");
	scanf("%f",&dia);
	printf("Informe a altura\n");
	scanf("%f",&alt);
	raio = dia/2;
	vol = 3,14 * (raio*raio) * alt;
	area = 2 * 3,14 * raio * (alt + raio);
	printf("A área e o volume de um cilindro são respectivamente %.2f e %.2f", area, vol);
}