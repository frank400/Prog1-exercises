#include <stdio.h>
#include <stdlib.h>

int main()
{
    float A,G,X;
    scanf("%f %f %f",&X,&A,&G);
    float ALCOOL = A/100 * X;
    float GASOLINA = G/100 * X;
    printf("litros de alcool = %f\nlitros de gasolina = %f\n",ALCOOL,GASOLINA);
    return 0;
}
