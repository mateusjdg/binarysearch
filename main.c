#include <stdio.h>

int BinarySearch(int vetor[], int chave, int tamanho)
{
    int limite_inferior = 0;
    int limite_superior = tamanho - 1;
    int metade = 0;

    while (limite_inferior <= limite_superior)
    {
      metade = (limite_inferior + limite_superior)/2;
      if (chave == vetor[metade])
      {
        return metade;
      }
      if (chave < vetor[metade])
      {
        limite_superior = metade - 1;
      }
      else
      {
        limite_inferior = metade + 1;
      }
    }
}


int main(int argc, char const *argv[]) {

  int vector_base[100];
  int i = 0;
  int cont_vector = 1;
  int res_bs = 0;

  // preenchendo o vetor de forma aleatória
  for (i = 0;i <= 99;i++)
  {
    vector_base[i] = cont_vector;
    cont_vector = cont_vector + 3;
  }

  // imprimindo os elementos do vetor
  printf("Imprimindo os elementos do vetor:\n\n");
  for (i = 0;i <= 99;i++)
  {
    printf("vetor[%d] = %d \n",i,vector_base[i]);
  }

  printf("\nO resultado da busca eh: %d. \n",BinarySearch(vector_base,298,100));

  return 0;
}
