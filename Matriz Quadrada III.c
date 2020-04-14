#include<stdio.h>
#include<math.h>

int main(){
	
	int ordem, e, maior, cont, i, j, k;
	
	for(k=0;;k++){
		
		scanf("%i", &ordem);
		
		if(ordem==0)
			break;
		else{
			
			int matriz[ordem][ordem];
			
			for(i=0;i<ordem;i++){
				
				e=i;
				
				for(j=0;j<ordem;j++){
					matriz[i][j]=pow(2,e);
					e++;
				}
			}
			
			maior=matriz[ordem-1][ordem-1];
			cont=0;
			
			while(maior>=1){
				maior=maior/10;
				cont++;
			}
			
			for(i=0;i<ordem;i++){
				for(j=0;j<ordem-1;j++)
					printf("%*i ", cont, matriz[i][j]);	
				printf("%*i", cont, matriz[i][ordem-1]);	
				printf("\n");
			}
			printf("\n");
		}	
	}
	
	return 0;
}
