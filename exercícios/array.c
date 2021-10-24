#include <stdio.h>

/*

vetor ou array é uma variável que possui várias posições de armazenamentos.

*/

int main (void)
{
    //int vetor[10]; // vetor de inteiros com índice do 0 até 9
    // declarando o vetor
    float notas[5] = {7, 8, 9.5, 9.9, 5.2};
    int i;

    printf("Valores do Vetor: \n\n");
    //printf("notas[0] = %.1f\nnotas[1] = %.1f\nnotas[2] = %.1f\nnotas[3] = %.1f\nnotas[4] = %.1f\n",notas[0],notas[1],notas[2],notas[3],notas[4]);

   /* printf("notas[0] = %.1f\n",notas[0]);
    printf("notas[1] = %.1f\n",notas[1]);
    printf("notas[2] = %.1f\n",notas[2]);
    printf("notas[3] = %.1f\n",notas[3]);
    printf("notas[4] = %.1f\n",notas[4]);
  */

    for (i = 0; i <=4; i++)
    {
        printf("notas[%d] = %.1f\n",i,notas[i]);

    }


    //system("pause");
    return (0);
}
