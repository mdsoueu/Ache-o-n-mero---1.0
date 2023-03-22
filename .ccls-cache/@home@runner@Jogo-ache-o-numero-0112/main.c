#include <stdio.h>

int main(void) {
  //Definir o min e o max:
  int min=1, max=20;
  int media, palpite;
   
  do{
  //INFORMAÇÕES
  printf("\n\nDigite um número entre %d e %d: ", min, max);
  scanf("%d", &palpite);

  //Encontrar a média de min e max:
  media=(min + max)/2;
 
  //COMANDO:
  if (palpite<media) //Se o meu palpite é maior que a média, então tenho que digitar um número menor.
    printf("O número é maior!");
  else if (palpite>media) //Se o meu palpite é maior que a média, então tenho que digitar um número menor.
    printf("O número é menor!");
  else if (palpite==media) //Se achou o número certo:
    printf("Parabéns você encontrou o número!!");
    } while(palpite!=media);
}