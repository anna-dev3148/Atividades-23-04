#include <stdio.h>

int main(){

    double num[3];
    double soma = 0;

    printf("Digite o primeiro numero: ");
    scanf("%lf", &num[0]);

    printf("Digite o segundo numero: ");
    scanf("%lf", &num[1]);

    printf("Digite o terceiro numero: ");
    scanf("%lf", &num[2]);

    for (int i = 0; i < 3; i++){
        soma += num[i];
        //soma = soma + num[i];
    }   

    printf("A soma dos números é: %.2lf", soma);

    printf("\n");

    return 0;
}
