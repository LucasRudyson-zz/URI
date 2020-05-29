#include <stdio.h>
#include <stdlib.h>
int main(){
	double A,B,C;
	scanf("%lf",&A);
	scanf("%lf",&B);
	A *=3.5;
	B *=7.5;
	C = (A+B)/11;
	printf("MEDIA = %.5lf\n",C);
	return 0;
}