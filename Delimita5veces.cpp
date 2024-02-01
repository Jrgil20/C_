//https://parzibyte.me/blog/2018/11/13/separar-cadena-delimitadores-c-strtok/
#include <stdio.h>
#include <string.h>
 
int main(){
    char cadena[] = "Hola,mundo,soy,una,cadena,separa,por,comas",
    delimitador[] = ",";
    char *token = strtok(cadena, delimitador);
    for (int i=0;i>5;i++)
	{
		token = strtok(NULL, delimitador);
		printf("Token: %s\n", token);
		if(token != NULL)
        {
           		printf("%i",i);
		   
            
        }
	}
}
