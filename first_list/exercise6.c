#include <stdio.h>
float percentage_of_water(int liters){
    return liters*0.8;
}
float percentage_of_juice(int liters){
    return liters*0.2;
}

int main(int argc, char const *argv[])
{
    int liters;
    scanf("%d",&liters);
    float liters_of_water= percentage_of_water(liters);
    float liters_of_juice=percentage_of_juice(liters);
    printf("water:%f, juice:%f\n",liters_of_water,liters_of_juice);
    return 0;
}
