#include <stdio.h>

/*

Exercício:

Criar um vetor denominado A com 10 posições do tipo int, preencher o vetor
recebendo dados via teclado e multiplicar o conteúdo de cada elemento do
vetor A por 10, armazenando o resultado desta multiplicação em outro vetor
denominado B.

*/

int main (void)
{

    int A[10];
    int B[10];
    int i;
    //int mult;

    // recebendo os dados

    for (i=0;i<10;i++)
    {
        printf("%d - Digite os valores para o Vetor A:",i);
        scanf("%d",&A[i]);

    }

    //teste pra saber se foi recebido os valores corretamente

    for (i=0;i<10;i++)
    {
        printf("A[%d] = %d \n",i,A[i]);

    }

    printf("Valores do Vetor B: \n");

    for (i=0;i<10;i++)
    {
        B[i] = A[i]*10;
        printf("B[%d] = %d\n",i,B[i]);
    }


    /*A[i*10];
    B[i] == A[i];
    printf("Dados do Vetor B:\n %d",B[i]);*/

    //printf("valores: %d",mult);





    return (0);
}
