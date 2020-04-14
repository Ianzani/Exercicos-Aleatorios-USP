#include <stdio.h>

int max(int x, int y){
    if(x>y) 
		return x;
	else	
    	return y;
}

int main(){
    
    int i, j, npedidos, maxpizza, k;
    for(k=0;;k++){
        scanf("%i",&npedidos);
        if(npedidos == 0) 
			break;
        scanf("%i",&maxpizza);
        int matriz[npedidos+1][maxpizza+1], vpizza[npedidos+1], vtempo[npedidos+1];

        for(i=0;i<npedidos;i++){
              scanf("%i %i",&vtempo[i], &vpizza[i]);
              
              for(j=0;j<npedidos;j++)
              	matriz[i][j]=0;
        }
        
        for(i=1;i<=maxpizza;i++){
              for(j=0;j<npedidos;j++){
                   if(j>0){
                        matriz[j][i] = matriz[j-1][i];
                        if(vpizza[j] <= i) 
							matriz[j][i] = max(matriz[j][i], matriz[j-1][i-vpizza[j]]+vtempo[j]);
                   }
                   else{
                        matriz[j][i] = 0;
                        if(vpizza[j]<=i) 
							matriz[j][i] = max(matriz[j][i], vtempo[j]);
                   }
               }
        }
        printf("%d min.\n", matriz[npedidos-1][maxpizza]);
    }
    return 0;
}
