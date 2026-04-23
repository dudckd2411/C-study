//----------------------9장 배열-----------------------------------

/*#include <stdio.h>

int main()
{
	int a[5], i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &a[i]);
	}

	for (i = 0; i < 5; i++)
	{
		printf("%d ", a[i]);
	}

	return 0;
}*/

//---------자가진단 1-------------

/*#include <stdio.h>

int main()
{
	char a[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &a[i]);
	}

	for (i = 0; i < 10; i++)
	{
		printf("%c", a[i]);
	}
}*/

/*#include <stdio.h>

int main()
{
	int a[10], i;

	for (i = 0; i < 10; i++)
	{
		a[i] = 1 + i;
	}

	for (i = 0; i < 10; i++)
	{
		printf("%d ", a[i]);
	}
	printf("\n");

	return 0;
}*/

//-----------자가진단 3번--------
/*#include <stdio.h>

int main()
{
	char a[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &a[i]);
	}

	printf("%c %c %c", a[0], a[3], a[6]);

	return 0;
}*/

//-------------4번---------------
/*#include <stdio.h>

int main()
{
	int num[100], i, count;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 0) break;
	}

	count = i-1;
	for (i = count; i >= 0; i--)
	{
		printf("%d ", num[i]);
	}

}*/

//-------------5번------------------------------------------

/*#include <stdio.h>

int main()
{
	double score[7] = { 0,85.6,79.5,83.1,80.0,78.2,75.0 };
	int i, num;
	double sum = 0;

	for (i = 0; i < 2; i++)
	{
		scanf("%d", &num);
		sum += score[num];
	}

	printf("%.1f",sum );

}*/

// -----------6번-----------------
/*#include <stdio.h>

int main()
{
	int num[10];
	int min=1000;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (min > num[i])
		{
			min = num[i];
		}
	}

	printf("%d\n", min);
}*/

//------------7번----------------- 
/*
#include <stdio.h>

int main()
{
	int num[10];
	int min = 10000, max = 1;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (num[i] < 100)
		{
			if (max < num[i])
			{
				max = num[i];
			}

		}

		else
		{
			if (min > num[i])
			{
				min = num[i];
			}
		}
	}

	if (max == 1) max = 100;
	if (min == 10000) min = 100;

	printf("%d %d", max, min);
}*/

// ---------------8번------------- //다시...풀기...

#include <stdio.h>

int main()
{
	int num[10];
	int sum = 0, sum_1 = 0, cnt = 0;
	double avg;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			sum += num[i];
			cnt++;
		}
		else
		{
			sum_1 += num[i];
		}
	}

	avg = (double)sum / cnt;

	printf("sum : %d\navg : %.1f", sum, avg);
}