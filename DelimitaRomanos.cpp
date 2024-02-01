#include <stdio.h>
#include <stdbool.h>
#include <string.h>

bool esValorValido(const char *cadena) {
    const char *valoresValidos[] = {
        "I", "II", "III", "IV", "V",
        "VI", "VII", "VIII", "IX", "X"
    };
    size_t numValoresValidos = sizeof(valoresValidos) / sizeof(valoresValidos[0]);

    for (size_t i = 0; i < numValoresValidos; i++) {
        if (strcmp(cadena, valoresValidos[i]) == 0) {
            return true;
        }
    }

    return false;
}

int main() {
    char cadena[4];

    while (true) {
        printf("Ingrese un valor romano (I, II, III, IV, V, VI, VII, VIII, IX, X): ");
        scanf("%s", cadena);

        if (esValorValido(cadena)) {
            printf("El valor ingresado es válido.\n");
            break;  // Sale del ciclo si la entrada es válida
        } else {
            printf("El valor ingresado no es válido. Inténtelo nuevamente.\n");
        }
    }

    return 0;
}

