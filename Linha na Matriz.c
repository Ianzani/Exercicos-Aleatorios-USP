#include<stdio.h>
#include<string.h>

int main(){
	
	int i, j, linha;
	float matriz[12][12], total;
	char op[2];
	
	scanf("%i", &linha);
	scanf("%s", &op);
	
	for(i=0;i<12;i++){
		for(j=0;j<12;j++)
			scanf("%f", &matriz[i][j]);
	}
	
	if(strcmp(op,"S")==0){								//Escolhendo SOMA
		
		total=0;
		
		for(i=0;i<12;i++)
			total = total + matriz[linha][i];			//Usando somente a linha desejada
		
	}
	
	else if(strcmp(op,"M")==0){							//Escolhendo MEDIA
		
		total=0;
		
		for(i=0;i<12;i++)
			total = total + matriz[linha][i];
		total = total/12;
	}
	
	printf("%.1f\n", total);
	
	return 0;
}
