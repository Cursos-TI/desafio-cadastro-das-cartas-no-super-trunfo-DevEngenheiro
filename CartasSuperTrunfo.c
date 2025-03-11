/*
 * Desafio Super Trunfo - Cidades
 * Tema 1 - Cadastro das Cartas
 * Desafio: nível aventureiro
 * Criando as Cartas do Super Trunfo
 *
 * Objetivo:
 * - Ler dados de DUAS cartas de um "Super Trunfo de Cidades".
 * - Para cada carta, capturar: Estado (A-H), Código (ex: A01), Nome da Cidade,
 *   População (int), Área (float), PIB (float) e Número de Pontos Turísticos (int).
 * - Calcular a Densidade Populacional: dividir a população pela área da cidade,
 *   resultando em habitantes por km² (armazenado como float).
 * - Calcular o PIB per Capita: dividir o PIB da cidade pela sua população,
 *   indicando a riqueza média por pessoa (armazenado como float).
 * - Exibir os resultados: estado, código da carta, nome da cidade, população, área, PIB e número de pontos 
 *   turísticos para duas cartas, também mostrar a densidade populacional e o PIB per capita,
 *   formatados com duas casas decimais.
 */

 #include <stdio.h>    // Biblioteca padrão para funções de entrada e saída
 #include <string.h>   // Necessária para usar a função strcspn
 
 int main() {
     // Declaração das variáveis para a PRIMEIRA carta:
     char estado1;              // Armazena a letra do estado (A-H)
     char codigo1[4];           // Armazena o código da carta (ex: A01) + '\0'
     char nome_cidade1[50];      // Armazena o nome da cidade (até 49 caracteres + '\0')
     int populacao1;            // Armazena o número de habitantes
     float area1;               // Armazena a área em km²
     float pib1;                // Armazena o PIB da cidade
     int pontos_tur1;     // Armazena o número de pontos turísticos
     float densidade1;          // Armazena a densidade demográfica
     float pib_per_capita1;     // Armazena o PIB per capita
 
     // Declaração das variáveis para a SEGUNDA carta:
     char estado2;              // Armazena a letra do estado (A-H)
     char codigo2[4];           // Armazena o código da carta (ex: A01) + '\0'
     char nome_cidade2[50];      // Armazena o nome da cidade (até 49 caracteres + '\0')
     int populacao2;            // Armazena o número de habitantes
     float area2;               // Armazena a área em km²
     float pib2;                // Armazena o PIB da cidade
     int pontos_tur2;     // Armazena o número de pontos turísticos
     float densidade2;          // Armazena a densidade demográfica
     float pib_per_capita2;     // Armazena o PIB per capita
 
     // Mensagem de boas-vindas e instruções para o usuário
     printf("Bem vindo ao Super Trunfo Cidades\n");
     printf("-----------------------------------\n");
 
     /*
      * ======= Leitura dos dados da Carta 1 =======
      */
     printf("\nDigite os dados da Carta 1:\n");
 
     // Estado (A-H)
     printf("Digite a letra do Estado (A-H) da Carta 1: ");
     scanf(" %c", &estado1);
 
     // Código (ex: A01)
     printf("Digite o código da Carta 1 (ex: A01): ");
     scanf("%s", codigo1);
 
     // Limpar o caractere de nova linha deixado pelo scanf
     getchar();
 
     // Nome da Cidade
     printf("Digite o nome da cidade (Carta 1): ");
     // Lê no máximo 49 caracteres da entrada padrão (stdin)
     fgets(nome_cidade1, 50, stdin);
     // Remove o caractere de nova linha, se presente
     nome_cidade1[strcspn(nome_cidade1, "\n")] = '\0';
 
     // População
     printf("Digite a população da cidade (Carta 1): ");
     scanf("%d", &populacao1);
 
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
 
     /*
      * ======= Leitura dos dados da Carta 2 =======
      */
     printf("\nDigite os dados da Carta 2:\n");
 
     // Estado (A-H)
     printf("Digite a letra do Estado (A-H) da Carta 2: ");
     scanf(" %c", &estado2);
 
     // Código (ex: A01)
     printf("Digite o código da Carta 2 (ex: A02): ");
     scanf("%s", codigo2);
 
     // Limpar o caractere de nova linha deixado pelo scanf
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
 
     /*
      * ======= Exibição dos dados =======
      */
     printf("\n======= Super Trunfo Cidades ========\n");

     // Exibindo a PRIMEIRA carta
     printf("\n============== Carta 1 ==============\n");
     printf("Estado: %c\n", estado1);
     printf("Código: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nome_cidade1);
     printf("População: %d\n", populacao1);
     printf("Área: %.2f km2\n", area1);
     printf("PIB: R$ %.2f (em reais)\n", pib1);
     printf("Número de Pontos Turísticos: %d\n", pontos_tur1);
     printf("Densidade Demográfica: %.2f hab/km2\n", densidade1);
     printf("PIB per capita: R$ %.2f (em reais)\n", pib_per_capita1);
     printf("=====================================\n");
 
     // Exibindo a SEGUNDA carta
     printf("\n============== Carta 2 ==============\n");
     printf("Estado: %c\n", estado2);
     printf("Código: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nome_cidade2);
     printf("População: %d\n", populacao2);
     printf("Área: %.2f km2\n", area2);
     printf("PIB: R$ %.2f (em reais)\n", pib2);
     printf("Número de Pontos Turísticos: %d\n", pontos_tur2);
     printf("Densidade Demográfica: %.2f hab/km2\n", densidade2);
     printf("PIB per capita: R$ %.2f (em reais)\n", pib_per_capita2);
     printf("=====================================\n");
 
     return 0; // Retorno padrão da função main
 }