#include <stdio.h>
void main(){
	float preco, total, des;
	int qtd;
	total = 0;
	char resp, resp2;
	printf("Qual o preço?\n");
	scanf("%f", &preco);
	printf("Qual a quantidade?\n");
	scanf("%d", &qtd);
	total = total + preco * qtd;
	printf("Mais alguma coisa? s/n\n");
	scanf(" %c", &resp);
	while(resp == 's'){
			printf("Qual o preço?\n");
			scanf("%f", &preco);
			printf("Qual a quantidade?\n");
			scanf("%d", &qtd);
			total = total + preco * qtd;
			printf("Mais alguma coisa? s/n\n");
			scanf(" %c", &resp);
		}
	if(resp == 'n'){
		printf("Há desconto?\n");
		scanf(" %c", &resp2);
		if(resp2 == 's'){
			printf("Quantos porcentos de desconto?\n");
			scanf("%f", &des);
			total = total - total * (des/100);
			printf("Total: R$%.2f\nVolte sempre!", total);
		}
		else if(resp2 == 'n'){
			printf("Total: R$%.2f\nVolte sempre!", total);
		}
	}
}