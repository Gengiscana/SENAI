#include <stdio.h>
void main(){
	char turno;
	char aluno [100];
	printf("Qual seu nome?\n");
	scanf("%[^\n]", aluno);
	printf("Qual o seu turno?\n");
	printf("M = matutino\n");
	printf("V = vespertino\n");
	printf("N = noturno\n");
	scanf(" %c", &turno);
	if(turno == 'M'){
		printf("Bom dia, %s", aluno);
	}
	else if(turno == 'V'){
		printf("Boa tarde, %s", aluno);
	}
	else if(turno == 'N'){
		printf("Boa noite, %s", aluno);
	}
	else{
		printf("Turno inválido");
	}
	getch();
}