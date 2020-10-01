#include <stdio.h>

int get_rectangle_area(int height,int base){
    return height*base;
}

int main(int argc, char const *argv[])
{
    int height,base;
    scanf("%d %d", &height,&base);
    int terain_area = get_rectangle_area(height,base);
    printf("The area of the given rectangle is: %d m²\n",terain_area);
    return 0;
}
