#include <stdio.h>

int main()
{
    while (1)
    {
        float sales, salary;
        printf("Enter sales in dollars (-1 to end):");
        scanf("%f", &sales);
        if (sales == -1)
            break;
        salary = 200 + sales * 0.09;
        printf("Salary is: $%.2f\n\n", salary);
    }
}

