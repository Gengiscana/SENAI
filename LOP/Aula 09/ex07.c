#include <stdio.h>

void main() {
    int respostas, p;
    char continuar;

    do {
        respostas = 0;

        printf("\n--- Analise do Suspeito ---\n");
        printf("Responda com 1 para SIM e 0 para NAO.\n");

        printf("Telefonou para a vitima? ");
        scanf("%d", &p);
        respostas += p;

        printf("Esteve no local do crime? ");
        scanf("%d", &p);
        respostas += p;

        printf("Mora perto da vitima? ");
        scanf("%d", &p);
        respostas += p;

        printf("Devia para a vitima? ");
        scanf("%d", &p);
        respostas += p;

        printf("Ja trabalhou com a vitima? ");
        scanf("%d", &p);
        respostas += p;

        printf("\nClassificacao: ");

        if (respostas == 2) {
            printf("Suspeita\n");
        }
        else if (respostas >= 3 && respostas <= 4) {
            printf("Cumplice\n");
        }
        else if (respostas == 5) {
            printf("Assassino\n");
        }
        else {
            printf("Inocente\n");
        }

        printf("\nHa mais algum suspeito? (s/n): ");
        scanf(" %c", &continuar);

    } while (continuar == 's' || continuar == 'S');

    printf("\nEncerrando investigacao...\n");

}