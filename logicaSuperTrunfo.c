#include <stdio.h>

int main() {

    //Declaração das Variaveis
    char estado1, estado2;
    char codigo1[50], codigo2[50];
    char cidade1[50], cidade2[50];
    unsigned long int populacao1, populacao2; //Alterado para o Tipo de Dado Unsigned Long Int, para aceitar números maiores.
    float area1, area2;
    float pib1, pib2;
    int pontosTuristicos1, pontosTuristicos2;
    float densidadeDemografica1, densidadeDemografica2;
    float pibperCapita1, pibperCapita2;
    float superPoder1, superPoder2;
    float valorInvertido1, valorInvertido2;
    int comparacao; //Adicionado Variavel de Controle da estrutura Switch para comparação das cartas.

    printf("*** Pronto para cadastrar as Cartas do Jogo? ***\n\n"); //2x "\n", para pular 2 linhas. 

    printf("• CARTA 1\n\n");
    printf("(CARTA 1) Digite uma Letra de A à H para representar o Estado: \n");
    scanf("%c", &estado1);

    printf("(CARTA 1) Digite a Letra escolhida mais o código numérico da carta (De 01 à 04): \n"); //Ex: A01; B02; etc;
    scanf("%s", codigo1);

    printf("(CARTA 1) Digite o Nome da Cidade: \n"); //Cidades apenas com 1 Nome. Ex: Santos; Fortaleza; etc;
    scanf("%s", cidade1);

    printf("(CARTA 1) Digite qual a População da Cidade: \n"); //Digitar sem pontos, apenas numeros. 
    scanf("%lu", &populacao1); //Alterado para o especificador de formato %lu (unsigned long int), para aceitar números maiores.

    printf("(CARTA 1) Digite a Area em km² da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &area1);

    printf("(CARTA 1) Digite o PIB da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &pib1);

    printf("(CARTA 1) Digite a quantidade de Pontos Turisticos da Cidade: \n"); //Apenas numeros.
    scanf("%d", &pontosTuristicos1);

    densidadeDemografica1 = (float) populacao1 / area1; //Cálculo da Densidade Demográfica (Numero de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita1 = (float) pib1 / populacao1; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).
    valorInvertido1 = (float)(1 / densidadeDemografica1);  //Cálculo do Valor Inverso (1 / Densidade Demográfica), com conversão Explicita (Casting).
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1 + valorInvertido1; //Soma com conversão Explicita (Casting) de todas as variaveis de valores, inclusive do calculo inverso da Densidade Demográfica.
    
    
    printf("\n");
 
    printf("- Cadastro da Carta 1:\n\n");

    printf("Estado: %c\n", estado1);
    printf("Código da Carta: %s\n", codigo1);
    printf("Nome da Cidade: %s\n", cidade1);
    printf("População: %lu Pessoas\n", populacao1); //Alterado para o especificador de formato %lu (unsigned long int), para impressão correta de valores.
    printf("Área em km²: %.2fkm²\n", area1); //%.2f = Indificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib1); //%.2f = Indificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos1);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadeDemografica1); //%.2f = Indificação de 2 casas decimais.
    printf("PIB per Capita: R$%.2f\n", pibperCapita1); //%.2f = Indificação de 2 casas decimais.
    //printf("Resultado Inverso: %.4f\n", valorInvertido1); //Valor Inverso não é necessário, pois o mesmo já foi adicionado ao Super Poder, comando utilizado apenas para teste do calculo inverso.
    printf("Super Poder: %.2f Pontos\n", superPoder1); //%.2f = Indificação de 2 casas decimais.
    

    printf("\n\n");

    printf("• CARTA 2\n\n");
    printf("(CARTA 2) Digite uma Letra de A à H para representar o Estado: \n");
    scanf(" %c", &estado2); //O espaço antes de %c, se faz necessário para que o programa funcione corretamente.
    
    printf("(CARTA 2) Digite a Letra escolhida mais o código numérico da carta (De 01 à 04): \n"); //Ex: A01; B02; etc;
    scanf("%s", codigo2);

    printf("(CARTA 2) Digite o Nome da Cidade: \n"); //Cidades apenas com 1 Nome. Ex: Santos; Fortaleza; etc;
    scanf("%s", cidade2);

    printf("(CARTA 2) Digite qual a População da Cidade: \n"); //Digitar sem pontos, apenas numeros.
    scanf("%lu", &populacao2); //Alterado para o especificador de formato %lu (unsigned long int), para aceitar números maiores.

    printf("(CARTA 2) Digite a Area em km² da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &area2);

    printf("(CARTA 2) Digite o PIB da Cidade: \n"); //Digitar numeros, porém com 2 casas decimais.
    scanf("%f", &pib2);

    printf("(CARTA 2) Digite a quantidade de Pontos Turisticos da Cidade: \n"); //Apenas numeros.
    scanf("%d", &pontosTuristicos2);

    densidadeDemografica2 = (float) populacao2 / area2; //Cálculo da Densidade Demográfica (Nº de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita2 = (float) pib2 / populacao2; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).
    valorInvertido2 = (float)(1 / densidadeDemografica2); //Cálculo do Valor Inverso (1 / Densidade Demográfica), com conversão Explicita (Casting).
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2 + valorInvertido2; //Soma com conversão Explicita (Casting) de todas as variaveis de valores, inclusive do calculo inverso da Densidade Demográfica.

    printf("\n");
    
    printf("- Cadastro da Carta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu Pessoas\n", populacao2); //Alterado para o especificador de formato %lu (unsigned long int), para impressão correta de valores.
    printf("Área em km²: %.2fkm²\n", area2); //%.2f = Indificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib2); //%.2f = Indificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos2);
    printf("Densidade Populacional: %.2f hab/km²\n", densidadeDemografica2); //%.2f = Indificação de 2 casas decimais.
    printf("PIB per Capita: R$%.2f\n", pibperCapita2); //%.2f = Indificação de 2 casas decimais.
    printf("Super Poder: %.2f Pontos\n", superPoder2); //%.2f = Indificação de 2 casas decimais.

    printf("\n*** Comparação das Cartas ***\n");

    printf("\n- Escolha o Atributo que deseja comparar:\n\n"); //Menu de Atributos para comparação das cartas, onde o usuário escolhe o atributo que deseja comparar.
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("\nNº do Atributo: ");
    scanf("%d", &comparacao); //Entrada de Dados para Variável de controle de comparação das cartas, onde o usuário através do Menu escolhe o numero do atributo que deseja comparar.

    switch (comparacao) { //Estrutura de Decisão (Switch) como Menu, para a escolha do jogador de que atributo será feita a comparação das cartas, utilizando a logica com o if-else-if para determinar o ganhador.
        case 1:
            printf("\nAtributo 1: POPULAÇÃO\n");
            if (populacao1 > populacao2) { //Aplicação da Estrutura de Decisão Encadeada (if-else-if) para realizar a logica de comparação dos valores dos atributos escolhidos, sendo o "if" Carta 1 vence, o "else-if" Carta 2 vence e "else" as cartas empatam. OBS: A lógica se aplica para todos os Cases.
                printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                printf("\n### Atributo POPULAÇÃO: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else if (populacao1 < populacao2) {
                printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                printf("\n### Atributo POPULAÇÃO: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            } else { //Caso os valores do atributo sejam iguais, o programa informa que houve um empate.
                printf("### Atributo POPULAÇÃO: Empate entre as cartas! ###\n"); 
                printf("(Carta 1 - %s: %lu Pessoas x Carta 2 - %s: %lu Pessoas)\n\n", cidade1, populacao1, cidade2, populacao2);
            }
            break; //Break para finalizar a execução do bloco de código.
        case 2:
            printf("\nAtributo 2: ÁREA\n");
            if (area1 > area2) {
                printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                printf("\n### Atributo ÁREA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else if (area1 < area2) {
                printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                printf("\n### Atributo ÁREA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            } else {
                printf("### Atributo ÁREA: Empate entre as cartas! ###\n");
                printf("(Carta 1 - %s: %.2fkm² x Carta 2 - %s: %.2fkm²)\n\n", cidade1, area1, cidade2, area2);
            }
            break;
        case 3:
            printf("\nAtributo 3: PIB\n"); 
            if (pib1 > pib2) {
                printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                printf("\n### Atributo PIB: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else if (pib1 < pib2) {
                printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                printf("\n### Atributo PIB: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            } else {
                printf("### Atributo PIB: Empate entre as cartas! ###\n");
                printf("(Carta 1 - %s: R$%.2f x Carta 2 - %s: R$%.2f)\n\n", cidade1, pib1, cidade2, pib2);
            }
            break;
        case 4:
            printf("\nAtributo 4: PONTOS TURÍSTICOS\n");
            if (pontosTuristicos1 > pontosTuristicos2) {
                printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                printf("\n### Atributo PONTOS TURÍSTICOS: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else if (pontosTuristicos1 < pontosTuristicos2) {
                printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                printf("\n### Atributo PONTOS TURÍSTICOS: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            } else {
                printf("### Atributo PONTOS TURÍSTICOS: Empate entre as cartas! ###\n");
                printf("(Carta 1 - %s: %d Pontos Turísticos x Carta 2 - %s: %d Pontos Turísticos)\n\n", cidade1, pontosTuristicos1, cidade2, pontosTuristicos2); 
            }
            break;
        case 5:
            printf("\nAtributo 5: DENSIDADE DEMOGRÁFICA\n"); //Densidade Demográfica é inversamente proporcional, ou seja, quem tem o menor o valor, vence.
            if (densidadeDemografica1 < densidadeDemografica2) { 
                printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else if (densidadeDemografica1 > densidadeDemografica2) {
                printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            } else {
                printf("### Atributo DENSIDADE DEMOGRÁFICA: Empate entre as cartas! ###\n");
                printf("(Carta 1 - %s: %.2f hab/km² x Carta 2 - %s: %.2f hab/km²)\n\n", cidade1, densidadeDemografica1, cidade2, densidadeDemografica2); 
            }
            break;            
        default: //Caso o usuário digite um número diferente de 1 a 5 no momento da seleção do menu, o programa irá informar que a opção é inválida.
            printf("Opção Inválida! Por favor, escolha um número de 1 a 5.\n\n");
            break;
    }

    return 0;
}