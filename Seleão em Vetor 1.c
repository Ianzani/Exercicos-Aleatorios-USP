#include <stdio.h>
 
int main() {
 
	float vetor[100], x;
	int i, nada;
	
	for( i = 0; i <100; i++ )
	{
		scanf("%f", &vetor[i]);
	}
	
	for (i=0; i <100; i++)
	{
		if (vetor[i]<=10)
		{
			x = vetor[i];
			printf ("A[%i] = %.1f\n", i, x);
		}	
		else
			nada;	
	}
 
    return 0;
}
