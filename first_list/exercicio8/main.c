#include <stdio.h>
#include <stdlib.h>

int main()
{
    int idade;
    scanf("%d",&idade);
    int DIAS = idade * 365 + (idade/4);
    printf("numero de dias vivo = %d",DIAS);
    return 0;
}
