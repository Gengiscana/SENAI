#include <stdio.h>
void main(){
	float v, d, t, m;
	int minutos, horas;
	printf("Digite a velocidade e a distância\n");
	scanf("%f %f", &v, &d);
	t = d/v;
	m = 60*t;
	horas = t;
	minutos = (t - horas) * 60;
	if (t < 1){
		printf("Você levará %.0f minutos para percorrer está distância\n", m);
	}
	else if (minutos == 0){
		printf("Você levará %f horas para percorrer está distância", t);
	}
	else{
		printf("Você levará %d horas %d minutos para percorrer está distância", horas, minutos);
	}
	getch();
}