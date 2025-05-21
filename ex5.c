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
    
    printf("Digite o primeiro número: ");
    scanf("%lf", &numeros[0]);
 
     printf("Digite o segundo número.: ");
     scanf("%lf", &numeros[1]);
     
     double mediaTotal = media (numeros[0] , numeros[1]);
     printf("\nA média dos dois números é........: %.2lf", mediaTotal);
     
     double mediaNova = dobro (numeros[0] , numeros[1]);
     printf("\nA média nova dos dois números é...: %.2lf\n", mediaNova);
     
     double mostraPosicao = maior (numeros[0] , numeros[1]);
     if (numeros[0] > numeros[1]){
         printf("\nO maior dos dois números é........: %.2lf\n", mostraPosicao);
         printf("O menor dos dois números é........: %.2lf\n", numeros[1]);
     } else {
         printf("\nO maior dos dois números é........: %.2lf\n", mostraPosicao);
         printf("O menor dos dois números é........: %.2lf\n", numeros[0]);
     }

     printf("\nValor antes de usar a função dobro: %.2lf e %.2lf", numeros[0], numeros[1]);
     printf("\nValor após usar a função dobro....: %.2lf e %.2lf", numeros[0]*2, numeros[1]*2);
     
     
     
     
     
    return 0;
}
