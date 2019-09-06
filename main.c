
#include <stdio.h>
#include <stdbool.h>
#include <math.h>
bool a = false;
float totalbudget, x, y, z;
float  ant, blo, can;

int main (void){
	while (a == false){
	printf("Enter total budget in dollars:");
	scanf ("%f", &totalbudget);
	if (totalbudget >= 0){
	a = true;
	printf("Enter Antwerp proportion:");
	scanf ("%f", &x);
	printf("Enter Bloemfentein proportion:");
	scanf ("%f", &y);
	
		if ( 0<x && x<=1 && 0<y && y<=1 && (x + y) <= 1){
		a = true;
		ant = totalbudget * x * 1.3006;
		blo = totalbudget * y * 7.223;
		can = totalbudget * (1-x-y) * 10.9705;

		printf("Antwerp budget is: %.2f euros\n", ant);
		printf("Bloemfentein budget is: %.2f rands\n", blo);
		printf("Cancun budget is: %.2f pesos\n", can);
		}
		else{
		printf ("input error\n");
		a = false;
		}
	}
	else{
	printf ("input error\n");
	a = false;
	}
}
return 0;
}
