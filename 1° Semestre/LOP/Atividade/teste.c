#include <stdio.h>
void main(){
	int num, res, p = 0;
	printf("Digite um numero inteiro\n");
	scanf("%d", &num);
	res = num;
	while(res != 1){
		printf("%d -> ", res);
		if(res % 2 == 0){
			res=res/2;
		}
		else{
			res=res*3+1;
		}
		p = p + 1;
	}
	printf("1\n");
	printf("%d passos", p);
}