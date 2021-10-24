#include <stdio.h>

int main (void)
{

    int matriz[3][3], i, j; //a primeira é a linha, a segunda é a coluna

    //entrada de dados para essa matriz:
    printf("\nDigite valor para os elementos da matriz \n\n");

    for(i=0; i<3; i++) //i é o índice da linha da matriz
        for (j=0;j<3;j++) //j é o índice da coluna da matriz
        {
            printf("Elemento[%d][%d]:",i,j);
            scanf("%d",&matriz[i][j]);
        }


    printf("\n\n ********** Saida de Dados **********\n\n");

     for(i=0; i<3; i++) //i é o índice da linha da matriz
        for (j=0;j<3;j++) //j é o índice da coluna da matriz
        {
            printf("Matriz[%d][%d] = %d\n",i,j,matriz[i][j]);
        }


    return (0);
}
