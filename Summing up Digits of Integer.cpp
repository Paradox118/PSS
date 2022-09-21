#include<stdio.h>
int main ()
{
	int n,sum=0,x;
	printf("Enter the Number: ");
	scanf("%d", &n);
	while (n!=0)
	{
		x=n%10;
		sum=sum+x;
		n=n/10;
	}
	printf("The sum of digits is : %d",sum);
	return 0;
}