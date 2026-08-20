#include <stdio.h>
#include <windows.h>
void main(){
	SetConsoleOutputCP(CP_UTF8);
	for(int x = 0; x <= 10; x++){
		for(int y = 1; y <= 10; y++){
			printf("%d x %d = %d\t", x, y, x*y);
		}
		printf("\n");
	}
	getch();
}