#include <stdio.h>

// Desafio Super Trunfo - Países
// Tema 1 - Cadastro das Cartas
// Este código inicial serve como base para o desenvolvimento do sistema de cadastro de cartas de cidades.
// Siga os comentários para implementar cada parte do desafio.
//Teste larissa

int main() {
    // Sugestão: Defina variáveis separadas para cada atributo da cidade.
    // Exemplos de atributos: código da cidade, nome, população, área, PIB, número de pontos turísticos.
    
    // Cadastro das Cartas:
    // Sugestão: Utilize a função scanf para capturar as entradas do usuário para cada atributo.
    // Solicite ao usuário que insira as informações de cada cidade, como o código, nome, população, área, etc.
    
    // Exibição dos Dados das Cartas:
    // Sugestão: Utilize a função printf para exibir as informações das cartas cadastradas de forma clara e organizada.
    // Exiba os valores inseridos para cada atributo da cidade, um por linha.

    printf("Desafio Super Trunfo - Países - Tema 1 - Cadastro das Cartas \n");

    //Declaração de Variáveis
    char estado [30];
    char cidade [30];
    char codigo [30];
    float area, pib;
    int populacao, pontos;

    //Inicio (1ª Carta)
    printf("digite o nome do estado: ");
    scanf("%s",estado);
    printf("Digite o nome da cidade: ");
    scanf("%s",cidade);
    printf("Digite o código da carta: ");
    scanf("%s",codigo);
    printf("Digite a área: ");
    scanf("%f",&area);
    printf("Digite o PIB: ");
    scanf("%f",&pib);
    printf("Digite a População: ");
    scanf("%d",&populacao);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontos);
    //Impressão 1ª Carta
    printf("CARTA 1 \n");
    printf("Estado: %s \n",estado);
    printf("Cidade: %s \n",cidade);
    printf("código: %s \n",codigo);
    printf("Área: %.2f \n",area);
    printf("PIB: %.2f \n",pib);
    printf("População: %d \n",populacao);
    printf("Pontos: %d \n",pontos);

    //Inicio (2ª Carta)
    printf("digite o nome do estado: ");
    scanf("%s",estado);
    printf("Digite o nome da cidade: ");
    scanf("%s",cidade);
    printf("Digite o código da carta: ");
    scanf("%s",codigo);
    printf("Digite a área: ");
    scanf("%f",&area);
    printf("Digite o PIB: ");
    scanf("%f",&pib);
    printf("Digite a População: ");
    scanf("%d",&populacao);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontos);
    //Impressão 2ª Carta
    printf("CARTA 2 \n");
    printf("Estado: %s \n",estado);
    printf("Cidade: %s \n",cidade);
    printf("código: %s \n",codigo);
    printf("Área: %.2f \n",area);
    printf("PIB: %.2f \n",pib);
    printf("População: %d \n",populacao);
    printf("Pontos: %d \n",pontos);

    return 0;
}
