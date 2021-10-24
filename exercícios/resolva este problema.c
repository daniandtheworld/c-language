 #include <stdio.h>

 // OK!

int main()
{
    float prova1, prova2, prova3, prova4, Media;

    prova1 = 5;
    prova2 = 3;
    prova3 = 7;
    prova4 = 5;

    Media  = (prova1 + prova2 + prova3 + prova4) / 4;

    if (Media > 6)
    {
       printf("aluno aprovado com media.: %f",Media);
    }

    if (Media = 6)
    {
        printf("aluno em recuperacao final com media.: %f",Media);
    }

    if (Media < 6)
    {
       printf("\naluno reprovado com media.: %f\n",Media);
    }

       printf("\nprova1.: %f",prova1);
       printf("\nprova2.: %f",prova2);
       printf("\nprova3.: %f",prova3);
       printf("\nprova4.: %f",prova4);
       printf("\n.......Final do Sistema.......");
       getchar();
}
