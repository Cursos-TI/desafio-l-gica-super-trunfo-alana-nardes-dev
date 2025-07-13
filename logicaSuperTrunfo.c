#include <stdio.h>

int main() {

    //Declaração das Variaveis já com os dados das cartas pré-definidos.
    char estado1 = 'A', estado2 = 'B'; //Inicializando os estados com valores padrão.
    char codigo1[50] = "A01", codigo2[50] = "B02";
    char cidade1[50] = "ITANHAÉM", cidade2[50] = "SANTOS";
    unsigned long int populacao1 = 112476, populacao2 = 418608; //Alterado para o Tipo de Dado Unsigned Long Int, para aceitar números maiores.
    float area1 = 601.71, area2 = 281.03;
    float pib1 = 2400000000.00, pib2 = 24000000000.00;
    int pontosTuristicos1 = 40, pontosTuristicos2 = 30;
    float densidadeDemografica1, densidadeDemografica2; //Variavel para armazenar os dados, para o Cálculo da Densidade Demográfica.
    float pibperCapita1, pibperCapita2; //Variavel para armazenar os dados, para o Cálculo do PIB per Capita.
    float superPoder1, superPoder2; //Variavel para armazenar os dados, para o Cálculo do Super Poder.
    float valorInvertido1, valorInvertido2; //Variavel para armazenar os dados, para o Cálculo do Valor Inverso da Densidade Demográfica.
    int comparacaoAtributo1, comparacaoAtributo2, comparacaoAtributo3, comparacaoAtributo4; //Variaveis de Controle das Estruturas Switch para comparação das cartas.
    int resultado1, resultado2, resultado3, resultado4; //Variaveis para armazenar os resultados da comparação das cartas.

    densidadeDemografica1 = (float) populacao1 / area1; //Cálculo da Densidade Demográfica (Nº de Pessoas / por km²), com conversão Explicita (Casting).
    densidadeDemografica2 = (float) populacao2 / area2; //Cálculo da Densidade Demográfica (Nº de Pessoas / por km²), com conversão Explicita (Casting).
    pibperCapita1 = (float) pib1 / populacao1; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).
    pibperCapita2 = (float) pib2 / populacao2; //Cálculo do PIB per Capita (Valor do PIB / Nº de Pessoas), com conversão Explicita (Casting).
    valorInvertido1 = (float)(1 / densidadeDemografica1);  //Cálculo do Valor Inverso (1 / Densidade Demográfica), com conversão Explicita (Casting).
    valorInvertido2 = (float)(1 / densidadeDemografica2); //Cálculo do Valor Inverso (1 / Densidade Demográfica), com conversão Explicita (Casting).
    superPoder1 = (float) populacao1 + area1 + pib1 + pontosTuristicos1 + pibperCapita1 + valorInvertido1; //Soma de todas as variaveis de valores para a composição do atributo "Super Poder", com conversão Explicita (Casting), inclusive do calculo inverso da Densidade Demográfica.
    superPoder2 = (float) populacao2 + area2 + pib2 + pontosTuristicos2 + pibperCapita2 + valorInvertido2; //Soma de todas as variaveis de valores para a composição do atributo "Super Poder", com conversão Explicita (Casting), inclusive do calculo inverso da Densidade Demográfica.
    
    printf("\n*** Cartas do Jogo Super Trunfo - CIDADES ***\n\n"); 

    printf("\n• Carta 1:\n\n");

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
    
    
    printf("\n\n• Carta 2:\n\n");

    printf("Estado: %c\n", estado2);
    printf("Código da Carta: %s\n", codigo2);
    printf("Nome da Cidade: %s\n", cidade2);
    printf("População: %lu Pessoas\n", populacao2); //Alterado para o especificador de formato %lu (unsigned long int), para impressão correta de valores.
    printf("Área em km²: %.2fkm²\n", area2); //%.2f = Indificação de 2 casas decimais.
    printf("PIB: R$%.2f\n", pib2); //%.2f = Indificação de 2 casas decimais.
    printf("Pontos Turisticos na Cidade: %d\n", pontosTuristicos2);
    printf("Densidade Demográfica: %.2f hab/km²\n", densidadeDemografica2); //%.2f = Indificação de 2 casas decimais.
    printf("PIB per Capita: R$%.2f\n", pibperCapita2); //%.2f = Indificação de 2 casas decimais.
    printf("Super Poder: %.2f Pontos\n", superPoder2); //%.2f = Indificação de 2 casas decimais.

    
    printf("\n\n*** Bem-vindo ao Jogo SUPER TRUNFO ***\n");
    printf("• Comparando as Cartas\n");

    printf("\n- Escolha o 1º Atributo que deseja comparar:\n\n"); //Menu de Atributos para comparação das cartas, onde o usuário escolhe o atributo que deseja comparar.
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nNº do Atributo: ");
    scanf("%d", &comparacaoAtributo1); //Entrada de Dados para Variável de controle de comparação das cartas, onde o usuário através do Menu escolhe o numero do atributo que deseja comparar.


    switch (comparacaoAtributo1) { //Estrutura de Decisão (Switch) como Menu, para a escolha do jogador de que atributo será feita a comparação das cartas, utilizando a logica com o Operador Ternário e If-Else para determinar o ganhador.
        case 1:
            printf("\nAtributo 1: POPULAÇÃO\n");
            resultado1 = populacao1 > populacao2 ? 1 : 0; //Utilizando o operador ternário para simplificar a lógica de comparação, comparando apenas o VERDADEIRO ou FALSO dos resultados das comparações. OBS: A lógica se aplica para todos os Cases.
            if (resultado1 == 1) { 
                printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                printf("\n### Atributo POPULAÇÃO: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                printf("\n### Atributo POPULAÇÃO: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            } 
            break; //Break para finalizar a execução do bloco de código.
        case 2:
            printf("\nAtributo 2: ÁREA\n");
            resultado1 = area1 > area2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                printf("\n### Atributo ÁREA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                printf("\n### Atributo ÁREA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            }
            break;
        case 3:
            printf("\nAtributo 3: PIB\n");
            resultado1 = pib1 > pib2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                printf("\n### Atributo PIB: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                printf("\n### Atributo PIB: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            }
            break;
        case 4:
            printf("\nAtributo 4: PONTOS TURÍSTICOS\n");
            resultado1 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                printf("\n### Atributo PONTOS TURÍSTICOS: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                printf("\n### Atributo PONTOS TURÍSTICOS: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            }
            break;
        case 5:
            printf("\nAtributo 5: DENSIDADE DEMOGRÁFICA\n"); //Densidade Demográfica é inversamente proporcional, ou seja, quem tem o menor o valor, vence.
            resultado1 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
            if (resultado1 == 1) { 
                printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            }
            break;
        case 6:
            printf("\nAtributo 6: PIB per Capita\n");
            resultado1 = pibperCapita1 > pibperCapita2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                printf("\n### Atributo PIB per Capita: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                printf("\n### Atributo PIB per Capita: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            }
            break;
        case 7:
            printf("\nAtributo 7: SUPER PODER\n"); 
            resultado1 = superPoder1 > superPoder2 ? 1 : 0;
            if (resultado1 == 1) {
                printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                printf("\n### Atributo SUPER PODER: Carta 1 (%s) Venceu! ###\n\n", cidade1);
            } else {
                printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                printf("\n### Atributo SUPER PODER: Carta 2 (%s) Venceu! ###\n\n", cidade2);
            }
            break;            
        default: //Caso o usuário digite um número diferente de 1 a 7 no momento da seleção do menu, o programa irá informar que a opção é inválida.
            printf("\nOpção Inválida! Por favor, escolha um número de 1 a 7.\n\n");
            return 0; //Finaliza o programa caso a opção seja inválida.
            break;
    }

    printf("\n\n- Escolha o 2º Atributo que deseja comparar:\n"); //Menu de Atributos para comparação das cartas, onde o usuário escolhe o atributo que deseja comparar.
    printf("*ATENÇÃO: Escolha um atributo diferente dos escolhidos anteriormente!\n\n"); //Aviso para o usuário que não pode escolher o mesmo atributo novamente.
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nNº do Atributo: ");
    scanf("%d", &comparacaoAtributo2);


    if (comparacaoAtributo2 == comparacaoAtributo1) { //Verifica se o usuário já escolheu anteriormente o mesmo atributo, caso sim, o jogo é finalizado.
        printf("\nERRO: Você já escolheu esse atributo, recomece o jogo!\n\n");
        return 0; //Finaliza o programa caso o atributo seja repetido.
    } else { 
        switch (comparacaoAtributo2) { //Estrutura de Decisão (Switch) como Menu, para a escolha do jogador de que atributo será feita a comparação das cartas, utilizando a logica com o Operador Ternário e If-Else para determinar o ganhador.
            case 1:
                printf("\nAtributo 1: POPULAÇÃO\n");
                resultado2 = populacao1 > populacao2 ? 1 : 0; //Utilizando o operador ternário para simplificar a lógica de comparação, comparando apenas o VERDADEIRO ou FALSO dos resultados das comparações. OBS: A lógica se aplica para todos os Cases.
                if (resultado2 == 1) { 
                    printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                    printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                    printf("\n### Atributo POPULAÇÃO: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                    printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                    printf("\n### Atributo POPULAÇÃO: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break; //Break para finalizar a execução do bloco de código.
            case 2:
                printf("\nAtributo 2: ÁREA\n");
                resultado2 = area1 > area2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                    printf("\n### Atributo ÁREA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                    printf("\n### Atributo ÁREA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 3:
                printf("\nAtributo 3: PIB\n");
                resultado2 = pib1 > pib2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                    printf("\n### Atributo PIB: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                    printf("\n### Atributo PIB: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 4:
                printf("\nAtributo 4: PONTOS TURÍSTICOS\n");
                resultado2 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                    printf("\n### Atributo PONTOS TURÍSTICOS: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                    printf("\n### Atributo PONTOS TURÍSTICOS: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 5:
                printf("\nAtributo 5: DENSIDADE DEMOGRÁFICA\n"); //Densidade Demográfica é inversamente proporcional, ou seja, quem tem o menor o valor, vence.
                resultado2 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
                if (resultado2 == 1) { 
                    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                    printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                    printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 6:
                printf("\nAtributo 6: PIB per Capita\n");
                resultado2 = pibperCapita1 > pibperCapita2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                    printf("\n### Atributo PIB per Capita: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                    printf("\n### Atributo PIB per Capita: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 7:
                printf("\nAtributo 7: SUPER PODER\n"); 
                resultado2 = superPoder1 > superPoder2 ? 1 : 0;
                if (resultado2 == 1) {
                    printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                    printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                    printf("\n### Atributo SUPER PODER: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                    printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                    printf("\n### Atributo SUPER PODER: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;            
            default: //Caso o usuário digite um número diferente de 1 a 7 no momento da seleção do menu, o programa irá informar que a opção é inválida.
                printf("\nOpção Inválida! Por favor, escolha um número de 1 a 7.\n\n");
                return 0; //Finaliza o programa caso a opção seja inválida.
                break;
        }
    }

    printf("\n\n- Escolha o 3º Atributo que deseja comparar:\n"); //Menu de Atributos para comparação das cartas, onde o usuário escolhe o atributo que deseja comparar.
    printf("*ATENÇÃO: Escolha um atributo diferente dos escolhidos anteriormente!\n\n"); //Aviso para o usuário que não pode escolher o mesmo atributo novamente.
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nNº do Atributo: ");
    scanf("%d", &comparacaoAtributo3);


    if ((comparacaoAtributo3 == comparacaoAtributo1) || (comparacaoAtributo3 == comparacaoAtributo2)) { //Verifica se o usuário já escolheu anteriormente o mesmo atributo, caso sim, o jogo é finalizado.
        printf("\nERRO: Você já escolheu esse atributo, recomece o jogo!\n\n");
        return 0; //Finaliza o programa caso o atributo seja repetido.
    } else { 
        switch (comparacaoAtributo3) { //Estrutura de Decisão (Switch) como Menu, para a escolha do jogador de que atributo será feita a comparação das cartas, utilizando a logica com o Operador Ternário e If-Else para determinar o ganhador.
            case 1:
                printf("\nAtributo 1: POPULAÇÃO\n");
                resultado3 = populacao1 > populacao2 ? 1 : 0; //Utilizando o operador ternário para simplificar a lógica de comparação, comparando apenas o VERDADEIRO ou FALSO dos resultados das comparações. OBS: A lógica se aplica para todos os Cases.
                if (resultado3 == 1) {
                    printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                    printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                    printf("\n### Atributo POPULAÇÃO: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                    printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                    printf("\n### Atributo POPULAÇÃO: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break; //Break para finalizar a execução do bloco de código.
            case 2:
                printf("\nAtributo 2: ÁREA\n");
                resultado3 = area1 > area2 ? 1 : 0;
                if (resultado3 == 1) {
                    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                    printf("\n### Atributo ÁREA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                    printf("\n### Atributo ÁREA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 3:
                printf("\nAtributo 3: PIB\n");
                resultado3 = pib1 > pib2 ? 1 : 0;
                if (resultado3 == 1) {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                    printf("\n### Atributo PIB: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                    printf("\n### Atributo PIB: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 4:
                printf("\nAtributo 4: PONTOS TURÍSTICOS\n");
                resultado3 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                if (resultado3 == 1) {
                    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                    printf("\n### Atributo PONTOS TURÍSTICOS: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                    printf("\n### Atributo PONTOS TURÍSTICOS: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 5:
                printf("\nAtributo 5: DENSIDADE DEMOGRÁFICA\n"); //Densidade Demográfica é inversamente proporcional, ou seja, quem tem o menor o valor, vence.
                resultado3 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
                if (resultado3 == 1) { 
                    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                    printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                    printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 6:
                printf("\nAtributo 6: PIB per Capita\n");
                resultado3 = pibperCapita1 > pibperCapita2 ? 1 : 0;
                if (resultado3 == 1) {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                    printf("\n### Atributo PIB per Capita: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                    printf("\n### Atributo PIB per Capita: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 7:
                printf("\nAtributo 7: SUPER PODER\n"); 
                resultado3 = superPoder1 > superPoder2 ? 1 : 0;
                if (resultado3 == 1) {
                    printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                    printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                    printf("\n### Atributo SUPER PODER: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                    printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                    printf("\n### Atributo SUPER PODER: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;            
            default: //Caso o usuário digite um número diferente de 1 a 7 no momento da seleção do menu, o programa irá informar que a opção é inválida.
                printf("\nOpção Inválida! Por favor, escolha um número de 1 a 7.\n\n");
                return 0; //Finaliza o programa caso a opção seja inválida.
                break;
        }
    }

    printf("\n\n- Escolha o 4º Atributo que deseja comparar:\n"); //Menu de Atributos para comparação das cartas, onde o usuário escolhe o atributo que deseja comparar.
    printf("*ATENÇÃO: Escolha um atributo diferente dos escolhidos anteriormente!\n\n"); //Aviso para o usuário que não pode escolher o mesmo atributo novamente.
    
    printf("1. População\n");
    printf("2. Área\n");
    printf("3. PIB\n");
    printf("4. Pontos Turísticos\n");
    printf("5. Densidade Demográfica\n");
    printf("6. PIB per Capita\n");
    printf("7. Super Poder\n");
    printf("\nNº do Atributo: ");
    scanf("%d", &comparacaoAtributo4);


    if ((comparacaoAtributo4 == comparacaoAtributo1) || (comparacaoAtributo4 == comparacaoAtributo2) || (comparacaoAtributo4 == comparacaoAtributo3)) { //Verifica se o usuário já escolheu anteriormente o mesmo atributo, caso sim, o jogo é finalizado.
        printf("\nERRO: Você já escolheu esse atributo, recomece o jogo!\n\n");
        return 0; //Finaliza o programa caso o atributo seja repetido.
    } else {
        switch (comparacaoAtributo4) { //Estrutura de Decisão (Switch) como Menu, para a escolha do jogador de que atributo será feita a comparação das cartas, utilizando a logica com o Operador Ternário e If-Else para determinar o ganhador.
            case 1:
                printf("\nAtributo 1: POPULAÇÃO\n");
                resultado4 = populacao1 > populacao2 ? 1 : 0; //Utilizando o operador ternário para simplificar a lógica de comparação, comparando apenas o VERDADEIRO ou FALSO dos resultados das comparações. OBS: A lógica se aplica para todos os Cases.
                if (resultado4 == 1) { 
                    printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                    printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                    printf("\n### Atributo POPULAÇÃO: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %lu Pessoas\n", cidade1, populacao1);
                    printf("Carta 2 - %s: %lu Pessoas\n", cidade2, populacao2);
                    printf("\n### Atributo POPULAÇÃO: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break; //Break para finalizar a execução do bloco de código.
            case 2:
                printf("\nAtributo 2: ÁREA\n");
                resultado4 = area1 > area2 ? 1 : 0;
                if (resultado4 == 1) {
                    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                    printf("\n### Atributo ÁREA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2fkm²\n", cidade1, area1);
                    printf("Carta 2 - %s: %.2fkm²\n", cidade2, area2);
                    printf("\n### Atributo ÁREA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 3:
                printf("\nAtributo 3: PIB\n");
                resultado4 = pib1 > pib2 ? 1 : 0;
                if (resultado4 == 1) {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                    printf("\n### Atributo PIB: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pib1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pib2);
                    printf("\n### Atributo PIB: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 4:
                printf("\nAtributo 4: PONTOS TURÍSTICOS\n");
                resultado4 = pontosTuristicos1 > pontosTuristicos2 ? 1 : 0;
                if (resultado4 == 1) {
                    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                    printf("\n### Atributo PONTOS TURÍSTICOS: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %d Pontos Turísticos\n", cidade1, pontosTuristicos1);
                    printf("Carta 2 - %s: %d Pontos Turísticos\n", cidade2, pontosTuristicos2);
                    printf("\n### Atributo PONTOS TURÍSTICOS: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 5:
                printf("\nAtributo 5: DENSIDADE DEMOGRÁFICA\n"); //Densidade Demográfica é inversamente proporcional, ou seja, quem tem o menor o valor, vence.
                resultado4 = densidadeDemografica1 < densidadeDemografica2 ? 1 : 0;
                if (resultado4 == 1) { 
                    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                    printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2f hab/km²\n", cidade1, densidadeDemografica1);
                    printf("Carta 2 - %s: %.2f hab/km²\n", cidade2, densidadeDemografica2);
                    printf("\n### Atributo DENSIDADE DEMOGRÁFICA: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 6:
                printf("\nAtributo 6: PIB per Capita\n");
                resultado4 = pibperCapita1 > pibperCapita2 ? 1 : 0;
                if (resultado4 == 1) {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                    printf("\n### Atributo PIB per Capita: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: R$%.2f\n", cidade1, pibperCapita1);
                    printf("Carta 2 - %s: R$%.2f\n", cidade2, pibperCapita2);
                    printf("\n### Atributo PIB per Capita: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;
            case 7:
                printf("\nAtributo 7: SUPER PODER\n"); 
                resultado4 = superPoder1 > superPoder2 ? 1 : 0;
                if (resultado4 == 1) {
                    printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                    printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                    printf("\n### Atributo SUPER PODER: Carta 1 (%s) Venceu! ###\n\n", cidade1);
                } else {
                    printf("Carta 1 - %s: %.2f Pontos\n", cidade1, superPoder1);
                    printf("Carta 2 - %s: %.2f Pontos\n", cidade2, superPoder2);
                    printf("\n### Atributo SUPER PODER: Carta 2 (%s) Venceu! ###\n\n", cidade2);
                }
                break;            
            default: //Caso o usuário digite um número diferente de 1 a 7 no momento da seleção do menu, o programa irá informar que a opção é inválida.
                printf("\nOpção Inválida! Por favor, escolha um número de 1 a 7.\n\n");
                return 0; //Finaliza o programa caso a opção seja inválida.
                break;
        }

    }

    //Lógica final para a exibição do resultado final da partida, onde é verificado qual carta venceu mais atributos e exibe o vencedor.
    if (resultado1 == 1 && resultado2 == 1) {
        if (resultado3 == 1 && resultado4 == 1) {
            printf("\n### O Vencedor da Partida foi: CARTA 1 (%s) com %d Atributos Vencidos. PARABÉNS!!! ###\n\n", cidade1, 4);
        } else if  (resultado3 == 1 || resultado4 == 1) {
            printf("\n### O Vencedor da Partida foi: CARTA 1 (%s) com %d Atributos Vencidos. PARABÉNS!!! ###\n\n", cidade1, 3);
        } else {        
            printf("\n### Empate Geral entre as Cartas. Cada carta venceu 2 Atributos! ###\n\n");
        }
    } else if ((resultado1 == 1 && resultado3 == 1 && resultado4 == 1) || (resultado2 == 1 && resultado3 == 1 && resultado4 == 1)) {
        printf("\n### O Vencedor da Partida foi: CARTA 1 (%s) com %d Atributos Vencidos. PARABÉNS!!! ###\n\n", cidade1, 3);
    } else if (resultado1 == 0 && resultado2 == 0) {
        if (resultado3 == 0 && resultado4 == 0) {
            printf("\n### O Vencedor da Partida foi: CARTA 2 (%s) com %d Atributos Vencidos. PARABÉNS!!! ###\n\n", cidade2, 4);
        } else if (resultado3 == 0 || resultado4 == 0) {
            printf("\n### O Vencedor da Partida foi: CARTA 2 (%s) com %d Atributos Vencidos. PARABÉNS!!! ###\n\n", cidade2, 3);
        } else {        
            printf("\n### Empate Geral entre as Cartas. Cada carta venceu 2 Atributos! ###\n\n");
        }
    } else if ((resultado1 == 0 && resultado3 == 0 && resultado4 == 0) || (resultado2 == 0 && resultado3 == 0 && resultado4 == 0)) {
        printf("\n### O Vencedor da Partida foi: CARTA 2 (%s) com %d Atributos Vencidos. PARABÉNS!!! ###\n\n", cidade2, 3);
    } else {        
        printf("\n### Empate Geral entre as Cartas. Cada carta venceu 2 Atributos! ###\n\n");
    }

    return 0;
}