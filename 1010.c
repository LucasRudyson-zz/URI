#include <stdio.h>
#include <stdlib.h>
int main(){
	int n1,n2,i;
	double n3,soma=0;
	for ( i = 0; i < 2; ++i){
		scanf("%d %d %lf",&n1,&n2,&n3);
		soma += n2*n3;
	}
	printf("VALOR A PAGAR: R$ %.2lf\n", soma);
	return 0;
}