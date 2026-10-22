#include <stdio.h>
int main()
{
	for (int i = 0; i < 5; i++)
	{
		for (int j = 4; j > i; j--)
		{
			printf(" ");
		}
		for (int j = 0; j < i * 2 + 1; j++)
		{
			printf("*");
		}
		/*
		for (int j = 4; j > i; j--)
		{
			printf(" ");
		}終端機看不到可以省略
		*/
		printf("\n");
	}
	for (int i = 0; i < 4; i++)
	{
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}
		for (int j = 7; j > i * 2; j--)
		{
			printf("*");
		}
		/*
		for (int j = 0; j < i + 1; j++)
		{
			printf(" ");
		}終端機看不到可以省略
		*/
		printf("\n");
	}
}
// 4 + * + 4 i = 0
// 3 + *** + 3 i = 1
// 2 + ***** + 2 i = 2
// 1 + ******* + 1 i = 3
// 0 + ********* + 0 i = 4


