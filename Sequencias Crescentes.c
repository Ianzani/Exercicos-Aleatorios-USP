#include <stdio.h>
 
int main() {
 
	int num, i, j;
	
	for(i=0;;i++)
	{
		scanf("%i",&num);
		
		if (num==0)
			exit(1);
		else
		{
			for(j=1;j<=num;j++)
			{
				if(j<num)
					printf("%i ",j);
				else if(j==num)
					printf("%i\n",j);	
			}
		}	
	}
 
    return 0;
}
