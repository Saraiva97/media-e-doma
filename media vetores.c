#include <stdio.h>
#include <stdlib.h>
#include <locale.h>

void main() {

    //Para usar acentos
    setlocale(LC_ALL,"");

    int tamanho;

    printf("Qual ser� o tamanho do vetor?\n");
    scanf("%d", &tamanho);

    float vetor[tamanho], soma;

    int i;
    for(i = 0; i < tamanho; i++){
        printf("Digite um valor:");
        scanf("%f", &vetor[i]);
        soma = soma + vetor[i];
    }
    for(i = 0; i < tamanho; i++){
        printf("\nvetor[%d] = %.2f",i, vetor[i]);
    }

    printf("\nA m�dia dos valores �: %.2f", soma/tamanho);

}
