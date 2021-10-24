#include <stdio.h>
#include <stdlib.h>

// faça um programa que receba 2 valores e mostre o maior valor

int main (void)
{
    int n1, n2;

    printf("Digite o primeiro numero: ",n1);
    scanf("%d",&n1);

    printf("Digite o segundo numero: ",n2);
    scanf("%d",&n2);

    if (n1 == n2){
        printf("Os numeros sao iguais. \n");
        printf("Por favor, digite numeros diferentes.\n");
    }
    else
        if (n1>n2)
            printf("O maior valor eh %d \n",n1);
        else
            printf("O maior valor eh %d \n",n2);

    // alguns if/else neste programa não possui chaves pq só teve um comando em cada
    // caso tivessem mais de um comando no bloco, é obrigatório o uso das chaves

    system("pause");
    return 0;
}
