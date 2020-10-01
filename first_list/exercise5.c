#include <stdio.h>
float get_volume_by_percentage(int tank_capacity,int percentage){
    return tank_capacity*(1-(percentage/100.0));
}
float get_cost(float volume,float price){
    return price*volume;
}
int main(int argc, char const *argv[])
{
    int tank_capacity;
    float gas_price,alcool_price;
    scanf("%d %f %f",&tank_capacity,&gas_price,&alcool_price);
    float gas_volume=get_volume_by_percentage(tank_capacity,80);
    float alcool_volume=get_volume_by_percentage(tank_capacity,20);
    printf("the total cost in gas: %f\n the total cost in alcool: %f\n",get_cost(gas_volume,gas_price),get_cost(alcool_volume,alcool_price));
    return 0;
}
