#include <stdio.h>

int main (void)
{
    float notas[4] = {};
    int i;

    // loop para entrada de dados
    for (i=0; i<=3; i++)
    {
        printf("Digite a nota: ");
        scanf("%f",&notas[i]);
    }

    // loop para saída de dados
    for (i=0; i<=3; i++)
    {
        printf("Valor da nota %d = %.1f\n",i,notas[i]);
    }


    return 0;

}
