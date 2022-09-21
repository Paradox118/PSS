#include<stdio.h>
int main()
{
	int age;
	printf ("Enter Age : ");
	scanf ("%d", &age);
	if (age>=55)
	{
		printf ("Ticket Rate = 10$");
	}
		else if (age>=21 and age<=54)
	{
		printf ("Ticket Rate = 15$");
	}
		else if (age>=13 and age<=20)
	{
		printf ("Ticket Rate = 10$");
	}
		else if (age>=3 and age<=12)
	{
		printf ("Ticket Rate = 5$");
	}
		else if (age<3)
	{
		printf ("Ticket Rate = Free");
	}
	return 0;
}