#include <stdio.h>
#include <stdlib.h>

int main()
{
    int B,A,X,Y;
    scanf("%d %d %d %d",&B,&A,&X,&Y);
    int LITROSIDA = B/X + A/Y;
    int LITROSVOLTA = A/X + B/Y;
    int LITROSIDAEVOLTA = LITROSIDA + LITROSVOLTA;
    printf("LITROS DE COMBUSTIVEL = %d",LITROSIDAEVOLTA);

    return 0;
}
