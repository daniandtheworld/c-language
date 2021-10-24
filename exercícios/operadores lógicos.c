#include <stdio.h>

// vamos estudar sobre operadores lógicos && || !

int main (void)
{
    //-------------- OPERADOR LÓGICO E && ----------------------
    //float nota_final, frequencia;
    //printf("Digite a nota final do aluno: ");
    //scanf("%f",&nota_final);
    //printf("Digite a frequencia do aluno: ");
    //scanf("%f",&frequencia);
    //nota tem q ser maior ou igual a 6 pra ser aprovado e frequencia maior ou igual a 75%
    //if (nota_final >= 6.0 && frequencia >= 75)
    //    printf("Aluno aprovado.\n");
    //else
    //    printf("Aluno reprovado.\n");
    //---------------FIM DO EXERCICIO DE OPERADOR LÓGICO E &&-----------

    //----- INÍCIO DO ESTUDO DO OPERADOR LÓGICO OU || ------------
    float limite_min = 5.0, limite_max = 12.0, temperatura;

    printf("Digite a temperatura: ");
    scanf("%f",&temperatura);

    if (temperatura > limite_max || temperatura < limite_min)
        printf("Alerta de temperatura fora da faixa permitida!\n");
    else
        printf("Temperatura OK \n");

    system("pause");
    return 0;


}
