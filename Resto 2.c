#include <stdio.h>
 
int main() {
 
	int num, resto, nada, cont;
	
	scanf("%i", &num);
	cont=0;
	
	while(cont<10000){
		
		cont = cont + 1;
		resto = cont%num;
		
		if (resto == 2)
			printf("%i\n",cont);
		else
			nada;	
	}
 
    return 0;
}
