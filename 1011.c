#include <stdio.h>
#include <stdlib.h>
#include <math.h>
int main(){
	int R;
	double resultado,pi;
	pi = 3.14159;
	scanf("%d",&R);
	resultado = (4.0/3.0)*pi*(pow(R,3));
	printf("VOLUME = %.3lf\n", resultado);
	return 0;
}