#include <stdio.h>
#define PI 3.14159

    double main(void) {
        double raio, area;

        printf("Progama para calcular a área do circulo! \n");
        printf("Digite o valor do raio: ");
        scanf("%lf", &raio);
        area = PI * raio * raio;

        printf("O área do circulo é igual à: %.2lf \n\n", area);

    return 0;
}
