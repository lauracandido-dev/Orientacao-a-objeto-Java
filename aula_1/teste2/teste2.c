#include<stdio.h>

int main(){
    int p1, p2, p3, media;

    printf("Digite a nota da P1: ");
    scanf("%d", &p1);

    printf("Digite a nota da P2: ");
    scanf("%d", &p2);

    media = (p1+p2)/2;

    printf("A média é: %d\n", media);
    if(media < 3){
        printf("Reprovado direto\n");
    }else if(media >= 3 && media < 5){
        printf("Em recuperação\n");
        printf("Digite a nota da P3: \n");
        scanf("%d", &p3);
        media = (media + p3)/2;
        if(media >= 5){
            printf("Aprovado\n");
        }else{
            printf("Reprovado\n");
        }
    }else if(media >= 5){
        printf("Aprovado\n");
    }

    return 0;
}