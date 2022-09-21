#include<stdio.h>
int main()
{
	int n, f0=0, f1=1, fb, i;
	printf ("Enter the number of terms: \n");
	scanf ("%d", &n);
	printf ("First %d terms of Fibonacci series: \n",n);
	for (i=0; i<n; i++)
	{
		if (i<=1)
		fb=i;
		else
		{
			fb=f0+f1;
			f0=f1;
			f1=fb;
		}
		printf("%d\n", fb);
	}
	return 0;
}