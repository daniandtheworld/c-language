#include <stdio.h>

// estudos dos operadores compostos de atribuição
// +=
// -=
// *=
// /=


int main (void)
{

    int num;
    num=10; //atribuindo 10 na variavel num
    printf("valor inicial de num = %d\n",num);

    num+=5; //equivale a num = num + 5;
    printf("somando 5 ao valor atual, temos: %d\n",num);

    num-=1; //equivale a num = num - 5;
    printf("subtraindo 1, temos: %d\n",num);

    num*=2; //equivale a num = num * 5;
    printf("multiplicando por 2, temos: %d\n",num);

    num/=7; //equivale a num = num / 5;
    printf("dividindo por 7, temos: %d\n",num);

    system("pause");
    return (0);
}
