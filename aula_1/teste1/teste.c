#include<stdio.h>


int main(){
    int anoAtual;
    int anoNascimento;
    int sub;

    printf("Digite o ano atual: ");
    scanf("%d", &anoAtual);

    printf("Digite o ano de nascimento: ");
    scanf("%d", &anoNascimento);

    sub = anoAtual-anoNascimento;

    printf("A sua idade é: %d\n", sub);

    return 0;
}