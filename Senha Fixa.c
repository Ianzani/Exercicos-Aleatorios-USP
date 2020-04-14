#include <stdio.h>
 
int main() {
 
	int senha, cont;
	cont = 1;
	
	while (cont > 0){
		
		scanf("%i", &senha);
		
		if (senha == 2002){
			printf ("Acesso Permitido\n");
			exit(1);
		}
		else
			printf("Senha Invalida\n");
	}
 
    return 0;
}
