#include <stdio.h>
#include <stdlib.h>

float get_raiz(float a, float b){
    return (-b)/a;
}
int main()
{
    float a,b;
    scanf("%f %f",&a,&b);
    printf("A raiz do da função afim é (%.2f,0)\n",get_raiz(a,b));

    return 0;
}
