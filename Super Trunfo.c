#include <stdio.h>



int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    char estado[3], codigo[4], nome[50], estado2[3], codigo2[4], nome2[50];
    int populacao, pontos_turisticos, populacao2, pontos_turisticos2;
    float area, area2;
    double pib, pib2;

    
    // Lógica para solicitar ao usuário que insira os dados das cidades
    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo);
    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao);
    printf("Digite a área em km² da primeira da cidade: ");
    scanf("%f", &area);
    printf("Digite o PIB em bilhões da primeira da cidade: ");
    scanf("%lf", &pib);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("\n\nDigite o código da segunda cidade: ");
    scanf("%s", codigo2);
    printf("Digite o estado da segunda cidade: ");
    scanf("%s", estado2);
    printf("Digite o nome da segunda cidade: ");
    scanf("%s", nome2);
    printf("Digite a população da segunda cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km² da segunda da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões da segunda da cidade: ");
    scanf("%lf", &pib2);
    printf("Digite a quantidade de pontos turísticos da segunda cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Caculando outros dados
    float densidade = (float)populacao / area, densidade2 = (float)populacao2 / area2, pibperc = (pib * 1e9) / (float)populacao, pibperc2 = (pib2 * 1e9) / (float)populacao2;

    // Imprimindo dados armazenados
    printf("\n\nCarta 1:\n");
    printf("Código: %s\n", codigo);
    printf("Estado: %s\n", estado);
    printf("Nome da Cidade: %s\n", nome);
    printf("População: %d\n", populacao);
    printf("Área: %.2f km²\n", area);
    printf("PIB: %.2lf bilhões de reais\n", pib);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos);
    printf("Densidade populacional: %.2f hab/km²\n", densidade);
    printf("PIB per capita: R$%.2f ", pibperc);

    printf("\n\nCarta 2:\n");
    printf("Código: %s\n", codigo2);
    printf("Estado: %s\n", estado2);
    printf("Nome da Cidade: %s\n", nome2);
    printf("População: %d\n", populacao2);
    printf("Área: %.2f km²\n", area2);
    printf("PIB: %.2lf bilhões de reais\n", pib2);
    printf("Número de Pontos Turísticos: %d\n", pontos_turisticos2);
    printf("Densidade populacional: %.2f hab/km²\n", densidade2);
    printf("PIB per capita: R$%.2f \n", pibperc2);

    // Comparando atributos das cartas e declarando a vencedora
    printf("\n\nComparação de cartas (Atributo: População): \n\n"
            "Carta 1 - %s (%s): %d\n"
            "Carta 2 - %s (%s): %d\n", nome, estado, populacao, nome2, estado2, populacao2);
    if(populacao >= populacao2){
        if (populacao > populacao2)
        {
            printf("Resultado: Carta 1 (%s) venceu!\n", nome);
        } else {
            printf("Resultado: As duas cidades tem a mesma população!\n\n");
        }
        
    } else {
        printf("Carta 2 (%s) venceu!\n", nome2);
    }

    return 0;
}
