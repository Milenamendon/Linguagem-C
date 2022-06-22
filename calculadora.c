#include<stdio.h>
#include<stdlib.h>
#include<locale.h>



void main(){

setlocale(LC_ALL, "");

 float valor1, valor2;

 int opcao;

 printf("/n Digite o primeiro valor:");
 scanf("%f", &valor1);


 printf("/n Digite o primeiro valor:");
 scanf("%f", &valor2);

  printf("/n Escolha uma opcao:");

  printf("1-Somar");
  printf("2-Subtrair");
  printf("3-Dividir");
  printf("4-Multiplicar");
  scanf("%d", &opcao);

  switch(opcao){

  case 1:

  printf("Resultado da soma: %.2f", valor1 + valor2);
  break;

  case 2:

  printf("Resultado da subtração: %.2f", valor1 - valor2);
  break;

  case 3:

  printf("Resultado da divisão: %.2f", valor1 / valor2);
  break;

  case 4:

  printf("Resultado da multiplicação: %.2f", valor1 + valor2);
  break;


  }


}
