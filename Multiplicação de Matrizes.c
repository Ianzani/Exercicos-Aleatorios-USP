#include <stdio.h>
 
int main() {
 
	long long int tam, i, j;

	scanf("%lli", &tam);
	
	long long int matriza[tam][tam], matrizb[tam][tam], matrizc[tam][tam];
	long long int p, q, r, s, x, y, cc, cl;
	
	scanf ("%lli %lli %lli %lli %lli %lli", &p, &q, &r, &s, &x, &y);
	
	for(i=1;i<tam+1;i++){
		for(j=1;j<tam+1;j++){
			matriza [i-1][j-1] = ((p*i)+(q*j))%x;
			matrizb [i-1][j-1] = ((r*i)+(s*j))%y;
		}
	}
	
	scanf("%lli %lli", &cl, &cc);
	
	matrizc[cl-1][cc-1] = 0;
	
	for(i=0;i<tam;i++)
		matrizc[cl-1][cc-1] += (matriza [cl-1][i] * matrizb [i][cc-1]);
		
	printf("%lli", matrizc[cl-1][cc-1]);
 
    return 0;
}
