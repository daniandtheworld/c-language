#include <stdio.h>
#include <stdlib.h> //biblioteca auxiliar q contem comandos úteis

int main (void)
{
    int n = 10; //atribuindo valor para uma variável inteira
    float n2 = 6.79; //variável que possui casas decimais
    char letra = 'a'; //variável do tipo caracter
    char frase[10] = "Bom dia!";//armazena até 10 caracteres nessa variavel
    double n3 = 1.23456;

    int valor1, valor2, soma, sub, mult, div, restDiv;

    // usos do comando printf com diversas variaveis
    printf("Hello World!\n");
    printf("Exibindo o numero inteiro %d\n",n); //o %d significa que vai aparecer um valor inteiro decimal
    printf("Exibindo um numero real %.2f\n",n2); // vai aparecer o numero real com 2 casas decimais
    printf("Exibindo o caracter %c\n",letra);
    printf("%s\n",frase);
    printf("Exibindo variavel do tipo double %f\n",n3); //pode usar %f para double tambem
    printf("Valores: %d %f %c %s %f \n",n,n2,letra,frase,n3);
    printf("\n\n\n");

    //com o scanf eu consigo receber os valores e armazenar na memória

    printf("Digite um numero inteiro: ");
    scanf("%d",&valor1); //esse comando armazena um int no endereco da variavel valor1
    printf("Digite outro numero inteiro: ");
    scanf("%d",&valor2); //armazena um int no endereco da variavel valor2

   // operadores aritméticos
    soma = valor1 + valor2;
    sub = valor1 - valor2;
    mult = valor1 * valor2;
    div = valor1 / valor2;
    restDiv = valor1 % valor2;

    printf("valor da soma de %d + %d = %d \n",valor1,valor2,soma);
    printf("valor da subtracao de %d - %d = %d \n",valor1,valor2,sub);
    printf("valor da multiplicacao de %d * %d = %d \n",valor1,valor2,mult);
    printf("valor da divisao de %d / %d = %d \n",valor1,valor2,div);
    printf("resto da divisao de %d e %d eh %d \n",valor1,valor2,restDiv);

    system("pause"); //somente Windows
    return 0;
}
