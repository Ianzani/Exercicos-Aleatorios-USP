#include <stdio.h>
 
int main() {
 
	int C, cont, X, Y, soma;
	
	scanf("%i", &C);
	cont = 0;
	
	for (cont=0; cont < C; cont++)
	{
		scanf ("%i %i", &X, &Y);
		soma = X+Y;
		
		if (soma == 0)
			printf("PROXYCITY\n");
		else if (soma == 1)
			printf("P.Y.N.G.\n");
		else if (soma == 2)
			printf("DNSUEY!\n");
		else if (soma == 3)
			printf("SERVERS\n");
		else if (soma == 4)
			printf("HOST!\n");
		else if (soma == 5)
			printf("CRIPTONIZE\n");
		else if (soma == 6)
			printf("OFFLINE DAY\n");
		else if (soma == 7)
			printf("SALT\n");
		else if (soma == 8)
			printf("ANSWER!\n");
		else if (soma == 9)
			printf("RAR?\n");
		else if (soma == 10)
			printf("WIFI ANTENNAS\n");												
	}
 
    return 0;
}
