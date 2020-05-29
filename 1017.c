#include <stdio.h>
#include <stdlib.h>
int main(){
	int x,y;
	double p;
	scanf("%d",&x);
	scanf("%d",&y);
	p = x*(y/12.0);
	printf("%.3lf\n",p);
	return 0;
}