#include<stdio.h>
#include<math.h>
int main ()
{
	float p,r,t,s,c;
	printf("The principal is ");
	scanf("%f",&p);
	printf("The rate is");
	scanf("%f",&r);
	printf("The time is");
	scanf("%f",&t);
	s=(p*r*t)/100;
	c=p*pow(1+r/100,t)-p;
	printf("The simple and compund interest is %f %f respectively",s,c);
	return 0;
}