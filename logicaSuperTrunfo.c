#include <stdio.h>
#include <stdlib.h>

int main() {
    // ======CARTAS 1 ====== //
    char pais1[30];                                                   // País 
    char codigo1[4];                                                  // Código das cartas
    char capital1[30];                                                // Nome da Capital
    unsigned long int populacao1;                                     // População
    float area1, pib1;                                                // Área (km²) e PIB (em bilhões)                                        
    int pontosTuristicos1, escolhaJogador;                            // Número de pontos turísticos
    float densidade1, perCapita1, superPoder1;                        // Densidade populacional, PIB, PerCapita, SuperPoder             
    
   //====== Carta 2 ==== //
   char pais2[30];
   char codigo2[4];
   char capital2[30];
   unsigned long int populacao2;
   float area2, pib2;
   int pontosTuristicos2;
   float densidade2, perCapita2, superPoder2;
    
   // ===== Entrada de dados (Carta 1) ===== //
    printf("Digite os dados da Carta 1:\n");
    printf("Pais (A-Z): ");
    scanf(" %29[^\n]%*c", pais1); 
    printf("Codigo da Carta (A01): ");
    scanf(" %3s", codigo1); 
    printf("Nome da Capital: ");
    scanf(" %29[^\n]%*c", capital1);
    printf("Populacao: ");
    scanf(" %lu", &populacao1);
    printf("area (km2): ");
    scanf(" %f", &area1);
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib1);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos1);
    densidade1 = (float) populacao1 /  area1;
    perCapita1 = (pib1 * 1e9) / (float) populacao1;
    superPoder1 = (int) populacao1 + pontosTuristicos1 + (float) perCapita1 + (1/ densidade1);  
    printf("\n\n");

