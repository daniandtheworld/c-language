#include <stdio.h>

int main (void){

    char nome[31];

    printf("Digite seu nome:");
    //scanf("%s",nome);
    fgets (nome,31,stdin);
    printf("O nome armazenado foi: %s",nome);

    return 0;

}
