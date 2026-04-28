//9장 형성평가

//9번
/*#include <stdio.h>

int main() {
	int num[100];
	int i, cnt;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 0) break;
	}

	cnt = i;

	printf("%d\n", i);

	for (i = 0; i < cnt; i++)
	{
		if (num[i] % 2 == 0)
		{
			printf("%d ", num[i] / 2);
		}
		else
		{
			printf("%d ", num[i] * 2);
		}
	}
}*/

//10번
/*#include <stdio.h>

int main()
{
	int n, arr[20];
	int i, j, tmp;


	scanf("%d", &n);

	for (i = 0; i < n; i++)
	{
		scanf("%d", &arr[i]);
	}


	for (i = 0; i < n - 1; i++)
	{
		for (j = i + 1; j < n; j++)
		{
			if (arr[i] < arr[j])
			{
				tmp = arr[i];
				arr[i] = arr[j];
				arr[j] = tmp;
			}
		}
	}

	for (i = 0; i < n; i++)
	{
		printf("%d\n", arr[i]);
	}

}*/


//-----------------10장 배열2 ----------------------------


/*//#include <stdio.h>
int main()
{
	int num, i;
	int count[11] = { 0 };
	while (1) {
		scanf("%d", &num);
		if (num < 1 || num > 10) break;
		count[num]++;
	}
	for (i = 1; i <= 10; i++) {
		if (count[i] > 0) {
			printf("%d : %d개\n", i, count[i]);
		}
	}
	return 0;
}*/

//자가진단 1번
/*
#include <stdio.h>

int main()
{
	char eng;
	int num[26] = { 0 };
	int i;

	while (1)
	{
		scanf(" %c", &eng);

		if (eng < 'A' || eng > 'Z') break;
		num[eng - 'A']++;
	}

	for (i = 0; i <= 26; i++)
	{
		if (num[i] > 0)
		{
			printf("%c : %d\n", i + 'A', num[i]);
		}
	}
}*/

//2번

/*#include <stdio.h>

int main()
{
	int num, i;
	int cnt[10] = { 0 };

	while (1)
	{
		scanf("%d", &num);

		if (num == 0)break;
		cnt[num % 10]++;
	}

	for (i = 0; i < 10; i++)
	{
		if (cnt[i]>0)
		{
			printf("%d : %d개\n", i, cnt[i]); //  이 부분 공부해야할듯
		}
	}
}*/

//자가진단 2번

/*#include <stdio.h.>

int main()
{
	int num, i;
	int cnt[100] = { 0 };

	while (1)
	{
		scanf("%d", &num);

		if (num == 0) break;
		cnt[num / 10]++;
	}

	for (i = 0; i < 100; i++)
	{
		if (cnt[i] > 0)
		{
			printf("%d : %d\n", i, cnt[i]); // 이 부분 공부해야할듯
		}
	}
}*/

//3번

/*#include <stdio.h>

int main()
{
	int i;
	int fibo[41] = { 0,1,1 };

	for (i = 3; i <= 40; i++)
	{
		fibo[i] = fibo[i - 1] + fibo[i - 2];
	}

	for (i = 10; i <= 40; i += 10)
	{
		printf("피보나치 수열 %d항 : %d\n", i, fibo[i]);
	}
}*/

// 자기진단 3번

/*#include <stdio.h>

int main()
{
	int num[100] = { 100 };
	int i;
	int a;
	int cnt = 0;

	scanf("%d", &a);

	num[1] = a;

	for (i = 2; i <= 100; i++)
	{
		num[i] = num[i - 2] - num[i - 1];

		if (num[i] < 0) break;
	}
	cnt = i;

	for (i = 0; i <= cnt; i++)
	{
		printf("%d ", num[i]);
	}

}*/


//4번

/*#include <stdio.h>
int main()
{
	int i, j;
	int arr[3][3] = { 3, 5, 4, 2, 6, 7, 8, 10, 1 };
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//자가진단 4번

/*#include <stdio.h>

int main()
{
	int i, j;
	int arr[3][5] = { 5,8,10,6,4,11,20,1,13,2,7,9,14,22,3 };

	for (i = 0; i < 3; i++)
	{
		for(j=0;j<5;j++)
		{
			printf("%2d  ", arr[i][j]);
		}
		printf("\n");
	}
}*/

