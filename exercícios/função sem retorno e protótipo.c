#include <stdio.h>


void imprime_cabecalho(void)
{
    printf("----------------------------------\n");
    return;
}

int multiplica(int n1, int n2)
{
    int res;
    res = n1 * n2;
    return res;
}

int main(){

    int n1,n2,resultado;

    printf("Digite n1: ");
    scanf("%d",&n1);
    printf("Digite n2: ");
    scanf("%d",&n2);
    resultado = multiplica(n1,n2);
    imprime_cabecalho();
    printf("Resultado = %d\n",resultado);
    imprime_cabecalho();

    return 0;


}
