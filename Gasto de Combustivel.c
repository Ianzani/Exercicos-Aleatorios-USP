#include <stdio.h>
 
int main() {
 
	int tempo, velocidade;
	float volume, distancia;
	
	scanf("%i", &tempo);
	scanf("%i", &velocidade);
	
	distancia = velocidade*tempo;
	volume = distancia/12;
	
	printf("%.3f\n", volume);
 
    return 0;
}
