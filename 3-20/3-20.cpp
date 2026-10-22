#include <stdio.h>

int main()
{
	while (1)
	{
		float hours, hourlyRate, salary;
		printf("Enter # of hours worked (-1 to end):");
		scanf("%f", &hours);
		if (hours == -1)
			break;
		printf("Enter hourly rate of the worker ($00.00):");
		scanf("%f", &hourlyRate);
		if (hours <= 40)
			salary = hours * hourlyRate;
		else
			salary = 40 * hourlyRate + (hours - 40) * (hourlyRate * 1.5);
		printf("%.2f\n\n", salary);
	}
}
