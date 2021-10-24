#include <stdio.h>
#include <stdlib.h>
// na aula de hoje veremos sobre estrutura de decisão IF/ELSE.

int main (void)
{
    float nota1, nota2, media;

    printf("Digite a 1a nota: ");
    scanf("%f",&nota1);

    printf("Digite a 2a nota: ");
    scanf("%f",&nota2);

    media = (nota1 + nota2) / 2;

    printf("A media do aluno eh: %.1f\n",media);

    if (media >= 6) {
            printf("Aprovado!\n");
    }
    else {
            printf("Reprovado!\n");
    }

    system ("pause");
    return 0;
}
