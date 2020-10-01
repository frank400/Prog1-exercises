#include <stdio.h>

float get_expression_result(float x){
	//Returns always one, since both expression are equals, but a leave both just to ilustrate.
	return (x *((-x) + (x * x) - (x * x * x) + (x * x * x * x))) / (-x *((x) - (x * x) + (x * x * x) - (x * x * x * x))) ;
}

int main()
{
	float x;
	scanf("%f",&x);
	printf("%f",get_expression_result(x));
	return 0;
}
