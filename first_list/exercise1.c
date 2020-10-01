#include <stdio.h>

float get_expression_result(int x){
	//Returns always one, since both expression are equals, but a leave both just to ilustrate.
	return (x *((-x) + (x * x) - (x * x * x) + (x * x * x * x))) / (-x *((x) - (x * x) + (x * x * x) - (x * x * x * x))) ;
}

int main(int argc, char const *argv[])
{
	int x;
	scanf("%d",&x);
	printf("%f",get_expression_result(x));
	return 0;
}
