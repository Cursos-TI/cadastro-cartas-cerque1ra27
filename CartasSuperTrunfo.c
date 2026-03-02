#include <stdio.h>
int main(){


//-VARIÁVEIS-CARTA 1-
char estado1[30];
char codigo1[10];
char nome1[30];
unsigned long int população1;
float area1;
float pib1;
int pontos1;
float densidadep1;
float pibpercapita1;
float superpoder1;

//-VARIÁVEIS-CARTA 2-
char estado2[30];
char codigo2[10];
char nome2[30];
unsigned long int população2;
float area2;
float pib2;
int pontos2;
float densidadep2;
float pibpercapita2;
float superpoder2;

//-INÍCIO CARTA 1-
printf("Bem-Vindo ao Super Trunfo !\n");
 printf("CARTA 1 INICIADA COM SUCESSO!\n\n");


//-ENTRADA E SAÍDA CARTA 1-
 printf("Digite o Estado: ");
 scanf(" %[^\n]", estado1); // LEITURA DE PALAVRAS COMPOSTAS
 printf("Estado Digitado: %s\n", estado1);

 printf("Digite o Código: ");
 scanf("%s", codigo1);
 printf("O Código digitado foi: %s\n", codigo1);

 printf("Digite o Nome da Cidade: ");
 scanf(" %[^\n]", nome1);  
 printf("O Nome da Cidade digitada foi: %s\n", nome1);

 printf("Digite a População: ");
 scanf("%ld", &população1);
 printf("A população digitada foi: %ld\n", população1);

printf("Digite a Área: ");
scanf("%f", &area1);
printf("A Área digitada foi: %.2f\n", area1);

printf("Digite o valor do PIB: ");
scanf("%f", &pib1);
printf("O valor do PIB digitado foi: %.2f\n", pib1);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", &pontos1);
printf("O número de pontos digitado foi: %d\n\n ", pontos1);
printf("CARTA 1 FINALIZADA COM SUCESSO! \n\n");

densidadep1 = (float) população1 / area1;
pibpercapita1 = (float) pib1 / população1;

//-VARIÉVEL-INICIO-
char iniciar2[10];

//-INICIO CARTA 2-
printf("Digite OK para iniciar CARTA 2! ");
scanf("%s", iniciar2);
printf("\n CARTA 2 INICIADA COM SUCESSO!\n\n");


//-ENTRADA E SAÍDA-CARTA 2-
printf("Digite o Estado: ");
 scanf(" %[^\n]", estado2);// LEITURA DE PALAVRAS COMPOSTAS
 printf("Estado Digitado: %s\n", estado2);

 printf("Digite o Código: ");
 scanf("%s", codigo2);
 printf("O código digitado foi: %s\n", codigo2);

 printf("Digite o Nome da Cidade: ");
 scanf(" %[^\n]", nome2);  
 printf("O Nome da Cidade digitada foi: %s\n", nome2);

 printf("Digite a População: ");
 scanf("%ld", &população2);
 printf("A população digitada foi: %ld\n", população2);

printf("Digite a Área: ");
scanf("%f", &area2);
printf("A Área digitada foi: %.2f\n", area2);

printf("Digite o valor do PIB: ");
scanf("%f", &pib2);
printf("O valor do PIB digitado foi: %.2f\n", pib2);

printf("Digite o número de Pontos Turísticos: ");
scanf("%d", &pontos2);
printf("O número de pontos digitado foi: %d\n\n ", pontos2);
printf("CARTA 2 FINALIZADA COM SUCESSO! \n\n");

densidadep2 = (float) população2 / area2;
pibpercapita2 = (float) pib2 / população2;

//-VARIAVEL-RESULTADO-
char resultado[10];

//-RESULTADO-
printf("Digite OK para obter o resultado das cartas! ");
scanf("%s", resultado);

//-SAÍDA DE DADOS-RESULTADO-
printf("\n\nCARTA 1!\n");
printf("Estado: %s\n", estado1);
printf("Código: %s\n", codigo1);
printf("Nome da Cidade: %s\n", nome1);
printf("A população: %ld\n", população1);
printf("Área: %.2f\n", area1);
printf("Valor do PIB: %.2f\n", pib1);
printf("Número de Pontos: %d\n", pontos1);
printf("Densidade Populacional: %.2f\n", densidadep1);
printf("PIB per Capita: %.2f\n", pibpercapita1);

//cálculo carta 1
superpoder1 = população1 + area1 + pib1 + pontos1 + pibpercapita1+ (1 / densidadep1);
printf("Super Poder: %.2f\n\n", superpoder1);


printf("CARTA 2!\n");
printf("Estado: %s\n", estado2);
printf("Código: %s\n", codigo2);
printf("Nome da Cidade: %s\n", nome2);
printf("A população: %ld\n", população2);
printf("Área: %.2f\n", area2);
printf("Valor do PIB: %.2f\n", pib2);
printf("Número de Pontos: %d\n", pontos2);
printf("Densidade Populacional: %.2f\n", densidadep2);
printf("PIB per Capita: %.2f\n", pibpercapita2);

//cálculo carta 2
superpoder2 = população2 + area2 + pib2 + pontos2 + pibpercapita2 + (1 / densidadep2);
printf("Super Poder: %.2f\n\n", superpoder2);


//SAIDA DE DADOS Comparação 
printf("finalizado, confira a Comparação das Cartas! \n\n");

printf("População: Carta 1 venceu (%d)\n", população1 > população2);

printf("Área: Carta 1 venceu (%d)\n", area1 > area2);

printf("PIB: Carta 1 venceu (%d)\n", pib1 > pib2);

printf("Pontos Turísticos: Carta 1 venceu (%d)\n", pontos1 > pontos2);

printf("Densidade Populacional: Carta 1 venceu (%d)\n", densidadep1 < densidadep2); //densidade menor vence

printf("PIB per Capita: Carta 1 venceu (%d)\n", pibpercapita1 > pibpercapita2);

printf("Super Poder: Carta 1 venceu (%d)\n", superpoder1 > superpoder2);

return 0;

}