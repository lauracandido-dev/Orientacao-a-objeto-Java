/*escreva um algoritmo que receba 3 numeros do usuario e os apresente em order crescente*/

#include<stdio.h>

int main(){
    int num1, num2, num3;
    int aux;

    printf("Digite o primeiro numero: \n");
    scanf("%d", &num1);

    printf("Digite o segundo numero: \n");
    scanf("%d", &num2);

    printf("Digite o terceiro numero: \n");
    scanf("%d", &num3);

    if(num1 > num2){
        aux = num1;
        num1 = num2;
        num2 = aux;
    }
    if(num1 > num3){
        aux = num1;
        num1 = num3;
        num3 = aux;
    }
    if(num2 > num3){
        aux = num2;
        num2 = num3;
        num3 = aux;
    }

    printf("Os numeros em ordem crescente são: %d, %d, %d\n", num1, num2, num3);
    
    return 0;
}