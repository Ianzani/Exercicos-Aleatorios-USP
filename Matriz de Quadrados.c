#include<stdio.h>

int main(){
	
	unsigned long long int casas=0, maior=0;
	int k, i, j, nmatriz, ordem, contagem=4;
	 
	scanf("%i", &nmatriz);
	
	for(k=0;k<nmatriz;k++){
		
		scanf("%i", &ordem);
		
		unsigned long long int matriz[ordem][ordem], vcasas[ordem];
		
		for(i=0;i<ordem;i++){
			for(j=0;j<ordem;j++){
				scanf("%llu", &matriz[i][j]);
				}	
		}
		
		printf("Quadrado da matriz #%i:\n", contagem);
		contagem++;
		
		for(j=0;j<ordem;j++){
			for(i=0;i<ordem;i++){
				if(maior<matriz[i][j])
					maior=matriz[i][j];
			}
			maior*=maior;
			while(maior>0){													//Espaço para formatação
					maior = maior/10;
					casas++;
				}
				vcasas[j]=casas;
			casas=0;			
		}
		for(i=0;i<ordem;i++){
			for(j=0;j<ordem;j++){
				printf("%*llu", vcasas[j], matriz[i][j]*matriz[i][j]);		//*- referente a formataçao
				if(j<ordem-1)
					printf(" ");
			}
			printf("\n");
		}
		printf("\n");	
	}
	return 0;
}
