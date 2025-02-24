#include <stdio.h>


    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

int main(){

    char estado;          // Estado (A-H)
    char codigo[50];       // Código da carta (ex: A01, B03)
    char cidade[50];      // Nome da cidade
    int populacao;        // População
    float area;           // Área em km²
    float pib;            // PIB
    int pontos_turisticos; // Número de pontos turísticos
    float densidade;
    float capita;




        printf("Digite o estado (A-H): ");
        scanf("%c", &estado);
     
        printf("Digite o número da carta (01-04): ");
        scanf("%s", &codigo);
  
        printf("Digite o nome da cidade: ");
        scanf("%s", &cidade);

        printf("Digite a população: ");
        scanf("%d", &populacao);

        printf("Digite a área (em km²): ");
        scanf("%f", &area);

        printf("Digite o PIB: ");
        scanf("%f", &pib);

        printf("Digite o número de pontos turísticos: ");
        scanf("%d", &pontos_turisticos);

        densidade = populacao / area;
        capita = pib / populacao;    

        printf("\n --- Dados da carta ---\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", pontos_turisticos);
        printf("Densidade é: %f\n", densidade);
        printf("O PIB per capita é: %f\n", capita);

        return 0;
        }
