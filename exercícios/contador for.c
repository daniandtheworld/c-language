#include <stdio.h>

int main (void)
{
    int contador; //variável de controle de loop

    //for (contador = 10; contador >= 1; contador--) //decrescendo
    //for (contador = 0; contador <= 10; contador = contador + 2) // numeros pares
    //for (contador = 1; contador <= 10; contador = contador + 2) // numeros impares

    for (contador = 1; contador <= 10; contador++) // vai contar de 1 até 10. lembrando q contador++ é igual a contador = contador + 1

    {
        printf("%d ",contador);

    }
    /*
    estrutura do for:

    for (valor_inicial; condição_final; valor incremento)
    {
        instruções
    }

    */

    return (0);
}
