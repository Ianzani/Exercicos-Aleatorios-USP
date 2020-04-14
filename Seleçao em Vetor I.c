#include <stdio.h>
 
int main() {
 
	float v[100]; 
	int i, nada;
	
	for(i=0;i<100;i++)
		scanf("%f", &v[i]);
		
	for(i=0;i<100;i++)
	{
		if(v[i]<=10)
			printf ("A[%i] = %.1f\n", i, v[i]);
		else
			nada;		
	}
 
    return 0;
}
