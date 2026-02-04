#include<stdio.h>

/*Calcule a media de 5 alturas digitada pelo usuario - usando laço de repetição*/

int main(){
    float altura;
    float media;
    float soma = 0;

    for(int i = 0; i < 5; i++){
        printf("Digite a altura: \n");
        scanf("%f", &altura);
        soma = soma + altura;
    }
    media = soma/5;
    printf("A média das alturas é: %.2f\n", media);
    return 0;
}