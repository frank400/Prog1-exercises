#include <stdio.h>

float add_percentage(float x, int percentage){
    return x*(1+(percentage/100.0));
}
float retrive_percentage(float x,int percentage){
    return x*(1-(percentage/100.0));
}
int main()
{
    float r1,r2;
    printf("First real value to be incresed by 30 percent:");
    scanf("%f",&r1);
    printf("First real value to be decresed by 25 percent:");
    scanf("%f",&r2);
    float r1_increased = add_percentage(r1,30);
    float r2_decresed = retrive_percentage(r2,25);
    printf("the final value of the first value is :%f\nthe final value of the second one is:%f\n",r1_increased,r2_decresed);
    return 0;
}
