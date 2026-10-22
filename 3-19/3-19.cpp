#include <stdio.h>

int main()
{
	while (1)
	{
		float interest, principal, rate, days;
		printf("Enter loan principal (-1 to end): ");
		scanf("%f", &principal);
		if (principal == -1)
			break;
		printf("Enter interest rate: ");
		scanf("%f", &rate);
		printf("Enter terms of the loan in days: ");
		scanf("%f", &days);
		interest = principal * rate * days / 365;
		printf("The interest charge is $%.2f\n\n", interest);
	}
}
