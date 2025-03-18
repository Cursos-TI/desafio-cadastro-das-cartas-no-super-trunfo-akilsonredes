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
    int PrimeiroAtributo, SegundoAtributo;
    float resultadoA1, resultadoB1,resultadoA2, resultadoB2;

    //Inicio (1ª Carta)
    printf("***DIGITE OS ATRIBUTOS DA SUA CARTA*** \n");
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
    printf("***ATRIBUTOS DA SUA CARTA*** \n");
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
    printf("***DIGITE OS ATRIBUTOS DA CARTA DO ADVERSÁRIO*** \n");
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
    printf("ATRIBUTOS DA CARTA DO ADVERSÁRIO*** \n");
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

   //Escolha do Primeiro Atributo a ser comparado.

    printf("***PRIMEIRO ATRIBUTO A SER COMPARADO*** \n");
    printf("Digite (1) para ÁREA \n");
    printf("Digite (2) para POPULAÇÃO \n");
    printf("Digite (3) para PIB \n");
    printf("Digite (4) para PIB PERCAPTA \n");
    printf("Digite (5) para DENSIDADE POPULACIONAL \n");
    printf("Digite (6) para PONTOS TURÍSTICOS \n");
    printf("Digite (7) para SUPER PODER \n");
    
    printf("DIGITE O PRIMEIRO ATRIBUTO: ");
    scanf("%d", &PrimeiroAtributo);
   
    //1º SWITCH PARA ESCOLHA DO 1º ATRIBUTO

    switch (PrimeiroAtributo)
    {
    case 1:
    printf("Você escolheu o atributo ÁREA \n");
    if (areaA == areaB){
        printf ("Para o atributo Área houve empate com o valor %.2f para ambas as cartas \n", areaA);
    }
    else {areaA > areaB? printf ("Para o atributo Área você venceu, pois sua carta tem o valor %.2f e a carta do adversário tinha o valor %.2f \n", areaA, areaB) : printf ("Para o atributo Área você perdeu, pois sua carta tem o valor %.2f e a carta do adversário tinha o valor %.2f \n", areaA, areaB);}
    
    resultadoA1 = areaA;
    resultadoB1 = areaB;
    break;
    
    case 2:
    printf("Você escolheu o atributo POPULAÇÃO \n");
    if(populacaoA == populacaoB){
    printf ("Para o atributo População houve empate com o valor %d para ambas as cartas \n", populacaoA);   
    }
    else {populacaoA > populacaoB? printf ("Para o atributo população você venceu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", populacaoA, populacaoB) : printf ("Para o atributo população você perdeu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", populacaoA, populacaoB);}
    
    resultadoA1 = populacaoA;
    resultadoB1 = populacaoB;
    break;
    
    case 3:
    printf("Você escolheu o atributo PIB \n");
    if(pibA == pibB){
        printf ("Para o atributo PIB houve empate com o valor %.2f para ambas as cartas \n", pibA);   
    }
    else {pibA > pibB? printf ("Para o atributo PIB você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f /n", pibA, pibB) : printf ("Para o atributo população você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", pibA, pibB);}
    resultadoA1 = pibA;
    resultadoB1 = pibB;
    break;
    
    case 4:
    printf("Você escolheu o atributo PIB PERCAPTA \n");
    if(ppA == ppB){
        printf ("Para o atributo PIB PERCAPTA houve empate com o valor %.2f para ambas as cartas \n", ppA);   
   
    }else {ppA > ppB? printf ("Para o atributo PIB PERCAPTA você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f /n", ppA, ppB) : printf ("Para o atributo PIP PERCAPTA você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", ppA, ppB);}
    resultadoA1 = ppA;
    resultadoB1 = ppB;    
   break;
    
    case 5:
    printf("Você escolheu o atributo DENSIDADE POPULACIONAL \n");
    if(dpA == dpB){
        printf ("Para o atributo DENSIDADE POPULACIONAL houve empate com o valor %.2f para ambas as cartas \n", dpA);   
    }else {1/dpA > 1/dpB? printf ("Para o atributo Densidade populacional você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", dpA, dpB) : printf ("Para o atributo Densidade Populacional você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", dpA, dpB);}
    resultadoA1 = 1/dpA;
    resultadoB1 = 1/dpB;
    break;
    
    case 6:
    
    printf("Você escolheu o atributo PONTOS TURÍSTICOS \n");
    if(pontosTA == pontosTB){
        printf ("Para o atributo PONTOS TURÍSTICOS houve empate com o valor %d para ambas as cartas \n", pontosTA);   
    }else{pontosTA > pontosTB? printf ("Para o atributo Pontos  Turísticos você venceu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", pontosTA, pontosTB) : printf ("Para o atributo Pontos Turísticos você perdeu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", pontosTA, pontosTB);}
    resultadoA1 = pontosTA;
    resultadoB1 = pontosTB;  
    break;
    
    case 7:
    printf("Você escolheu o atributo SUPER PODER \n");
    if(spA == spB){
        printf ("Para o atributo SUPER PODER houve empate com o valor %.2f para ambas as cartas \n", spA);   
    }else {spA > spB? printf ("Para o atributo SuperPoder você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", spA, spB) : printf ("Para o atributo SuperPoder você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", spA, spB);}
    resultadoA1 = spA;
    resultadoB1 = spB;
    break;
    
    default:
    printf("Opção inválidade \n");   
    break;
    
}
    
    //ESCOLHA DO 2º ATRIBUTO.

    printf("***SEGUNDO ATRIBUTO A SER COMPARADO*** \n");
    printf("Digite (1) para ÁREA \n");
    printf("Digite (2) para POPULAÇÃO \n");
    printf("Digite (3) para PIB \n");
    printf("Digite (4) para PIB PERCAPTA \n");
    printf("Digite (5) para DENSIDADE POPULACIONAL \n");
    printf("Digite (6) para PONTOS TURÍSTICOS \n");
    printf("Digite (7) para SUPER PODER \n");
    
    printf("DIGITE O SEGUNDO ATRIBUTO: ");
    scanf("%d", &SegundoAtributo);
   
   if (PrimeiroAtributo == SegundoAtributo){
    printf ("Você Escolheu o Mesmo Atributo a Ser Comparado");
   }else {switch (SegundoAtributo)
    {
    case 1:
    printf("Você escolheu o atributo ÁREA \n");
    if (areaA == areaB){
        printf ("Para o atributo Área houve empate com o valor %.2f para ambas as cartas \n", areaA);
    }
    else {areaA > areaB? printf ("Para o atributo Área você venceu, pois sua carta tem o valor %.2f e a carta do adversário tinha o valor %.2f \n", areaA, areaB) : printf ("Para o atributo Área você perdeu, pois sua carta tem o valor %.2f e a carta do adversário tinha o valor %.2f \n", areaA, areaB);}
    
    resultadoA2 = areaA;
    resultadoB2 = areaB;
    break;
    
    case 2:
    printf("Você escolheu o atributo POPULAÇÃO \n");
    if(populacaoA == populacaoB){
    printf ("Para o atributo População houve empate com o valor %d para ambas as cartas \n", populacaoA);   
    }
    else {populacaoA > populacaoB? printf ("Para o atributo população você venceu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", populacaoA, populacaoB) : printf ("Para o atributo população você perdeu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", populacaoA, populacaoB);}
    
    resultadoA2 = populacaoA;
    resultadoB2 = populacaoB;
    break;
    
    case 3:
    printf("Você escolheu o atributo PIB \n");
    if(pibA == pibB){
        printf ("Para o atributo PIB houve empate com o valor %.2f para ambas as cartas \n", pibA);   
    }
    else {pibA > pibB? printf ("Para o atributo PIB você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f /n", pibA, pibB) : printf ("Para o atributo população você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", pibA, pibB);}
    resultadoA2 = pibA;
    resultadoB2 = pibB;
    break;
    
    case 4:
    printf("Você escolheu o atributo PIB PERCAPTA \n");
    if(ppA == ppB){
        printf ("Para o atributo PIB PERCAPTA houve empate com o valor %.2f para ambas as cartas \n", ppA);   
   
    }else {ppA > ppB? printf ("Para o atributo PIB PERCAPTA você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", ppA, ppB) : printf ("Para o atributo PIP PERCAPTA você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", ppA, ppB);}
    resultadoA2 = ppA;
    resultadoB2 = ppB;    
   break;
    
    case 5:
    printf("Você escolheu o atributo DENSIDADE POPULACIONAL \n");
    if(dpA == dpB){
        printf ("Para o atributo DENSIDADE POPULACIONAL houve empate com o valor %.2f para ambas as cartas \n", dpA);   
    }else {1/dpA > 1/dpB? printf ("Para o atributo Densidade populacional você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", dpA, dpB) : printf ("Para o atributo Densidade Populacional você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", dpA, dpB);}
    resultadoA2 = 1/dpA;
    resultadoB2 = 1/dpB;
    break;
    
    case 6:
    
    printf("Você escolheu o atributo PONTOS TURÍSTICOS \n");
    if(pontosTA == pontosTB){
        printf ("Para o atributo PONTOS TURÍSTICOS houve empate com o valor %d para ambas as cartas \n", pontosTA);   
    }else{pontosTA > pontosTB? printf ("Para o atributo Pontos  Turísticos você venceu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", pontosTA, pontosTB) : printf ("Para o atributo Pontos Turísticos você perdeu, pois sua carta tinha o valor %d e a carta do adversário tinha o valor %d \n", pontosTA, pontosTB);}
    resultadoA2 = pontosTA;
    resultadoB2 = pontosTB;  
    break;
    
    case 7:
    printf("Você escolheu o atributo SUPER PODER \n");
    if(spA == spB){
        printf ("Para o atributo SUPER PODER houve empate com o valor %.2f para ambas as cartas \n", spA);   
    }else {spA > spB? printf ("Para o atributo SuperPoder você venceu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", spA, spB) : printf ("Para o atributo SuperPoder você perdeu, pois sua carta tinha o valor %.2f e a carta do adversário tinha o valor %.2f \n", spA, spB);}
    resultadoA2 = spA;
    resultadoB2 = spB;
    break;
    
    default:
    printf("Opção inválidade \n");   
    break;
    
}

if ((resultadoA1+resultadoA2) == (resultadoB1+resultadoB2)){
    printf("***RESULTADO FINAL: Jogo empatado***");
   }else{if((resultadoA1+resultadoA2) > (resultadoB1+resultadoB2)){
    printf("***RESULTADO FINAL: Você ganhou com %.2f pontos contra %.2f pontos do adversário*** \n", resultadoA1+resultadoA2, resultadoB1+resultadoB2);
   }else {printf("***RESULTADO FINAL: Você perdeu com %.2f pontos contra %.2f pontos do adversário*** \n", resultadoA1+resultadoA2, resultadoB1+resultadoB2);}}

   }
   
   
    return 0;
}
