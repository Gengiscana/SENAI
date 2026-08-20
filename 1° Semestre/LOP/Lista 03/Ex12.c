#include <stdio.h>
void main(){
	printf("Entre 0 e 100 há os seguintes numeros:\n");
	getch();
	for(int i = 1; i < 100; i++){
		printf("%d\n", i);
	}
	getch();
}