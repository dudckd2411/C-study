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
/////그냥 연습
/*
#include <stdio.h>

int main()
{
	int n;
	int i, j;
	int num = 0;

	scanf("%d", &n);

	for (i = 1; i <= n - 1; i++)
	{
		for (j = 1; j <= n - i; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= i *2-1; j++)
		{
			printf("*");
		}
		printf("\n");
	}

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= 2 * (n - i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
}*/

//(1)
/*#include <stdio.h>

int main()
{
	int n;
	char alpha='A';
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n-i+1; j++)
		{
			printf("%c", alpha);
			alpha++;
		}
		printf("\n");
	}
}*/

//(2)
/*
#include <stdio.h>

int main()
{
	int n;
	char alpha = 'A';
	int i, j;

	scanf("%d", &n);

	for (i = n; i >= 1; i--)
	{
		for (j = 1; j <= i; j++)
		{
			printf("%c", alpha);
			alpha++;
		}
		printf("\n");
	}
}*/

/*#include <stdio.h>

int main()
{
	int n, num=1;
	char alpha = 'A';
	int i, j;

	scanf("%d", &n);

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n - i + 1; j++)
		{
			printf("%d ", num);
			num++;
		}
		for (j = 1; j <= i; j++)
		{
			printf("%c ", alpha);
			alpha++;
		}
		printf("\n");
	}

}*/
////////////////////p.164 8강 형성평가 /////////////////

//1번
/*#include <stdio.h>

int main()
{
	int num;
	int i, j;
	int sum = 0, cnt = 0;
	int avg;


	for (i = 1; i <= 20; i++)
	{
		scanf("%d", &num);

		if (num == 0) break;

		sum += num;
		cnt++;

	}
	avg = sum / cnt;

	printf("%d %d", sum, avg);
}*/


//2번
/*#include <stdio.h>

int main()
{
	int num, a;
	int i, j;

	scanf("%d", &num);

	for (i = 1; num*i <= 100; i++)
	{
		a = num * i;

		printf("%d ", a);

		if (a % 10 == 0) break;

	}
}*/


//3번
/*#include <stdio.h>

int main()
{
	int num;
	int i, j;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= num - i; j++)
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
	int num;
	int i, j;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= i - 1; j++)
		{
			printf(" ");
		}

		for (j = 1; j <= 2 * (num - i) + 1; j++)
		{
			printf("*");
		}
		printf("\n");

	}
	for (i = 1; i <= num - 1; i++)
	{
		for (j = 1; j <= num - i-1; j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i + 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/

//5번
/*#include <stdio.h>

int main()
{
	int num;
	int i, j;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		for (j = 1; j <= 2 * (num - i); j++)
		{
			printf(" ");
		}
		for (j = 1; j <= 2 * i - 1; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}*/
