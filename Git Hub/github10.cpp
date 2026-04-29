//---------------------10장 형성평가--------------------------//

//1번
/*
#include <stdio.h>

int main()
{
	int dice[7] = { 0 };
	int num, i;

	for (i = 1; i <= 10; i++)
	{
		scanf("%d", &num);
		dice[num]++;

	}

	for (i = 1; i <= 6; i++)
	{
		printf("%d : %d\n", i, dice[i]);
	}
}*/

//2번

/*#include <stdio.h>

int main()
{
	int score[11] = { 0 };
	int i, num;

	while (1)
	{
		scanf("%d", &num);

		if (num == 0)break;
		score[num / 10]++;
	}

	for (i = 10; i >= 0; i--)
	{
		if (score[i] > 0)
		{
			if (i == 100)
			{
				printf("100 : %d person\n", score[i]);
			}
			else
			{
				printf("%d : %d person\n", i*10,score[i]);
			}
		}
	}
}*/


//3번

/*#include <stdio.h>

int main()
{
	int a, b,i;
	int fibo[11] = { 0 };

	scanf("%d %d", &a, &b);

	fibo[1] =  a , fibo[2] =  b ;

	for (i = 3; i <= 10; i++)
	{
		fibo[i] = (fibo[i - 1] + fibo[i - 2]) % 10;
	}

	for (i = 1; i <= 10; i++)
	{
		printf("%d ", fibo[i]);
	}
}*/

//4번

/*#include <stdio.h>

int main()
{
	int i, j;
	int sum = 0;
	int arr[4][3] = { {3,5,9}, {2,11,5}, {8,30,10},{22,5,1} };

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 3; j++)
		{
			sum += arr[i][j];
			printf("%d ", arr[i][j]);
		}
		printf("\n");

	}
	printf("%d", sum);

}*/

//5번

/*#include <stdio.h>

int main()
{
	int num[4][4] = { 0 }; // 값을 더하기 위해 칸을 한개 더 만듬
	int i, j;

	for (i = 0; i < 4; i++)
	{
		printf("%dclass? ", i+1);
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &num[i][j]);
			num[i][3] += num[i][j];
		}
	}
	printf("\n");

	for (i = 0; i < 4; i++)
	{

		printf("%dcass : %d ", i + 1, num[i][3]);
		printf("\n");
	}
}*/