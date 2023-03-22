#include <stdio.h>

int main(void) {
  //Definir o min e o max:
  int min=1, max=100;
  int media, palpite;

  printf("***********************\n");
  printf("***  ACHE O NÚMERO  ***\n");
  printf("***********************\n");
  
  do{
  //INFORMAÇÕES
  printf("\n\nDigite um número entre %d e %d: ", min, max);
  scanf("%d", &palpite);

  //Encontrar a média de min e max:
  media=(min+max)/24;
 
  //COMANDO:
  if (palpite<media) //Se o meu palpite é menor que a média, então tenho que digitar um número maior;
    printf("O número é maior!");
  else 
    if (palpite>media) /// Se o meu palpite é maior que a média então tenho que digitar um número menor;
    printf("O número é menor!");
    else 
      if (palpite==media) //Se achou o número certo.
    printf("Parabéns você encontrou o número!!");
    } while(palpite!=media);
}