//5번

/*#include <stdio.h>
int main()
{
	int i, j;
	int a[3][3], b[3][3], hap[3][3];
	for (i = 0; i < 3; i++) {
		printf("첫번째 배열 %d행 ", i + 1);
		for (j = 0; j < 3; j++) {
			scanf("%d", &a[i][j]);
		}
	}
	for (i = 0; i < 3; i++) {
		printf("두번째 배열 %d행 ", i + 1);
		for (j = 0; j < 3; j++) {
			scanf("%d", &b[i][j]);
		}
	}
	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++) {
			hap[i][j] = a[i][j] + b[i][j];
		}
	}
	for (i = 0; i < 3; i++) {
		for (j = 0; j < 3; j++) {
			printf("%d ", hap[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//자가진단 5번

/*#include <stdio.h>

int main()
{
	int i, j;
	int a[2][4], b[2][4], mul[2][4];

	scanf("%s", )

	for (i = 0; i < 2; i++)
	{

	}
}*/

//6번
/*
#include <stdio.h>
int main()
{
	int i, j;
	int score[4][4] = { {0} };
	for (i = 0; i < 3; i++) {
		printf("%d번째 학생의 점수 ", i + 1);
		for (j = 0; j < 3; j++) {
			scanf("%d", &score[i][j]);
			score[i][3] += score[i][j];
			score[3][j] += score[i][j];
			score[3][3] += score[i][j];
		}
	}
	printf("    국어 영어 수학 총점\n");
	for (i = 0; i < 4; i++) {
		if (i < 3) printf(" %d번", i + 1);
		else printf("합계");
		for (j = 0; j < 4; j++) {
			printf("%4d", score[i][j]);
		}
		printf("\n");
	}
	return 0;
}*/

//자가진단 6번
/*#include <stdio.h>

int main()
{
	int i, j, cnt=0;
	float score[5][4] = { {0} };
	float avg[5] = {0};

	for (i = 0; i < 5; i++)
	{
		for (j = 0; j < 4; j++)
		{
			scanf(" %f", &score[i][j]);
			avg[i] += score[i][j];

		}
	}

	for (i = 0; i < 5; i++)
	{
		if (avg[i] / 4 < 80)
		{
			printf("fail ");
		}
		else
		{
			printf("pass ");
			cnt++;
		}
		printf("\n");
	}
	printf("Succesful : %d\n", cnt);
}*/

//7번
/*
#include <stdio.h>

int main()
{

}*/


//----------배열1부터 다시 풀어보기 -----------
//1번
/*
#include <stdio.h>

int main()
{
	int num[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf("%d", &num[i]);

		printf("%d ", num[i]);
	}

}*/

//자가진단 1번

/*#include <stdio.h>

int main()
{
	char ch[5];
	int i;

	for (i = 0; i < 5; i++)
	{
		scanf(" %c", &ch[i]);

		printf("%c", ch[i]);
	}

}*/

//2번
/*
#include <stdio.h>

int main()
{
	char ch[26];
	int i;

	for (i = 0; i < 26; i++)
	{
		ch[i] = 'A' + i;
	}

	for (i = 25; i >= 0; i--)
	{
		printf("%c ", ch[i]);
	}
}*/

//자가진단 2번
/*#include <stdio.h>

int main()
{
	int num[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		num[i] = 1 + i;

		printf("%d ", num[i]);
	}
}*/

//3번

/*#include <stdio.h>

int main()
{
	int num[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);

	}

	printf("%d %d %d", num[2], num[4], num[9]);
}*/

//#자가진단 3번
/*
#include <stdio.h>

int main()
{
	char ch[10];
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf(" %c", &ch[i]);
	}

	printf("%c %c %c", ch[0], ch[3], ch[6]);
}*/

//4번

/*#include <stdio.h>

int main()
{
	int num[100];
	int i,cnt;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 0) break;
	}

	cnt = i; // 위에 반복문에서 i가 돈 회수만큼 cnt에 대입
	for (i = 1; i < cnt; i+=2) // 마지막 0입력은 빼야하니까 < 부호
	{
		printf("%d ", num[i]);
	}
}*/

