#include <stdio.h>

int main(void) {
  // Defina o min e o max:
  int min = 1, max = 15;
  int media, palpite;

  // informações
  printf("Digite um número entre %d e %d: ", min, max);
  scanf("%d", &palpite);

  // Encontre a média de min e max:
  media = (min + max) / 2;

  // Se achou o núemro certo:
  if (palpite < media)
    printf("\nO número é menor!");
  else if (palpite > media)
    printf("\nO número é maior!");
  else if (palpite == media)
    printf("\nParabéns você encontrou o número!!");
}