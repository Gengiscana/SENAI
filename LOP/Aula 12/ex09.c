#include <stdio.h>
#include<windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int n[3], m[3];
	for(int i = 0; i <= 2; i++){
		printf("Digite o %d° número:\n", i + 1);
		scanf("%d", &n[i]);
	}
	for(int e = 0; e <= 2; e++){
		printf("Digite o %d° número:\n", e + 1);
		scanf("%d", &m[e]);
	}
	for(int j = 2; j >= 0; j--){
		printf("%d %d ", n[j], m[j]);
	}
	getch();
}