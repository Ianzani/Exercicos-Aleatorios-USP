#include <stdio.h>
 
int main() {
 
	int limite, cont, mult;
	cont=0;
	
	scanf("%i", &limite);
	
	while (cont < limite){
		
		mult = cont*4;
		cont++;
		
		printf("%i %i %i PUM\n", 1+mult, 2+mult, 3+mult);
	}
 
    return 0;
}
