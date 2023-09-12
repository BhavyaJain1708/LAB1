#include<stdio.h>
int main ()
{
	int a,b;
	printf("The two numbers are");
	scanf("%d %d",&a,&b);
	a=a+b;
	b=a-b;
	a=a-b;
	printf("After swap the two numbers are %d %d",a,b);
	return 0;
}