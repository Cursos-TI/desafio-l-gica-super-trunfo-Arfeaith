#include <stdio.h>


int main() {

    // Definição das variáveis para armazenar as propriedades das cidades
    char estado[3], codigo[4], nome[50], estado2[3], codigo2[4], nome2[50];
    int populacao, pontos_turisticos, populacao2, pontos_turisticos2, escolha, escolha2, escolhacarta2, escolha2carta2;
    float area, area2;
    double pib, pib2, parcela, parcela2, parcelacarta2, parcela2carta2, total, total2;

    //Inserção de dados apenas para teste
    // char codigo[4] = "A01";
    // char estado[3] = "RJ";
    // char nome[50] = "Petropolis";
    // populacao = 12325000;
    // area = 1521.11; 
    // pib = 699.28;
    // pontos_turisticos = 50;

    // char codigo2[4] = "B02";
    // char estado2[3] = "CE";
    // char nome2[50] = "Fortaleza";
    // populacao2 = 6748000;
    // area2 = 1200.25;
    // pib2 = 300.50;
    // pontos_turisticos2 = 30;
    
    //Solicitando ao usuário que insira os dados das cidades
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
    printf("PIB per capita: R$%.2f ", pibperc2);

    // Solicitando ao usuário que escolha quais atributos serão comparados
    printf("\n\n---Atributos---\n");
    printf("1. População.\n");
    printf("2. Área.\n");
    printf("3. PIB.\n");
    printf("4. Número de Pontos turísticos.\n");
    printf("5. Densidade Populacional.\n\n");
    printf("Escolha o primeiro atributo para a Carta 1: ");
    scanf("%d",&escolha);
    printf("Escolha o segundo atributo para a Carta 1: ");
    scanf("%d",&escolha2);
    printf("Escolha o primeiro atributo para a Carta 2: ");
    scanf("%d",&escolhacarta2);
    printf("Escolha o segundo atributo para a Carta 2: ");
    scanf("%d",&escolha2carta2);

    //Verificando se a escolha dos atributos é válida
    if (escolha == escolha2 || escolhacarta2 == escolha2carta2)
    {
        printf("\nOs atributos para comparação não podem ser iguais.");
    } else {
    
    //Demonstrando atributos escolhidos
    switch (escolha)
    {
    case 1:
        printf("\nPrimeiro Atributo Carta 1 - População: \n");
        printf("%s (%s): %d\n", nome, estado, populacao);
        parcela = populacao;
        break;
    case 2:
        printf("\nPrimeiro Atributo Carta 1 - Área: \n");
        printf("%s (%s): %.2f km²\n", nome, estado, area);
        parcela = area;
        break;
    case 3:
        printf("\nPrimeiro Atributo Carta 1 - PIB: \n");
        printf("%s (%s): %.2lf bilhões de reais\n", nome, estado, pib);
        parcela = pib;
        break;
    case 4:
        printf("\nPrimeiro Atributo Carta 1 - Número de Pontos Turísticos: \n");
        printf("%s (%s): %d\n", nome, estado, pontos_turisticos);
        parcela = pontos_turisticos;
        break;
    case 5:
        printf("\nPrimeiro Atributo Carta 1 - Densidade Populacional: \n");
        printf("%s (%s): %.2f\n", nome, estado, densidade);
        parcela = densidade;
        break;
    default:
        printf("\nOpção inválida.");
        break;
    }
    switch (escolha2)
    {
    case 1:
        printf("\nSegundo Atributo Carta 1 - População: \n");
        printf("%s (%s): %d\n", nome, estado, populacao);
        parcela2 = populacao;
        break;
    case 2:
        printf("\nSegundo Atributo Carta 1 - Área: \n");
        printf("%s (%s): %.2f km²\n", nome, estado, area);

        parcela2 = area;
        break;
    case 3:
        printf("\nSegundo Atributo Carta 1 - PIB: \n");
        printf("%s (%s): %.2lf bilhões de reais\n", nome, estado, pib);
        parcela2 = pib;
        break;
    case 4:
        printf("\nSegundo Atributo Carta 1 - Número de Pontos Turísticos: \n");
        printf("%s (%s): %d\n", nome, estado, pontos_turisticos);
        parcela2 = pontos_turisticos;
        break;
    case 5:
        printf("\nSegundo Atributo Carta 1 - Densidade Populacional: \n");
        printf("%s (%s): %.2f\n", nome, estado, densidade);
        parcela2 = densidade;
        break;
    default:
        printf("\nOpção inválida.");
        break;
    }
    switch (escolhacarta2)
    {
    case 1:
        printf("\nPrimeiro Atributo Carta 2 - População: \n");
        printf("%s (%s): %d\n", nome2, estado2, populacao2);
        parcelacarta2 = populacao2;
        break;
    case 2:
        printf("\nPrimeiro Atributo Carta 2 - Área: \n");
        printf("%s (%s): %.2f km²\n", nome2, estado2, area2);
        parcelacarta2 = area2;
        break;
    case 3:
        printf("\nPrimeiro Atributo Carta 2 - PIB: \n");
        printf("%s (%s): %.2lf bilhões de reais\n", nome2, estado2, pib2);
        parcelacarta2 = pib2;
        break;
    case 4:
        printf("\nPrimeiro Atributo Carta 2 - Número de Pontos Turísticos: \n");
        printf("%s (%s): %d\n", nome2, estado2, pontos_turisticos2);
        parcelacarta2 = pontos_turisticos2;
        break;
    case 5:
        printf("\nPrimeiro Atributo Carta 2 - Densidade Populacional: \n");
        printf("%s (%s): %.2f\n", nome2, estado2, densidade2);
        parcelacarta2 = densidade2;
        break;
    default:
        printf("\nOpção inválida.");
        break;
    }
    switch (escolha2carta2)
    {
    case 1:
        printf("\nSegundo Atributo Carta 2 - População: \n");
        printf("%s (%s): %d\n", nome2, estado2, populacao2);
        parcela2carta2 = populacao2;
        break;
    case 2:
        printf("\nSegundo Atributo Carta 2 - Área: \n");
        printf("%s (%s): %.2f km²\n", nome2, estado2, area2);
        parcela2carta2 = area2;
        break;
    case 3:
        printf("\nSegundo Atributo Carta 2 - PIB: \n");
        printf("%s (%s): %.2lf bilhões de reais\n", nome2, estado2, pib2);
        parcela2carta2 = pib2;
        break;
    case 4:
        printf("\nSegundo Atributo Carta 2 - Número de Pontos Turísticos: \n");
        printf("%s (%s): %d\n", nome2, estado2, pontos_turisticos2);
        parcela2carta2 = pontos_turisticos2;
        break;
    case 5:
        printf("\nSegundo Atributo Carta 2 - Densidade Populacional: \n");
        printf("%s (%s): %.2f", nome2, estado2, densidade2);
        parcela2carta2 = densidade2;
        break;
    default:
        printf("\nOpção inválida.");
        break;
    }

    //Demonstrando vencedor nos atributos individuais
    if (parcela >= parcelacarta2)
    {
        (double) parcela == (double) parcelacarta2 ? printf("\nEmpate no primeiro atributo!\n") : printf("\nCarta 1 venceu no primeiro atributo!\n");
    } else {
        printf("\nCarta 2 venceu no primeiro atributo!\n");
    }
    if (parcela2 >= parcela2carta2)
    {
        (double) parcela2 == (double) parcela2carta2 ? printf("Empate no segundo atributo!") : printf("Carta 1 venceu no segundo atributo!");
    } else {
        printf("Carta 2 venceu no segundo atributo!");
    }

    //Calculando e demonstrando total
    total = (double) parcela + (double) parcela2;
    total2 = (double) parcelacarta2 + (double) parcela2carta2;

    printf("\n\nO total da Carta 1 é: %.2lf\n", total);
    printf("O total da Carta 2 é: %.2lf\n\n", total2);

    //Declarando vencedor da soma
    if (total >= total2)
    {
        total == total2 ? printf("Empate!") : printf("Carta 1 venceu a soma!");
    } else {
        printf("Carta 2 venceu a soma!");
    }
    }

    return 0;
}
