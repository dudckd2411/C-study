//p.113 반복제어문1 자가진단 
/*#include <stdio.h>

int main()
{
	int num=1;

	while (num <= 15)
	{
		printf("%d ", num++);
	}
}*/

/*#include <stdio.h>

int main()
{
	int num ;
	int sum = 0;
	int a = 1;

	scanf("%d", &num);

	while (a <= num)
	{
		sum += a;
		a++;
	}

	printf("%d", sum);
}*/

/*#include <stdio.h>

int main()
{
	int num;

	while (1)
	{
		printf("number? ");

		scanf("%d", &num);

		if (num == 0) break;

		if (num > 0)
		{
			printf("positive integer\n");
		}

		else if (num < 0)
		{
			printf("negative number\n");
		}
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int num;
	int sum = 0, cnt = 0;
	double avg;


	while (1)
	{
		scanf("%d", &num);


		if (num)
		{
			sum += num;
			cnt++;
		}
		if (num >= 100)
			break;
	}
	avg = (double)sum / cnt;

	printf("%d\n", sum);
	printf("%.1f", avg);

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int num;

	while (1)
	{
		scanf("%d", &num);

		if (num == -1)
			break;

		if (num % 3 != 0)
			continue;

		if (num % 3 == 0)
		{
			printf("%d\n", num / 3);
		}
	}
}*/

/*#include <stdio.h>

int main()
{
	int num;

	do
	{
		printf("1. Korea\n");
		printf("2. USA\n");
		printf("3. Japan\n");
		printf("4. China\n");

		printf("number? ");
		scanf("%d", &num);

		switch (num)
		{
		case 1:
			printf("\nSeoul\n\n");
			break;
		case 2:
			printf("\nWashington\n\n");
			break;
		case 3:
			printf("\nTokyo\n\n");
			break;
		case 4:
			printf("\nBeijing\n\n");
			break;
		default:
			printf("\nnone\n\n");
		}
	}
	while (num >= 1 && num <= 4); /////////////////////

	return 0;
}*/

///////////// p.126 형성평가////////////////// 

//1번
/*#include <stdio.h>

int main()
{
	int num;
	int a = 1;

	scanf("%d", &num);

	while (a <= num)
	{
		printf("%d ",a);
		a++;
	}
}*/

//2번
/*#include <stdio.h>

int main()
{
	int num;
	int odd = 0, even = 0;

	while (1)
	{
		scanf("%d", &num);

		if (num == 0)
		break;

		if (num % 2 == 0)
		{
			even++;
		}
		else
		{
			odd++;
		}

	}
	printf("odd : %d\n", odd);
	printf("even : %d\n", even);
}*/

//3번
/*#include <stdio.h>

int main()
{
	int num;
	int sum = 0, cnt = 0;
	double avg;

	while (1)
	{
		scanf("%d", &num);

		if (num < 0 || num > 100) break;

		if (num >= 0 && num <= 100)
		{
			sum += num;
			cnt++;
		}

		avg = (double)sum / cnt;
	}

	printf("sum : %d\n", sum);
	printf("avg : %.1f\n", avg);
}*/

//4번
/*#include <stdio.h>

int main()
{
	int num;
	int cnt = 0;

	while (1)
	{
		scanf("%d", &num);

		if (num == 0) break;
		if (num % 3 == 0) continue;
		if (num % 5 == 0) continue;
		else
		{
			cnt++;
		}
	}
	printf("%d", cnt);
}*/

//5번
/*#include <stdio.h>

int main()
{
	int Base, Height;
	double width;
	char c;


	do
	{
		printf("Base = ");
		scanf("%d", &Base);

		printf("Height = ");
		scanf("%d", &Height);

		width = (double)(Base * Height) / 2;

		printf("Triangle width = %.1f\n", width);

		printf("Continue? ");
		scanf(" %c", &c);

	}
	while (c == 'Y' || c == 'y');
}*/

//////////////////7장 반복제어문2 132p //////////////////////////

//자가진단 1번

/*#include <stdio.h>

int main()
{
	char a;

	scanf(" %c", &a);

	for (int i = 1; i <= 20; i++)
	{
		printf("%c", a);
	}

	return 0;
}*/

//2번

/*#include <stdio.h>

int main()
{

	for (int i = 10; i <= 20; i++)
	{
		printf("%d ", i);
	}
}*/

//3번

/*#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++ )
	{
		if (i % 2 == 0)
		{
			printf("%d ", i);
		}
		else continue;
	}

}*/

//4번

/*#include <stdio.h>

int main()
{
	int num;
	int sum = 0;

	scanf("%d", &num);


	for (int i = num; i <= 100; i++)
	{
		sum += i;
	}

	printf("%d", sum);
}*/

// 5번

/*#include <stdio.h>

int main()
{
	int num;
	int cnt_1=0, cnt_2=0;

	for (int i = 1; i <= 10; i++)
	{
		scanf("%d", &num);

		if (num % 3 == 0)
		{
			cnt_1++;
		}

		if (num % 5 == 0)
		{
			cnt_2++;
		}
	}

	printf("Multiples of 3 : %d\n", cnt_1);
	printf("Multiples of 5 : %d\n", cnt_2);

	return 0;
}*/

// 6번 

/*# include <stdio.h>

int main()
{
	int num, score;
	int sum = 0;
	double avg;

	scanf("%d", &num);

	for (int i = 1; i <= num; i++)
	{

		scanf("%d", &score);

		sum += score;

	}

	avg = (double)sum / num;

	if (avg >= 80)
	{
		printf("avg : %.1lf\n", avg);
		printf("pass");
	}
	printf("%d", i);
	else
	{
		printf("avg : %.1lf\n", avg);
		printf("fail");
	}
}*/

// 7번

/*#include <stdio.h>
int main()
{
	for (int i = 2; i <= 6; i++)
	{


		for (int j = i; j <= i+4; j++)
		{

			printf("%d ", j);
		}

		printf("\n");
	}
	return 0;
}*/

// 8번 
/*#include <stdio.h>

int main()
{
	for (int i = 2; i <= 4; i++)
	{
		for (int j = 1; j <= 5; j++)
		{
			printf("%d * %d = %2d   ", i, j, i*j);
		}
		printf("\n");
	}
}*/