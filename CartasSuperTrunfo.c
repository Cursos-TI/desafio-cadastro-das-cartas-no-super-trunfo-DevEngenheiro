/*
 * Desafio Super Trunfo - Cidades
 * Tema 1 - Cadastro das Cartas
 * Desafio: nível novato
 * Criando as Cartas do Super Trunfo
 *
 * Objetivo:
 * - Ler dados de DUAS cartas de um "Super Trunfo de Cidades".
 * - Para cada carta, capturar: Estado (A-H), Código (ex: A01), Nome da Cidade,
 *   População (int), Área (float), PIB (float) e Número de Pontos Turísticos (int).
 * - Exibir os dados de forma organizada.
 */

 #include <stdio.h>    // Biblioteca padrão para funções de entrada e saída
 #include <string.h>   // Necessária para usar a função strcspn
 
 int main() {
     // Declaração das variáveis para a PRIMEIRA carta:
     char estado1;              // Armazena a letra do estado (A-H)
     char codigo1[4];           // Armazena o código da carta (ex: A01) + '\0'
     char nomeCidade1[50];      // Armazena o nome da cidade (até 49 caracteres + '\0')
     int populacao1;            // Armazena o número de habitantes
     float area1;               // Armazena a área em km²
     float pib1;                // Armazena o PIB da cidade
     int pontosTuristicos1;     // Armazena o número de pontos turísticos
 
     // Declaração das variáveis para a SEGUNDA carta:
     char estado2;              // Armazena a letra do estado (A-H)
     char codigo2[4];           // Armazena o código da carta (ex: A01) + '\0'
     char nomeCidade2[50];      // Armazena o nome da cidade (até 49 caracteres + '\0')
     int populacao2;            // Armazena o número de habitantes
     float area2;               // Armazena a área em km²
     float pib2;                // Armazena o PIB da cidade
     int pontosTuristicos2;     // Armazena o número de pontos turísticos
 
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
     printf("Digite o Codigo da Carta 1 (ex: A01): ");
     scanf("%s", codigo1);
 
     // Limpar o caractere de nova linha deixado pelo scanf
     getchar();
 
     // Nome da Cidade
     printf("Digite o Nome da Cidade (Carta 1): ");
     // Lê no máximo 49 caracteres da entrada padrão (stdin)
     fgets(nomeCidade1, 50, stdin);
     // Remove o caractere de nova linha, se presente
     nomeCidade1[strcspn(nomeCidade1, "\n")] = '\0';
 
     // População
     printf("Digite a Populacao da Cidade (Carta 1): ");
     scanf("%d", &populacao1);
 
     // Área
     printf("Digite a Area da Cidade em km2 (Carta 1): ");
     scanf("%f", &area1);
 
     // PIB
     printf("Digite o PIB da Cidade (Carta 1) em reais (use ponto para decimais): ");
     scanf("%f", &pib1);
 
     // Número de Pontos Turísticos
     printf("Digite o Numero de Pontos Turisticos (Carta 1): ");
     scanf("%d", &pontosTuristicos1);
 
     /*
      * ======= Leitura dos dados da Carta 2 =======
      */
     printf("\nDigite os dados da Carta 2:\n");
 
     // Estado (A-H)
     printf("Digite a letra do Estado (A-H) da Carta 2: ");
     scanf(" %c", &estado2);
 
     // Código (ex: A01)
     printf("Digite o Codigo da Carta 2 (ex: A01): ");
     scanf("%s", codigo2);
 
     // Limpar o caractere de nova linha deixado pelo scanf
     getchar();
 
     // Nome da Cidade
     printf("Digite o Nome da Cidade (Carta 2): ");
     // Usando fgets para ler nomes com espaços
     fgets(nomeCidade2, 50, stdin);
     // Remove o caractere de nova linha, se presente
     nomeCidade2[strcspn(nomeCidade2, "\n")] = '\0';
 
     // População
     printf("Digite a Populacao da Cidade (Carta 2): ");
     scanf("%d", &populacao2);
 
     // Área
     printf("Digite a Area da Cidade em km2 (Carta 2): ");
     scanf("%f", &area2);
 
     // PIB
     printf("Digite o PIB da Cidade (Carta 2) em reais (use ponto para decimais): ");
     scanf("%f", &pib2);
 
     // Número de Pontos Turísticos
     printf("Digite o Numero de Pontos Turisticos (Carta 2): ");
     scanf("%d", &pontosTuristicos2);
 
     /*
      * ======= Exibição dos dados =======
      */
     // Exibindo a PRIMEIRA carta
     printf("\n============ Carta 1 ============\n");
     printf("Estado: %c\n", estado1);
     printf("Codigo: %s\n", codigo1);
     printf("Nome da Cidade: %s\n", nomeCidade1);
     printf("Populacao: %d\n", populacao1);
     printf("Area: %.2f km2\n", area1);
     printf("PIB: %.2f (em reais)\n", pib1);
     printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
     printf("=================================\n");
 
     // Exibindo a SEGUNDA carta
     printf("\n============ Carta 2 ============\n");
     printf("Estado: %c\n", estado2);
     printf("Codigo: %s\n", codigo2);
     printf("Nome da Cidade: %s\n", nomeCidade2);
     printf("Populacao: %d\n", populacao2);
     printf("Area: %.2f km2\n", area2);
     printf("PIB: %.2f (em reais)\n", pib2);
     printf("Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
     printf("=================================\n");
 
     return 0; // Retorno padrão da função main
 }