//자가진단 4번

/*#include <stdio.h>

int main()
{
	int num[100];
	int i,cnt;

	for (i = 0; i < 100; i++)
	{
		scanf("%d", &num[i]);

		if (num[i] == 0) break;
	}
	cnt = i;

	for (i = cnt-1; i >=0; i--) //cnt-1을 하면 위에 반복문에서 0 반복은 사라짐
	{
		printf("%d ", num[i]);
	}
}*/


//자가진단 5번

/*#include <stdio.h>


int main()
{
	double score[7] = { 0, 85.6, 79.5, 83.1, 80.0, 78.2, 75.0 };
	int i, num;
	double sum = 0;


	for (i = 0; i < 2; i++)
	{
		scanf("%d", &num); //num은 index다

		sum += score[num]; //score의 num은 배열요소이다
	}
	printf("%.1f", sum);
}*/

// 6번

/*#include <stdio.h>

int main()
{
	int num[10];
	int max = 0; //max는 먼저 가장 작은값을 넣어놔야 후에 비교할 수 있음
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);

		if (max < num[i])
		{
			max = num[i];
		}
	}

	printf("%d\n", max);

}*/

//자가진단 6번

/*#include <stdio.h>

int main()
{
	int num[10];
	int min = 1001;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);

		if (min > num[i])
		{
			min = num[i];
		}
	}

	printf("%d", min);
}*/

//7번

/*#include <stdio.h>

int main()
{
	int num[10];
	int min = 10000, max = -10000;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (num[i] % 2 == 0)
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
	printf("%d %d", min, max);
}*/

//자가진단 7번

/*#include <stdio.h>

int main()
{
	int num[10];
	int min = 10000, max = 0;
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
	printf("%d %d", max, min);
}*/

//8번
/*
#include <stdio.h>

int main()
{
	int score[10];
	int sum = 0;
	double avg;
	int i;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &score[i]);

		sum += score[i];
	}
	avg = sum / 10.0;

	printf("총점 = %d\n", sum);
	printf("평균 = %.1lf", avg);
}*/

//자가진단 8번

/*#include <stdio.h>

int main()
{
	int num[10], i;
	int sum = 0, sum_1=0;
	double avg;
	int cnt = 0;

	for (i = 0; i < 10; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 10; i++)
	{
		if (i % 2 != 0)
		{
			sum += num[i];
		}

		else
		{
			sum_1 += num[i];
			cnt++;
		}
	}
	avg = (double)sum_1 / cnt;

	printf("sum : %d\n", sum);
	printf("avg : %.1f", avg);
}*/

//9번 

/*#include <stdio.h>

int main()
{
	int num[5] = { 95, 75, 85, 100, 50 };
	int i, j, tmp;

	for (i = 0; i < 4; i++)
	{
		for (j = i + 1; j < 5; j++)
		{
			if (num[i] > num[j])
			{
				tmp = num[i];
				num[i] = num[j];
				num[j] = tmp;
			}
		}
	}
	for (i = 0; i < 5; i++)
	{
		printf("%d ", num[i]);
	}

}*/

//자가진단 9번
/*
#include <stdio.h>

int main()
{
	int num[10];
	int i, j, tmp;

	for (i = 0; i < 9; i++)
	{
		scanf("%d", &num[i]);
	}

	for (i = 0; i < 9; i++)
	{

		for (j = i + 1; j < 10; j++)
		{
			if (num[i] < num[j])
			{
				tmp = num[j];
				num[j] = num[i];
				num[i] = tmp;
			}
		}
	}
	for (i = 0; i < 10; i++)
	{
		printf("%d ", num[i]);
	}
}*/


//----------------10장 배열2----------------------//

// 1번

/*#include <stdio.h>

int main()
{
	int num, i;
	int cnt[11] = { 0 };

	while (1)
	{
		scanf("%d", &num);

		if (num < 1 || num > 10) break;
		cnt[num]++;
	}

	for (i = 1; i <= 10; i++)
	{
		if (cnt[i] > 0)
		{
			printf("%d : %d개\n", i, cnt[i]);
		}
	}
}*/
