#include<stdio.h>
#include<math.h> //Necessária para usar funções matematicas

int main()

{
    double angulo = 0.0;
    double seno, cosseno, tangente;

    seno = sin(angulo);
    cosseno = cos(angulo);
    tangente = tan(angulo);

    printf("Seno de %.2f = %.2lf\n", angulo, seno);
    printf("Cosseno de %.2f = %.2lf\n", angulo, cosseno);
    printf("Tangente de %.2f = %.2lf\n", angulo, tangente);

    return 0;

}
