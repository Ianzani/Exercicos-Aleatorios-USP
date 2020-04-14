#include<stdio.h>
#include<math.h>

int main(){
	
	double avioleta, agirassol, arosa, semip, raiop, raiog, pi=3.1415926535897;
	int a, b, c;
	
	while (scanf("%i %i %i", &a, &b, &c)!=EOF){
	
		semip=(double)(a+b+c)/2;											//Semi perimetro
	
		raiop=(double)sqrt(semip*(semip-a)*(semip-b)*(semip-c))/semip;		//Raio menor
	
		raiog=(double)(a*b*c)/sqrt((a+b+c)*(b+c-a)*(c+a-b)*(a+b-c));		//Raio maior
	
		arosa=(double) pow(raiop,2)*pi;										//Area rosas
	
		avioleta=(double)sqrt(semip*(semip-a)*(semip-b)*(semip-c))-arosa;	//Area violetas
	
		agirassol=(double)(pow(raiog,2)*pi)-(avioleta+arosa);				//Area girassois
	
		printf("%.4f %.4f %.4f\n", agirassol, avioleta, arosa);
	}
	return 0;
}
