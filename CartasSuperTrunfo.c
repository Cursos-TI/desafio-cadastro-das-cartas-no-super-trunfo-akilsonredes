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
    char estadoA [30];
    char estadoB [30];
    char cidadeA [30];
    char cidadeB [30];
    char codigoA [30];
    char codigoB [30];
    float areaA,areaB, pibA,pibB, dpA, dpB, ppA, ppB, spA, spB;
    int populacaoA,populacaoB;
    int pontosTA, pontosTB;

    //Inicio (1ª Carta)
    printf("digite o nome do estado: ");
    scanf("%s",estadoA);
    printf("Digite o nome da cidade: ");
    scanf("%s",cidadeA);
    printf("Digite o código da carta: ");
    scanf("%s",codigoA);
    printf("Digite a área: ");
    scanf("%f",&areaA);
    printf("Digite o PIB: ");
    scanf("%f",&pibA);
    printf("Digite a População: ");
    scanf("%d",&populacaoA);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontosTA);
    dpA = populacaoA/areaA;
    ppA = pibA/populacaoA;
    spA = areaA+pibA+populacaoA+pontosTA+(1/dpA)+ppA+spA;
    
    //Impressão 1ª Carta
    printf("CARTA 1 \n");
    printf("Estado: %s \n",estadoA);
    printf("Cidade: %s \n",cidadeA);
    printf("código: %s \n",codigoA);
    printf("Área: %.2f \n",areaA);
    printf("PIB: %.2f \n",pibA);
    printf("População: %d \n",populacaoA);
    printf("Pontos Turísticos: %d \n",pontosTA);
    printf("A densidade populacional é: %.2f \n", dpA);
    printf("O PIB per capta é: %.2f \n", ppA);
    printf("O Super Poder é: %.2f \n", spA);

    //Inicio (2ª Carta)
    printf("digite o nome do estado: ");
    scanf("%s",estadoB);
    printf("Digite o nome da cidade: ");
    scanf("%s",cidadeB);
    printf("Digite o código da carta: ");
    scanf("%s",codigoB);
    printf("Digite a área: ");
    scanf("%f",&areaB);
    printf("Digite o PIB: ");
    scanf("%f",&pibB);
    printf("Digite a População: ");
    scanf("%d",&populacaoB);
    printf("Digite a quantidade de pontos turísticos: ");
    scanf("%d",&pontosTB);
    dpB = populacaoB/areaB;
    ppB = pibB/populacaoB;
    spB = areaB+pibB+populacaoB+pontosTB+(1/dpB)+ppB+spB;
   
    //Impressão 2ª Carta
    printf("CARTA 2 \n");
    printf("Estado: %s \n",estadoB);
    printf("Cidade: %s \n",cidadeB);
    printf("código: %s \n",codigoB);
    printf("Área: %.2f \n",areaB);
    printf("PIB: %.2f \n",pibB);
    printf("População: %d \n",populacaoB);
    printf("Pontos Turísticos: %d \n",pontosTB);
    printf("A Densidade populacional é: %.2f \n", dpB);
    printf("O PIB per capta é: %.2f \n", ppB);
    printf("O Super Poder é: %.2f \n", spB);

    //CÓDIGO DA COMPARAÇÃO DAS CARTAS FEITA PARA O DESAFIO DO NÍVEL MESTRE DO 1º TEMA DE ESTUDO 
    //printf("A ÁREA DE (%.2f) DA CARTA 1 VENCEU A AREA DE (%.2f) DA CARTA 2: %d \n",areaA,areaB, areaA > areaB);
    //printf("A POPULAÇÃO DE (%u) DA CARTA 1 VENCEU A POPULAÇÃO DE (%u) DA CARTA 2: %d \n",populacaoA, populacaoB, populacaoA > populacaoB);
    //printf("O PIB DE (%.2f) DA CARTA 1 VENCEU O PIB DE (%.2f) DA CARTA 2: %d \n",pibA, pibB, pibA > pibB);
    //printf("O PIB PER CAPTA DE (%.2f) DA CARTA 1 VENCEU O PIB PER CAPTA DE (%.2f) DA CARTA 2: %d \n",ppA, ppB, ppA > ppB);
    //printf("A DENSIDADE POPULACIONAL DE (%.2f) DA CARTA 1 VENCEU A DENSIDADE POPULACIONAL DE (%.2f) DA CARTA 2: %d \n",dpA, dpB, dpA < dpB);
    //printf("A QUANTIDADE DE PONTOS TURÍSTICOS DE (%d) DA CARTA 1 VENCEU A QUANTIDADE DE PONTOS TURÍSTICOS DE (%d) DA CARTA 2: %d \n",pontosTA, pontosTB, pontosTA > pontosTB);
    //printf("O SUPER PODER DE (%.2f) DA CARTA 1 VENCEU O SUPER PODER DE (%.2f) DA CARTA 2: %d",spA, spB, spA > spB);
    
    // CÓDIGO DE COMPARAÇÃO DAS CARTAS PARA O DESAFIO DO NIVEL NOVATO DO 2º TEMA DE ESTUDO (AGORA UTILIZANDO O IF/ELSE)

    //Atributo Área

    if (areaA > areaB) {
        printf("Para o atributo área a carta 1 com (%.2f)km² venceu a carta 2 com (%.2f)km²! \n", areaA, areaB);
    } else{
        printf("Para o atributo ÁREA a carta 2 com (%.2f)km² venceu a carta 1 com (%.2f)km²! \n", areaB, areaA);
    }

    if(populacaoA > populacaoB){
        printf("Para o atributo POPULAÇÃO a carta 1 com (%d) pessoas venceu a carta 2 com (%d)pessoas! \n", populacaoA, populacaoB);
    }else{
        printf("Para o atributo POPULAÇÃO a carta 2 com (%d) pessoas venceu a carta 1 com (%d)pessoas! \n", populacaoB, populacaoA);
    }
    
    if (pibA > pibB){
        printf("Para o atributo PIB a carta 1 com R$(%.2f) venceu a carta 2 com R$(%.2f) \n", pibA, pibB);
    }else{
        printf("Para o atributo PIB a carta 2 com R$(%.2f) venceu a carta 1 com R$(%.2f) \n", pibB, pibA); 
    }
    
    if(ppA > ppB){
        printf("Para o atributo PIB PERCAPTA a carta 1 com R$(%.2f) venceu a carta 2 com R$(%.2f) \n", ppA, ppB); 
    }else{
        printf("Para o atributo PIB PERCAPTA a carta 2 com R$(%.2f) venceu a carta 1 com R$(%.2f) \n", ppB, ppA);
    }
    
    if(dpA < dpB){
        printf("Para o atributo DENSIDADE POPULACIONAL a carta 1 com (%.2f) habitantes venceu a carta 2 com (%.2f) habitantes \n", dpA, dpB); 
    }else{
        printf("Para o atributo DENSIDADE POPULACIONAL a carta 2 com (%.2f) habitantes venceu a carta 1 com (%.2f) habitantes \n", dpB, dpA);
    }

    if(pontosTA > pontosTB){
        printf("Para o atributo PONTOS TURÍSTICOS a carta 1 com (%.d) venceu a carta 2 com (%d) \n", pontosTA, pontosTB); 
    }else{
        printf("Para o atributo PONTOS TURÍSTICOS a carta 2 com (%.d) venceu a carta 1 com (%d) \n", pontosTB, pontosTA);
    }

    if(spA > spB){
        printf("Para o atributo SUPER PODER a carta 1 com (%.2f) venceu a carta 2 com (%.2f) \n", spA, spB); 
    }else{
        printf("Para o atributo SUPER PODER a carta 2 com (%.2f) venceu a carta 1 com (%.2f) \n", spB, spA);
    }

    return 0;
}
