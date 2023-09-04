#include<stdio.h>
int main ()
{
	int a,b,c,d;
	scanf("%d", &a);
	b=1000*a;
	c=100000*a;
	d=1000000*a;
	printf("%dmeters",b);
	printf("%dcentimeters",c);
	printf("%dmillimeters",d);
	return 0;
}
