#include<stdio.h>
#include<math.h>
int main ()
{
	char I;
	printf("The input character");
	scanf("%c",&I);
	if ((I>=65 && I<=90) || (I>=97 && I<=122))
	printf("is an Alphabet");
	else if (I>=48 && I<=57)
	printf("is a Digit");
	else 
	printf("is a special character");
	return 0;
}