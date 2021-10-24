#include <stdio.h>

// crie um programa que receba 2 notas de um aluno e imprima sua média.

int main(void)
{

    float nota1, nota2, media;

    printf("Digite a 1a nota: ");
    scanf("%f",&nota1);

    printf("Digite a 2a nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("A media do aluno eh: %.1f\n",media);

    system("pause");
    return 0;
}
