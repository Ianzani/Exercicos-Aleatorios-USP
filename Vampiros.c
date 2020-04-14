#include <stdio.h>
#include <math.h>

float egame(int n1, int n2, int at){
	
    float dado;

    if(at==3){
    	
        return (float)n1/(n1 + n2);
    }
	else{
		
    	dado=1.0-(6-at)/6.0;
		dado=(1-dado)/dado;
		
        return (1.0-pow(dado, n1))/(1.0-pow(dado, n1+n2));
    }
}

int main(){
	
    int ev1, ev2, at, d, aux;
    float p, P;

    while(scanf("%i %i %i %i", &ev1, &ev2, &at, &d) && (ev1 || ev2 || at || d)){
    	
        aux=ev1;
		ev1=0;

        while(aux>0){
		aux=aux-d;
		ev1++;
		}
		
        aux=ev2;
		ev2=0;
		
        while(aux>0){
		aux=aux-d;
		ev2++; 
		}

        p=egame(ev1, ev2, at);
        P=p*100;
        
        printf("%.1f\n", P);
    }

    return 0;
}
