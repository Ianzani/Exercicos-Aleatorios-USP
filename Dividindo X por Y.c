#include <stdio.h>
 
int main() {
 
    int cont, limite, x, y;
	float divisao;
	
	scanf ("%i", &limite);
	cont = 0;
	
	while (cont < limite){
		
		cont++;
		scanf ("%i %i", &x, &y);
		divisao = (float) x/y;
		
		if (y == 0)
			printf("divisao impossivel\n");
		else
			printf("%.1f\n", divisao);	
	}
 
    return 0;
}
