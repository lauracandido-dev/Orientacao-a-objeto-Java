#include <stdio.h>

/*escreva um algoritmo que receba N numeros do usuario, 
ate que seja informado o numero zero. No final, apresente a soma de todos os numeros digitados*/

int main(){
    int num;
    int soma = 0;

    do{
        printf("Digite um numero ou 0 para sair: \n");
        scanf("%d", &num);
        soma = soma + num;
    }while(num != 0);

    printf("A soma dos numeros digitados é: %d\n", soma);
    
    return 0;
}