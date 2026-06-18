#include <stdio.h>

void main() {
    char cidade[50];
    int eleitores, votos;
    float porcentagem;

    printf("Digite o nome da cidade: ");
    scanf("%49s", cidade);

    printf("Digite o total de eleitores: ");
    scanf("%d", &eleitores);

    printf("Digite o total de votos apurados: ");
    scanf("%d", &votos);

    porcentagem = ((float)votos / eleitores) * 100;

    printf("\nCidade: %s\n", cidade);
    printf("Participacao na eleicao: %.2f%%\n", porcentagem);
}
