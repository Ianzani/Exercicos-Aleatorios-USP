#include<stdio.h>

int main(){
	
	int vimpar[5], vpar[5], vtotal[5], resto, num, k, p, j, i;
	p=0;
	k=0;
	
	for(i=0;i<15;i++){
		
		scanf("%i", &num);
		resto=num%2;
		
		if(resto==0){
			
			vpar[p]=num;

			if(p==4){
				for(j=0;j<5;j++)
					printf("par[%i] = %i\n", j, vpar[j]);
				for(j=0;j<5;j++)
					vpar[j]=0;
				p=0;	
			}
			else
				p++;	
		}
		else if(resto!=0){
			
			vimpar[k]=num;
			
			if(k==4){
				for(j=0;j<5;j++)
					printf("impar[%i] = %i\n", j, vimpar[j]);
				for(j=0;j<5;j++)
					vimpar[j]=0;
				k=0;	
			}
			else
				k++;
		}	
	}
	
	j=0;
	
	for(i=0;i<k;i++){
		printf("impar[%i] = %i\n", j, vimpar[j]);
		j++;
	}
	
	j=0;
		
	for(i=0;i<p;i++){
		printf("par[%i] = %i\n", j, vpar[j]);
		j++;
	}
	return 0;
}
