#include<stdio.h>
int main ()
{
	int i=2, n;
	printf("Enter a Number:");
	scanf("%d", &n);
	printf ("\nEven Numbers between 1 and %d are : \n",n);
	for (i=1; i<=n; i++)
	{
		if (i%2==0)
		{
			printf ("%d\n",i);
		}
	}
	return 0;
}