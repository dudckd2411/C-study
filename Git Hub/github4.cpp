//////////////////8장 반복제어문 3장 ///////////////////

// 자가진단 1번
/*
#include <stdio.h>

int main()
{
	int n;
	int sum = 0, cnt = 0;

	scanf("%d", &n);

	for (int i = 1; ; i +=2)
	{

		sum += i;
		cnt++;

		if (sum >= n) break;
	}
	printf("%d %d", cnt, sum);
}*/

//2번

/*#include <stdio.h>

int main()
{
	int n;
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

//3번

/*#include <stdio.h>

int main()
{
	int n;

	scanf("%d", &n);

	for (int i = n; i >= 1; i--)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (int i = 1; i <= n; i++)
	{
		for (int j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

//4번

/*#include <stdio.h>

int main()
{
	int n;
	scanf("%d", &n);

	for (int i = 1; i <= n; i++)
	{

		for (int j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}


		for (int j = 1; j <= n - i + 1; j++)
		{
			printf("*");
		}

		printf("\n");
	}

	return 0;
}*/

//5번

/*#include <stdio.h>

int main()
{
	int n;
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i-1; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= 2*(n-i)+1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
}*/

