#include <stdio.h>
#include <windows.h>
int ordem(){
	
}
void main(){
	SetConsoleOutputCP(CP_UTF8);
	int qnt;
	printf("Quantos números vai ter?\n");
	scanf("%d", &qnt);
	int nums[qnt];
	printf("Quais são?\n");
	for(int i = 0; i < qnt; i++){
		scanf("%d", &nums[i]);
	}
}