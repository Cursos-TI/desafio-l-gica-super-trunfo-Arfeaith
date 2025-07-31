#include <stdio.h>



int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    char estado[3], codigo[3], nome[50], estado2[3], codigo2[3], nome2[50];
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
    scanf("%f", &pib);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos);

    printf("Digite o código da primeira cidade: ");
    scanf("%s", codigo2);
    printf("Digite o estado da primeira cidade: ");
    scanf("%s", estado2);
    printf("Digite o nome da primeira cidade: ");
    scanf("%s", nome2);
    printf("Digite a população da primeira cidade: ");
    scanf("%d", &populacao2);
    printf("Digite a área em km² da primeira da cidade: ");
    scanf("%f", &area2);
    printf("Digite o PIB em bilhões da primeira da cidade: ");
    scanf("%f", &pib2);
    printf("Digite a quantidade de pontos turísticos da primeira cidade: ");
    scanf("%d", &pontos_turisticos2);

    // Caculando outros dados
    float densidade = populacao / area, densidade2 = populacao2 / area2, pibperc = pib / populacao, pibperc2 = pib2/ populacao2;

    // Comparando atributos das cartas e declarando a vencedora
    printf("\n\n\nComparação de cartas (Atributo: População): \n\n"
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
