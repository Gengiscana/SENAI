#include <stdio.h>
void main(){
	int a, b, c;
	printf("Digite três números inteiros\n");
	scanf("%d %d %d", &a, &b, &c);
	if(a > b && a > c){
		printf("%d é o maior número", a);
	}
	else if(b > a && b > c){
		printf("%d é o maior número", b);
	}
	else if(c > a && c > b){
		printf("%d é o maior número", c);
	}
	else if(a == b && a > c){
		printf("%d e %d tem o mesmo valor e são os maiores", a, b);
	}
	else if(a == c && a > b){
		printf("%d e %d tem o mesmo valor e são os maiores", a, c);
	}
	else if(b == c && b > a){
		printf("%d e %d tem o mesmo valor e são os maiores", b, c);
	}
	else{
		printf("Todos tem o mesmo valor");
	}
	getch();
}