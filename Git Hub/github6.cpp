//6번

/*#include <stdio.h>

int main()
{
	int n;
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= i; j++)
		{
			printf("%d ", j);
		}
		printf("\n");
	}
}*/


// 7번
/*#include <stdio.h>

int main()
{
	int n;
	int i, j;
	char alpha = 'A';
	int num = 0;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= (n - i) + 1; j++)
		{
			printf("%c ", alpha);
			alpha++;
		}
		for (j = 1; j <= i-1; j++)
		{
			printf("%d ", num);
			num++;
		}
		printf("\n");
	}

}*/


//8번
/*#include <stdio.h>

int main()
{
	int num = 1;
	int n, i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= n-i+1; j++)
		{

			printf("%d ", num);
			num++;
		}
		printf("\n");
	}
}*/

//9번

/*#include <stdio.h>

int main()
{
	int n, i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("# ");
		}
		printf("\n");
	}

	for(i=1;i<n;i++)
	{

		for (j = 1; j <= i; j++)
		{
			printf("  ");
		}
		for (j = 1; j <= n-i; j++)
		{
			printf("# ");
		}
		printf("\n");

	}
}*/

//10번

/*#include <stdio.h>

int main()
{
	int n, i, j;
	int num = 1;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", num);

			num += 2;
			if (num > 10)
			{
				num -= 10;
			}
		}
		printf("\n");
	}

}*/