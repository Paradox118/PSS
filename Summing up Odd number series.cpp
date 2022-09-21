#include<stdio.h>
int main()
{
	int i,n,sum=0;
	printf("\n Enter the Maximum Limit Value: ");
	scanf ("%d", &n);
	for (i=1;i<=n;i++)
	{
		if (i%2!= 0)
		{
			sum=sum+i;
		}
		
}
printf("\n The sum of odd numbers from 1 to %d = %d",n, sum);
return 0;
}