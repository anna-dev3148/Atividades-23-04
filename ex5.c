#include <stdio.h>

double media(double x , double y){
    
    return (x + y) / 2;
}

double dobro(double num1 , double num2){
    
    return (num1*2.0 + num2*2.0) / 2;
}

double maior(double numMaior, double numMenor){
    
    if(numMaior > numMenor){
        return numMaior;
    } else {
        return numMenor;
    }
}

int main() {
    
    double numeros[2];
    
    printf("Digite o primeiro número:");
    scanf("%lf", &numeros[0]);
 
     printf("Digite o segundo número:");
     scanf("%lf", &numeros[1]);
     
     double mediaTotal = media (numeros[0] , numeros[1]);
     printf("\nA média dos dois números é.....: %.2lf", mediaTotal);
     
     double mediaNova = dobro (numeros[0] , numeros[1]);
     printf("\nA média nova dos dois números é: %.2lf\n", mediaNova);
     
     double mostraPosicao = maior (numeros[0] , numeros[1]);
     if (numeros[0] > numeros[1]){
         printf("O maior dos dois números é.....: %.2lf", mostraPosicao);
     } else {
         printf("O maior dos dois números é.....: %.2lf", mostraPosicao);
     }

     printf("\nValor antes de usar a função média: %.2lf", mediaTotal);
     printf("\nValor após usar a função dobro....: %.2lf\n", mediaNova);
     
    return 0;
}
