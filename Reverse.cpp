#include<stdio.h>
int main ()
{
	int n,Rev=0,r;
	printf("Enter the Number: ");
	scanf("%d", &n);
	while (n!=0)
	{
		r=n%10;
		Rev=Rev*10+r;
		n=n/10;
	}
	printf("The reverse of the number is : %d",Rev);
	return 0;
}