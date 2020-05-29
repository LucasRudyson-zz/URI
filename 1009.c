#include <stdio.h>
#include <stdlib.h>
int main(){
	char nome[20];
	double n1,n2;
	scanf("%s",nome);
	scanf("%lf",&n1);
	scanf("%lf",&n2);
	n2 = n1 + (n2*15/100);
	printf("TOTAL = R$ %.2lf\n",n2);
	return 0;
}