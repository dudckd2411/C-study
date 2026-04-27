//-----------------9장 형성평가--------------------

// 1번
/*#include <stdio.h>

int main()
{
	char a[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &a[i]);
	}

	for (i = 9; i >= 0; i--)
	{
		printf("%c ", a[i]);
	}

	return 0;
}*/

// 2번-1

/*#include <stdio.h>

int main()
{
	int num[5];
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 5; i++)
	{

		if (i % 2 == 0)
		{
			sum += num[i];
		}

		else continue;
	}
	printf("%d", sum);
}

// 2번 -2
#include <stdio.h>

int main()
{
	int num[5];
	int i;
	int sum = 0;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 5; i++)
	{

		sum = num[0] + num[2] + num[4];

	}
	printf("%d", sum);
}*/

/*// 3번

#include <stdio.h>

int main()
{
	int num[10];
	int i, odd = 0, even = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (i % 2 == 0)
		{
			odd += num[i];
		}

		else
		{
			even += num[i];
		}
	}

	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}*/

// 4번
/*
#include <stdio.h>

int main()
{
	int num[100];
	int i, cnt;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == -1) break;
	}

	cnt = i;

	int num_1;

	num_1 = (cnt <3) ? 0 : cnt - 3;

	for (i =num_1; i < cnt; i++)
	{
		printf("%d ", num[i]);
	}
}*/

//5번

/*#include <stdio.h>

int main()
{
	double num[6];
	int i, cnt=0;
	double sum = 0;
	double avg;

	for (i = 0; i < 6; i++)
	{
		scanf("%lf", &num[i]);

	}

	for (i = 0; i < 6; i++)
	{
		sum += num[i];
		cnt++;
	}

	avg = sum / cnt;

	printf("%.1f", avg);
}*/


//6번

/*#include <stdio.h>

int main()
{
	char a[6] = { 'J', 'U', 'N', 'G', 'O', 'L' };
	char ch;
	int i, j;
	int num = 7;

	scanf(" %c", &ch);

	for (i = 0; i < 6; i++)
	{
		if (a[i] == ch)
		{
			num = i; break;
		}

	}

	if (num == 7)
	{
		printf("none");
	}

	else
	{
		printf("%d", num);
	}
}*/

// 7번

/*#include <stdio.h>

int main()
{
	int num[100];
	int max = -1000, min = 1000;
	int i;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 999) break;

		if (max < num[i])
		{
			max = num[i];
		}

		if (min > num[i])
		{
			min = num[i];
		}
	}

	printf("max : %d \n", max);
	printf("min : %d", min);
}*/

// 8번

/*#include <stdio.h>

int main()
{
	int num[100];
	int i;
	int Mul=0, sum = 0;
	double avg;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 0) break;

		if (num[i] % 5 == 0)
		{
			sum += num[i];
			Mul++;
		}
	}

	avg = (double)sum / Mul;

	printf("Multiples of 5 : %d\n", Mul);
	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", avg);
}*/