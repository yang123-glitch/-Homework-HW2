#include <stdio.h>

int main()
{
	while (1) 
	{
		int code;
		scanf("%d", &code);
		if (code == -1)
			break;
		switch (code)
		{
		case 1:
		{
			int weeklySalary;
			printf("Enter weekly salary of the manager:\n");
			scanf("%d", &weeklySalary);
			printf("Salary is %d\n", weeklySalary);
			break;
		}
		case 2:
		{
			double hours, hourlyRate, salary_1;
			printf("Enter # of hours worked:");
			scanf("%lf", &hours);
			printf("Enter hourly rate of the worker ($00.00):");
			scanf("%lf", &hourlyRate);
			if (hours <= 40)
				salary_1 = hours * hourlyRate;
			else
				salary_1 = 40 * hourlyRate + (hours - 40) * (hourlyRate * 1.5);
			printf("Salary is %.lf\n", salary_1);
			break;
		}
		case 3:
		{
			double weeklySales, salary_2;
			printf("Enter weeklySales of the commission worker:\n");
			scanf("%lf", &weeklySales);
			salary_2 = 250 + (5.7 / 100) * weeklySales;
			printf("Salary is %.1f\n", salary_2);
			break;
		}
		case 4:
		{
			double price, number, salary_3;
			printf("Enter price per item:");
			scanf("%lf", &price);
			printf("Enter quantity produced:");
			scanf("%lf", &number);
			salary_3 = price * number;
			printf("Salary is %.1f\n", salary_3);
			break;
		}
		}
	}
}
