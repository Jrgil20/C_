#include <stdio.h>

 int main()
{
	int N=0,aux=2,cont=0;
	printf("\n Ingrese un numero a comprobar:");
	scanf("%d",&N);
	while (aux<N)
	{
		if ((N % aux)==0)
		{
			cont++;
			break;
		}
		aux++;
	}
	if (cont==0)
		printf("\n EL numero %d es primo",N);
	else
		printf("\n EL numero %d no es primo",N);
	return 0;
}
