#include <stdio.h>
 
int main() {
 
int qnt, resto, num, cont;
	
	scanf("%i", &qnt);
	cont = 0;
	
	while (cont < qnt){
		
		cont++;
		scanf ("%i",&num);
		resto = num%2;
		
		if (num == 0)
			printf("NULL\n");
		
		else if(resto == 0 && num > 0)
			printf("EVEN POSITIVE\n");
		
		else if(resto == 0 && num < 0)
			printf("EVEN NEGATIVE\n");
			
		else if(resto != 0 && num > 0)
			printf("ODD POSITIVE\n");
			
		else if(resto != 0 && num < 0)
			printf("ODD NEGATIVE\n");				
	}
 
    return 0;
}
