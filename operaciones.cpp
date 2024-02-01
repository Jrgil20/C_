#include <stdio.h>

int main()
{
	int x=0,y=0,Result=0;
	printf(" \n ingrese el  primer valor de entrada x:");
	scanf("%d",&x);
	printf(" \n ingrese el  primer valor de entrada y:");
	scanf("%d",&y);
	Result=x+y;
	printf("\n la suma de x:%d & y:%d es:%d \n",x,y,Result);
	Result=x-y;
	printf(" la resta de x:%d & y:%d es:%d \n",x,y,Result);
	Result=x*y;
	printf(" la multiplicacion de x:%d & y:%d es:%d \n",x,y,Result);
	Result=x/y;
	printf(" la division de x:%d & y:%d es:%d \n",x,y,Result);
	return 0;
}
