

#include <stdio.h>

int main(){

    char estado;          // Estado (A-H)
    char codigo[50];       // Código da carta (ex: A01, B03)
    char cidade[50];      // Nome da cidade
    int populacao;        // População
    float area;           // Área em km²
    float pib;            // PIB
    int pontos_turisticos; // Número de pontos turísticos



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

        printf("\n --- Dados da carta ---\n");
        printf("Estado: %c\n", estado);
        printf("Código: %s\n", codigo);
        printf("Cidade: %s\n", cidade);
        printf("População: %d\n", populacao);
        printf("Área: %.2f km²\n", area);
        printf("PIB: %.2f\n", pib);
        printf("Pontos Turísticos: %d\n", pontos_turisticos);

        return 0;
        }