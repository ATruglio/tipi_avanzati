#include <stdio.h>
int main(){
	int a[3];
	int s;
	double m;
	printf("Inserire tre numeri interi \t");
	scanf("%d",&a[0]);
	printf("\n");
	scanf("%d",&a[1]);
	printf("\n");
	scanf("%d",&a[2]);
	s=a[0]+a[1]+a[2];
	m=s/3.0;
	printf("%d\t",a[0]);
	printf("%d\t",a[1]);
	printf("%d\t",a[2]);
	printf("%d\t",s);
	printf("%f\t",m);
	return 0;
}