// ===== Entrada de dados (Carta 2) ===== //
    printf("Digite os dados da Carta 2:\n");
    printf("Pais (A-Z): ");
    scanf(" %29[^\n]%*c", pais2);
    printf("Codigo da Carta (B02): ");
    scanf(" %3s", codigo2);
    printf("Nome da Capital: ");
    scanf(" %29[^\n]%*c", capital2);
    printf("Populacao: ");
    scanf(" %lu", &populacao2);
    printf("area (km2): ");
    scanf(" %f", &area2);
    printf("PIB (em bilhoes): ");
    scanf(" %f", &pib2);
    printf("Numero de Pontos Turisticos: ");
    scanf(" %d", &pontosTuristicos2);
    densidade2 = (float) populacao2 /  area2;
    perCapita2 = (pib2 * 1e9) / (float) populacao2;
    superPoder2 = (int) populacao2 + pontosTuristicos2 + (float) perCapita2 + (1/ densidade2);
    printf("\n\n");

    // ===== Saída formatada ===== //
    printf("*** CARTA 1 ***\n");
    printf("Pais: %s\n", pais1);
    printf("Codigo: %s\n", codigo1);
    printf("Nome da Capital: %s\n", capital1);
    printf("1. Populacao: %lu\n", populacao1);
    printf("2. Area: %.2f km2\n", area1);
    printf("3. PIB: %.2f bilhoes de reais\n", pib1);
    printf("4. Numero de Pontos Turisticos: %d\n", pontosTuristicos1);
    printf("5. Densidade populacional: %.2f\n", densidade1);
    printf("6. Renda perCapita: %.2f\n", perCapita1);
    printf("7. SuperPoder e: %.2f\n", superPoder1);
    superPoder1;
    printf("\n\n");
    printf("Escolha um atributo para comparar (1-7): ");
    scanf("%d", &escolhaJogador);
    printf("\n\n");
    
 
     
    printf("*** CARTA 2 ***\n");
    printf("Escolha seu Pais");
    printf("Pais: %s\n", pais2);
    printf("Codigo: %s\n", codigo2);
    printf("Nome da Capital: %s\n", capital2);
    printf("1. Populacao: %lu\n", populacao2);
    printf("2. Area: %.2f km2\n", area2);
    printf("3. PIB: %.2f bilhoes de reais\n", pib2);
    printf("4. Numero de Pontos Turisticos: %d\n", pontosTuristicos2);
    printf("5. Densidade populacional: %.2f\n", densidade2);
    printf("6. Renda PerCapita: %.2f\n", perCapita2);
    printf("7. O superPoder e: %.2f\n", superPoder2);
    superPoder2;
    printf("\n\n");

    
    //=== comparação das cartas ===//
    
    switch(escolhaJogador){
     case 1:
     printf("atributo escolhido: Populacao - \n");
     if(populacao1 > populacao2){
     printf("carta 1 venceu! (%lu > %lu)\n", populacao1, populacao2);
     }else if(populacao1 < populacao2){
     printf("carta 2 venceu! (%lu < %lu)\n", populacao1, populacao2);
     }else{
     printf("Empate! (%lu == %lu)\n", populacao1, populacao2);
     }
     break;
     case 2:
     printf("atributo escolhido: Area - \n");
     if(area1 > area2){
     printf("carta 1 venceu! (%.2f > %.2f)\n", area1, area2);
     }else if(area1 < area2){
     printf("carta 2 venceu! (%.2f < %.2f)\n", area1, area2);
     }else{
     printf("Empate! (%.2f == %.2f)\n", area1, area2);
     }
     break;
     case 3:
     printf("atributo escolhido: PIB - \n");
     if(pib1 > pib2){
     printf("carta 1 venceu! (%.2f > %.2f)\n", pib1, pib2);
     }else if(pib1 < pib2){
     printf("carta 2 venceu! (%.2f < %.2f)\n", pib1, pib2);
     }else{ 
     printf("Empate! (%.2f == %.2f)\n", pib1, pib2); 
     }
     break;
     case 4:
     printf("atributo escolhido: PontosTurisco - \n");
     if(pontosTuristicos1 > pontosTuristicos2){
     printf("carta 1 venceu! (%d > %d)\n", pontosTuristicos1, pontosTuristicos2);
     }else if(pontosTuristicos1 < pontosTuristicos2){ 
     printf("carta 2 venceu! (%d < %d)\n", pontosTuristicos1, pontosTuristicos2);
     }else{ 
     printf("Empate! (%d == %d)\n", pontosTuristicos1, pontosTuristicos2);
     }
     break;
     case 5:
     printf("atributo escolhido: Densidade -\n");
     if(densidade1 < densidade2){
     printf("carta 1 venceu! (%.2f < %.2f)\n", densidade1, densidade2);
     }else if(densidade2 < densidade1){ 
     printf("carta 2 venceu! (%.2f < %.2f)\n", densidade2, densidade1);
     }else{ 
     printf("Empate! (%.2f == %.2f)\n", densidade1, densidade2);
     }
     break;
     case 6:
     printf("atributo escolhido: PerCapita - \n");
     if(perCapita1 > perCapita2){
     printf("carta 1 venceu (%.2f > %.2f)\n", perCapita1, perCapita2);
     }else if(perCapita1 < perCapita2){  
     printf("carta 2 vence (%.2f < %.2f)\n", perCapita1, perCapita2);
     }else{ 
     printf("Empate! (%.2f == %.2f)\n", perCapita1, perCapita2);
     }
     break;
     case 7:
     printf("atributo escolhido: superPoder - \n");
     if(superPoder1 > superPoder2){
     printf("carta 1 venceu (%.2f > %.2f)\n", superPoder1, superPoder2);
     }else if(superPoder1 < superPoder2){  
     printf("carta 2 vence (%.2f < %.2f)\n", superPoder1, superPoder2);
     }else{ 
     printf("Empate! (%.2f == %.2f)\n", superPoder1, superPoder2);
     }
     break;
     default:
     printf("Opcao invalida\n");      
     break;
    }
         
return 0;
    }
