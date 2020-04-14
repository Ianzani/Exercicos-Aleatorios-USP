#include <stdio.h>
 
int main() {
 
	int i,j;
	scanf ("%i", &i);
	char string[i+1];
	strcpy(string, "a");
	
	for (j=0;j<i-1;j++)
	{
		strcat(string, "a");
	}
	
	printf("Feliz nat%sl!\n", string);
 
    return 0;
}
