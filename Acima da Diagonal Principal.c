#include<stdio.h>
#include<string.h>

int main(){
	
	int i, j, k, l;
	float matriz[12][12], total;
	char op[2];

	scanf("%s", &op);
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
			scanf("%f", &matriz[i][j]);
	}
	
	if(strcmp(op,"S")==0){						//Escolhendo SOMA
		
		total=0;
		
		for(i=0;i<11;i++){						//Seleçao somente dos itens desejados
			for(j=1+k;j<12;j++)
				total = total + matriz[i][j];
			k++;	
		}	
	}
	
	else if(strcmp(op,"M")==0){					//Escolhendo MEDIA
		
		total=0;
		
		for(i=0;i<11;i++){
			for(j=1+k;j<12;j++)
				total = total + matriz[i][j];
				k++;	
		}
		total = total/66;
	}
	
	printf("%.1f\n", total);
	
	return 0;
}
