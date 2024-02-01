#include <stdio.h>

void guessNumber(int guess) {
    if (guess == 555)
    {printf("Correcto. Adivinaste! \n");}
    else if (guess < 555)
    	{printf("Tu intento es muy bajo. \n");}
    	else
        {printf("Tu intento es muy alto. \n");}
            
}

int main() {
    guessNumber(500);
    guessNumber(600);
    guessNumber(555);
}