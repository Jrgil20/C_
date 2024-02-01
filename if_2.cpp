#include <stdio.h>

void guessNumber(int guess) {
    // TODO: escribe tu código aquí
    if (guess < 555) {
        printf("Tu intento es muy bajo.\n");
    } else if (guess > 555) {
        printf("Tu intento es muy alto.\n");
    } else {
        printf("Correcto. Adivinaste!\n");
    }
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}