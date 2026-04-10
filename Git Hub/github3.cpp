/////// 반복제어문2 형성평가 p.146/////////

//1번
/*#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{
		printf("JUNGOL\n");
	}
}*/

//2번
/*#include <stdio.h>

int main()
{
	int a, b;
	int min, max;

	scanf("%d %d", &a, &b);

	min = (a < b) ? a : b;
	max = (a > b) ? a : b;

	for (int i = min; i <= max; i++)
	{
		printf("%d ", i);
	}
}*/

//3번

/*#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{

		if (i % 5 == 0)
		{
			sum += i;
		}
		else continue;

	}
	printf("%d", sum);
}*/

//4번

/*#include <stdio.h>

int main()
{
	int a, num;
	int sum = 0;
	double avg;

	scanf("%d", &a);

	for (int i = 1; i <= a; i++)
	{
		scanf("%d", &num);
		sum += num;
	}

	avg = (double)sum / a;

	printf("%.2f", avg);
}*/

//5번

/*#include <stdio.h>

int main()
{
	int num;
	int even=0, odd=0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &num);

		if (num % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}
	}

	printf("even : %d\n", even);
	printf("odd : %d", odd);
}*/

//6번

/*#include <stdio.h>

int main()
{
	int a, b;
	int start, end;
	int sum=0, cnt=0;
	double avg;

	scanf("%d %d", &a, &b);

	if (a<b)
	{
		start = a;
		end = b;
	}

	else
	{
		start = b;
		end = a;
	}

	for (int i = start; i <= end; i++)
	{
		if (i % 3 == 0 || i % 5 == 0)
		{
			sum += i;
			cnt++;
		}


	}
	avg = (double)sum / cnt;

	printf("sum : %d\n", sum);
	printf("avg : %.1f", avg);

}*/

//7번

/*#include <stdio.h>

int main()
{
	int num;
	int mult = 0;

	scanf("%d", &num);

	for (int i = 1; i <=10; i++)
	{
		mult = num * i;

		printf("%d ",mult);
	}
}*/

//8번
/*
#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= a; i++)
	{
		for (int j = 1; j <= b; j++)
		{
			printf("%d ",i * j);

		}
		printf("\n");

	}
}*/

//9번
/*#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{

		for (int j = 1; j <= num; j++)
		{
			printf("(%d, %d) ", i, j);
		}
		printf("\n");
	}
}*/

//10번

/*#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	for (int i = 1; i <= 9; i++)
	{
		if (a < b)
		{
			for (int j = a; j <= b; j++)
			{
				printf("%d * %d = %2d   ", j, i, j * i);
			}
		}
		else
		{
			for (int j = a; j >= b; j--)
			{
				printf("%d * %d = %2d   ", j, i, j * i);
			}
		}
		printf(" \n");
	}
}*/
