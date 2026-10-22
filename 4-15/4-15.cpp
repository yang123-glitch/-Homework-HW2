#include <stdio.h>
#include <math.h>

int main()
{

	float investment = 5000.0;
	for (float i = 0.1; i <= 0.121; i += 0.005)
	{
		float total;
		for (int j = 0; j < 16; j++)
		{
			total = investment * pow(1 + i, j);
			printf("%.2f\n", total);
		}
		printf("\n");
	}
}
