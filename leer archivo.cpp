#include <stdio.h>
#include <string.h>

#define NOMBRE_ARCHIVO "archivo.txt"
#define LONGITUD_MAXIMA_CADENA 250

int main(void)
{
    FILE *archivo = fopen(NOMBRE_ARCHIVO, "r"); // Modo lectura
    char bufer[LONGITUD_MAXIMA_CADENA];         // Aquí vamos a ir almacenando cada línea
    while(!feof(archivo))
    {
        // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
		strtok(bufer, "\n");
        // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        printf("elnombre es: '%s'\n", bufer);
        // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
        strtok(bufer, "\n");
        // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        printf("la cedula es: '%s'\n", bufer);
        // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
		strtok(bufer, "\n");
        // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        printf("la fecha es: '%s'\n", bufer);
        // Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
		strtok(bufer, "\n");
        // La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        printf("la direcion es: '%s'\n", bufer);
        
        while(true)
        {
        	
        	fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
			strtok(bufer, "\n");
			if(strcmp(bufer," ") == 0)
			 break;
        	// La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        	printf("el curso es: '%s'\n", bufer);
        	// Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        	fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
			strtok(bufer, "\n");
        	// La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        	printf("la nota es: '%s'\n", bufer);
			// Aquí, justo ahora, tenemos ya la línea. Le vamos a remover el salto
        	fgets(bufer, LONGITUD_MAXIMA_CADENA, archivo);
			strtok(bufer, "\n");
        	// La imprimimos, pero realmente podríamos hacer cualquier otra cosa
        	printf("El estatus es: '%s'\n", bufer);		
		}
		printf("\n\n");		
    }
	return 0;
}
