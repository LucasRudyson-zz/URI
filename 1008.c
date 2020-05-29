#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2;
	double n3;
	scanf("%d",&n1);
	scanf("%d",&n2);
	scanf("%lf",&n3);
	printf("NUMBER = %d\n",n1);
	printf("SALARY = U$ %.2lf\n",n2*n3);
}