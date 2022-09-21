#include<stdio.h>
int main()
{
	float cf, rate;
	printf ("Water Consumed in cubic feet: ");
	scanf ("%f", &cf);
	if (cf<=1000)
	{
		printf ("Bill Amount to be paid is 15$");
	}
		else if (cf>1000; cf<=2000)
		{
			rate=15+(cf-1000)*0.0175;
			printf ("Bill Amount to be paid is %f $",rate);
		}
			else if (cf>2000; cf<=3000)
			{
				rate=15+(cf-1000)*0.02;
				printf ("Bill Amount to be paid is %f $",rate);
			}
	else 
	printf ("Bill Amount to be paid is 70$");
	return 0;
}