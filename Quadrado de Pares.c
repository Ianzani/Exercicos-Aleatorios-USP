#include <stdio.h>
#include <math.h>
 
int main() {
 
	int num, quadrado, resto, teste;
	
	scanf ("%i", &num);
	resto = num%2;
	teste = 0;
	
	if (resto == 0){
		while (teste<num){
			
			teste = teste + 2;
			quadrado = pow(teste,2);
			printf("%i^2 = %i\n", teste, quadrado);
		}
	}
	else if(resto > 0) {
		num--;
		
		while (teste<num){
			
			teste = teste + 2;
			quadrado = pow(teste,2);
			printf("%i^2 = %i\n", teste, quadrado);	
		}
	}
 
    return 0;
}
