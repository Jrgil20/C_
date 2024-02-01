#include <stdio.h>
#include <stdlib.h>

int bisiesto (int Y);

int main ()
{
	 if (bisiesto(2028))
 		printf("2028 es bisiesto");
 	return 0;

}

int bisiesto (int Y)
{
	if (Y%4)
		if(Y%100)
			if(Y%400)
				return 0;
			else
				return 1;
		else
			return 0;
	else
		return 1;
}
