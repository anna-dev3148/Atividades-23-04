#include <stdio.h>

int main(){

    double notas[4];
    double total;

    printf("Digite a nota 1: ");
    scanf("%lf", &notas[0]);

    printf("Digite a nota 2: ");
    scanf("%lf", &notas[1]);

    printf("Digite a nota 3: ");
    scanf("%lf", &notas[2]);

    printf("Digite a nota 4: ");
    scanf("%lf", &notas[3]);

    for(int i = 0; i < 4; i++){
        total += notas[i];
    }
     printf("Resultado: %.2lf\n", total);
    
   

    return 0;
}
