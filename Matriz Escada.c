#include<stdio.h>
#include<stdlib.h>

int main(){
	
	int ordeml, ordemc, i, j, soma, k, p;
	char resp='S';
	
	scanf("%i %i", &ordeml, &ordemc);
	
	int matriz[ordeml][ordemc];
	
	for(i=0;i<ordeml;i++){
		for(j=0;j<ordemc;j++)
			scanf("%i", &matriz[i][j]);
	}
	
	soma = 0;
	
	for(i=0;i<ordeml;i++){
		for(j=0;j<ordemc;j++){
			
				for(k=j;k>-1;k--){
					for(p=i+1;p<ordeml;p++)
						soma = soma + abs(matriz[p][k]);	
				}
				if(soma!=0){								//Se a soma dos itens abaixo e à esquerda for zero, todos os numeros são zeros
					resp='N';
					break;
				}
				else{
					if(matriz[i][j]!=0)						//Pula para a proxima linha pois ja achou o maior valor da linha superior
						i++;	
				}	
		}	
	}
	printf("%c\n", resp);
	
	return 0;
}
