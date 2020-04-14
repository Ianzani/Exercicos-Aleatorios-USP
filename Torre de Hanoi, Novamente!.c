#include<stdio.h>
#include<math.h>

int main(){
	
	int ncasos, nhastes, bola=1, aux, nada, contador=0, i, v, j;
	float soma; 
	
	scanf("%i", &ncasos);
	
	for(i=0;i<ncasos;i++){
		
		scanf("%i", &nhastes);
		int vetorhastes[nhastes];
		
		for(v=0;v<nhastes;v++)
			vetorhastes[v]=0;
		
		for(j=0;j<nhastes;j++){
			if(vetorhastes[j]==0){
				vetorhastes[j]=bola;
				bola++;
				contador++;
				j=-1;
			}
			else{
				soma = vetorhastes[j] + bola;
				
				aux=sqrt(soma);
				
				if(sqrt(soma)==aux){			
					vetorhastes[j]=bola;
					bola++;
					contador++;
					j=-1;
				}
				else
					nada;
			}					
		}
		printf("%i\n", contador);
		bola=1;
		contador=0;
	}
	return 0;
}
