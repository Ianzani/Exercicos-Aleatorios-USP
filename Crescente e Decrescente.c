#include <stdio.h>
 
int main() {
 
 	int X, Y;
	
	while(X!=Y){
		
		scanf("%i %i", &X, &Y);
		
		if (X>Y)
			printf("Decrescente\n");
		else if (Y>X)
			printf("Crescente\n");
		else if (X == Y)
			exit(1);
	}
 
    return 0;
}
