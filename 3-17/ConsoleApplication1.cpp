#include <stdio.h>
int main()
{
	while (1)
	{
		int accoutNumber;
		float beginningBalance, totalCharges, totalCredit, limit, newBalance;
		printf("Enter account number (-1 to end):");
		scanf("%d", &accoutNumber);
		if (accoutNumber == -1)
			break;
		printf("Enter beginning balance:");
		scanf("%f", &beginningBalance);
		printf("Enter total charges:");
		scanf("%f", &totalCharges);
		printf("Enter total credits:");
		scanf("%f", &totalCredit);
		printf("Enter credit limit:");
		scanf("%f", &limit);
		newBalance = beginningBalance + totalCharges - totalCredit;
		if (newBalance > limit)
		{
			printf("Account: %d\n", accoutNumber);
			printf("Credit limit: %.2f\n", limit);
			printf("Balance: %.2f\n", newBalance);
			printf("Credit Limit Exceeded.\n");
		}
		printf("\n");
	}
}