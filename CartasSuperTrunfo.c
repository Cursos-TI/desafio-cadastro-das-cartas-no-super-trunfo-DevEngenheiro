/*
 * Desafio Super Trunfo - Cidades
 * Tema 1 - Batalha de Cartas no Super Trunfo
 * Desafio: nível mestre
 * 
 * Objetivo:
 * - Ler dados de DUAS cartas de um "Super Trunfo de Cidades".
 * - Para cada carta, capturar: Estado (A-H), Código (ex: A01), Nome da Cidade,
 *   População (unsigned long int), Área (float), PIB (float) e Número de Pontos Turísticos (int).
 * - Calcular os seguintes atributos para cada carta:
 *     - Densidade Populacional = população / área
 *     - PIB per Capita = PIB / população
 *     - Super Poder = (população + área + PIB + número de pontos turísticos + PIB per Capita + (1 / densidade populacional))
 * - Comparar as cartas, atributo por atributo:
 *     - Para população, área, PIB, pontos turísticos, PIB per Capita e Super Poder: vence a carta com o maior valor.
 *     - Para densidade populacional: vence a carta com o menor valor.
 * - Exibir o resultado das comparações: 
 *     - (1) se Carta 1 vence; (0) se Carta 2 vence.
 */

 #include <stdio.h>    // Biblioteca padrão para funções de entrada e saída
 #include <string.h>   // Necessária para funções de manipulação de strings (ex.: strcspn)
 
 int main() {
     // Declaração das variáveis para a PRIMEIRA carta:
     char estado1;                  // Armazena a letra do estado (A-H)
     char codigo1[4];               // Armazena o código da carta (ex: A01) + '\0'
     char nome_cidade1[50];         // Armazena o nome da cidade (até 49 caracteres + '\0')
     unsigned long int populacao1;  // População da cidade (valores grandes)
     float area1;                   // Área da cidade em km²
     float pib1;                    // PIB da cidade
     int pontos_tur1;               // Número de pontos turísticos
     float densidade1;              // Densidade populacional (população / área)
     float pib_per_capita1;         // PIB per Capita (PIB / população)
     float super_poder1;            // Super Poder da carta
 
     // Declaração das variáveis para a SEGUNDA carta:
     char estado2;                  // Armazena a letra do estado (A-H)
     char codigo2[4];               // Armazena o código da carta (ex: A01) + '\0'
     char nome_cidade2[50];         // Armazena o nome da cidade (até 49 caracteres + '\0')
     unsigned long int populacao2;  // População da cidade
     float area2;                   // Área da cidade em km²
     float pib2;                    // PIB da cidade
     int pontos_tur2;               // Número de pontos turísticos
     float densidade2;              // Densidade populacional
     float pib_per_capita2;         // PIB per Capita
     float super_poder2;            // Super Poder da carta
 
     // Mensagem de boas-vindas e instruções para o usuário
     printf("Bem vindo ao Super Trunfo Cidades\n");
     printf("-----------------------------------\n");
 
     /*
      * ======= LEITURA DOS DADOS DA CARTA 1 =======
      */
     printf("\nDigite os dados da Carta 1:\n");
 
     // Estado (A-H)
     printf("Digite a letra do Estado (A-H) da Carta 1: ");
     scanf(" %c", &estado1);
 
     // Código (ex: A01)
     printf("Digite o código da Carta 1 (ex: A01): ");
     scanf("%s", codigo1);
 
     // Limpar no buffer o caractere de nova linha deixado pelo scanf
     getchar();
 
    // Nome da Cidade (usa fgets para permitir espaços)
    printf("Digite o nome da cidade (Carta 1): ");
    fgets(nome_cidade1, 50, stdin);
    nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0'; // Remove o '\n'

    // População (unsigned long int: %lu)
    printf("Digite a população da cidade (Carta 1): ");
    scanf("%lu", &populacao1);
 
     // Área
     printf("Digite a área da cidade em km2 (Carta 1): ");
     scanf("%f", &area1);
 
     // PIB
     printf("Digite o PIB da cidade (Carta 1) em reais (use ponto para decimais): ");
     scanf("%f", &pib1);
 
     // Número de Pontos Turísticos
     printf("Digite o número de Pontos Turísticos (Carta 1): ");
     scanf("%d", &pontos_tur1);

     // Densidade Demográfica
     densidade1 = (float)populacao1 / area1;

     // PIB per capita
     pib_per_capita1 = pib1 / (float)populacao1;

     // Super Poder = soma dos atributos (inverso da densidade aumenta o poder se a densidade for menor)
     super_poder1 = (float)populacao1 + area1 + pib1 + (float)pontos_tur1 + pib_per_capita1 + (1.0f / densidade1);

     /*
      * ======= LEITURA DOS DADOS DA CARTA 2 =======
      */
     printf("\nDigite os dados da Carta 2:\n");
 
     // Estado (A-H)
     printf("Digite a letra do Estado (A-H) da Carta 2: ");
     scanf(" %c", &estado2);
 
     // Código (ex: A01)
     printf("Digite o código da Carta 2 (ex: A02): ");
     scanf("%s", codigo2);
 
     // Limpar no buffer o caractere de nova linha deixado pelo scanf
     getchar();
 
     // Nome da Cidade
     printf("Digite o nome da cidade (Carta 2): ");
     // Usando fgets para ler nomes com espaços
     fgets(nome_cidade2, 50, stdin);
     // Remove o caractere de nova linha, se presente
     nome_cidade2[strcspn(nome_cidade2, "\n")] = '\0';
 
     // População
     printf("Digite a população da cidade (Carta 2): ");
     scanf("%d", &populacao2);
 
     // Área
     printf("Digite a área da cidade em km2 (Carta 2): ");
     scanf("%f", &area2);
 
     // PIB
     printf("Digite o PIB da cidade (Carta 2) em reais (use ponto para decimais): ");
     scanf("%f", &pib2);
 
     // Número de Pontos Turísticos
     printf("Digite o número de Pontos Turísticos (Carta 2): ");
     scanf("%d", &pontos_tur2);
    
     // Densidade Demográfica
     densidade2 = (float)populacao2 / area2;
     
     // PIB per capita
     pib_per_capita2 = pib2 / (float)populacao2;
     
     // Super Poder = soma dos atributos (inverso da densidade aumenta o poder se a densidade for menor)
     super_poder2 = (float)populacao2 + area2 + pib2 + (float)pontos_tur2 + pib_per_capita2 + (1.0f / densidade2);

     /*
      * ======= EXIBIÇÃO DOS DADOS DAS CARTAS =======
      */
     printf("\n======= Super Trunfo Cidades ========\n");

     // Exibição da Carta 1:
     printf("\n============== Carta 1 ==============\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nome_cidade1);
     printf("População: %lu\n", populacao1);
     printf("Área: %.2f km2\n", area1);
     printf("PIB: R$ %.2f\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
     printf("Densidade Populacional: %.2f hab/km2\n", densidade1);
     printf("PIB per Capita: R$ %.2f\n", pib_per_capita1);
     printf("Super Poder: %.2f\n", super_poder1);
     printf("=====================================\n");

     // Exibição da Carta 2:
     printf("\n============== Carta 2 ==============\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nome_cidade2);
     printf("População: %lu\n", populacao2);
     printf("Área: %.2f km2\n", area2);
     printf("PIB: R$ %.2f\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
     printf("Densidade Populacional: %.2f hab/km2\n", densidade2);
     printf("PIB per Capita: R$ %.2f\n", pib_per_capita2);
     printf("Super Poder: %.2f\n", super_poder2);
     printf("=====================================\n");

     /* ========= COMPARAÇÃO DAS CARTAS ========= */
     printf("\n======= Comparação de Cartas ========\n");

     // Para cada atributo, a expressão retorna 1 se a Carta 1 vencer e 0 se a Carta 2 vencer.
     // Como para densidade populacional o menor vence

     int cmp_pop   = (populacao1 > populacao2);    // População: maior vence
     int cmp_area  = (area1 > area2);               // Área: maior vence
     int cmp_pib   = (pib1 > pib2);                 // PIB: maior vence
     int cmp_pts   = (pontos_tur1 > pontos_tur2);   // Pontos Turísticos: maior vence
     int cmp_dens  = (densidade1 < densidade2);       // Densidade Populacional: menor vence
     int cmp_pibpc = (pib_per_capita1 > pib_per_capita2); // PIB per Capita: maior vence
     int cmp_super = (super_poder1 > super_poder2);   // Super Poder: maior vence

     // Imprime os resultados usando as variáveis calculadas
     printf("População: Carta %d venceu (%d)\n", 2 - cmp_pop, cmp_pop);
     printf("Área: Carta %d venceu (%d)\n", 2 - cmp_area, cmp_area);
     printf("PIB: Carta %d venceu (%d)\n", 2 - cmp_pib, cmp_pib);
     printf("Pontos Turísticos: Carta %d venceu (%d)\n", 2 - cmp_pts, cmp_pts);
     printf("Densidade Populacional: Carta %d venceu (%d)\n", 2 - cmp_dens, cmp_dens);
     printf("PIB per Capita: Carta %d venceu (%d)\n", 2 - cmp_pibpc, cmp_pibpc);
     printf("Super Poder: Carta %d venceu (%d)\n", 2 - cmp_super, cmp_super);
     printf("=====================================\n");

     return 0; // Indica que o programa terminou com sucesso
}