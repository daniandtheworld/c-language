#include <stdio.h>

int main (void)
{

    float nota1, nota2, media;
    int resp;

    do
    {
        printf("Digite a primeira nota: ");
        scanf("%f",&nota1);

        printf("Digite a segunda nota: ");
        scanf("%f",&nota2);

        media = (nota1+nota2)/2;
        printf("Media do aluno: %.1f\n",media);

        printf("Digite 1 para continuar ou 2 para sair\n");
        scanf("%d",&resp);

    }while (resp == 1);

    do {
        printf("Numero Invalido! Digite 1 para continuar ou 2 para sair\n");
        scanf("%d",&resp);
    }while (resp!=1 && resp!=2);

        if (resp==2)
            printf("Fim do Programa");

    return (0);

}
