//-----------------------11장 함수 1 ---------------//

//1번
/*#include <stdio.h>

void line()
{
	puts("================================"); //puts는 c언어에서 문자열을 출력하고 자동으로 \n을 추가해주는 함수
}
int main()
{
	line();

	puts("line 함수를 호출하였습니다.");
	puts("line 함수를 호출하였습니다.");

	line();

}*/

// 자가진단 1번
/*#include <stdio.h>

void ch()
{
	puts("~!@#$%^&*()_+|");
}

int main()
{
	int i,num;

	scanf("%d", &num);

	for (i = 1; i <= num; i++)
	{
		ch();
	}

	return 0;
}*/

// 2번
/*#include <stdio.h>

void plus(int n)
{
	printf("10큰수 : %d \n", n + 10);
}

void minus(int n)
{
	printf("10작은수 : %d \n", n - 10);
}

int main()
{
	int num;

	scanf("%d", &num);

	plus(num);
	minus(num);

	return 0;
}*/

// 자가진단 2번
/*#include <stdio.h>

void ext(int rad)
{
	double pie;
	double n;

	pie = 3.14;

	n = pie * rad * rad;

	printf("%.2f", n);
}

int main()
{
	int num;

	scanf("%d", &num);

	ext(num);

}*/

//3번 
/*#include <stdio.h>

void star(int n)
{
	int i, j;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= i; j++)
		{
			printf("*");
		}
		printf("\n");
	}
}

int main()
{
	int n;

	scanf("%d", &n);
	star(n);

	return 0;
}*/

//자가진단 3번
/*#include <stdio.h>

void num(int n)
{
	int i, j;
	int a = 1;

	for (i = 1; i <= n; i++)
	{
		for (j = 1; j <= n; j++)
		{
			printf("%d ", a++);

		}
		printf("\n");
	}

}

int main()
{
	int n;

	scanf("%d", &n);
	num(n);

	return 0;
}*/

//4번
/*#include <stdio.h>

int add(int x, int y)
{
	return x + y;
}

int minus(int x, int y)
{
	int cha = x-y;
	if(cha <0)
	{
		cha *= -1;
	}

	return cha;
}

int main()
{
	int a, b;
	int sum = 0;

	scanf("%d %d", &a, &b);

	sum = add(a, b);

	printf("두 수의 합 = %d\n", sum);
	printf("두 수의 차 = %d\n", minus(a, b));
}*/

// 자가진단 4번
/*#include <stdio.h>

int max(int x, int y, int z)
{
	int max = 0;

	max = x > y ? x : y;
	max = max > z ? max : z;

	printf("%d", max);

	return max;
}

int main()
{
	int a, b, c;

	scanf("%d %d %d", &a, &b, &c);

	max(a, b, c);
}*/

//5번
/*#include <stdio.h>

double pyung(int a, int b, int c)
{
	int sum = a + b + c;
	return sum / 3.0;
}

int main()
{
	int kor, eng, mat;
	double avg;

	printf("세과목의 점수를 입력하세요. ");
	scanf("%d %d %d", &kor, &eng, &mat);

	avg = pyung(kor, eng, mat);

	printf("평균 : %.2f", avg);

	return 0;
}*/

//자가진단 5번
/*#include <stdio.h>


int Get_Zegop(int m, int n)
{
	int i;
	int zegop=1;
	for (i = 1; i <= n; i++)
	{
		zegop = zegop * m;
	}

	return zegop;
}

int main()
{
	int m, n;

	scanf("%d %d", &m, &n);

	printf("%d", Get_Zegop(m, n));

	return 0;
}*/

//자가진단 6번 
/*#include <stdio.h>

int gesan(int x, int y, char op)
{
	if (op == '+')
	{
		return x + y;
	}

	else if (op == '-')
	{
		return x - y;
	}

	else if (op == '*')
	{
		return x * y;
	}
	else
	{
		return x / y;
	}
	return 0;
}

int main()
{
	int a, b;
	char c;

	scanf("%d %c %d", &a, &c, &b);
	printf("%d %c %d = %d \n", a, c, b, gesan(a, b, c));
	return 0;
}*/

//7번
/*#include <stdio.h>
void swapvalue(int x, int y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;

	printf("첫 번째 함수 실행중 x = %d, y = %d \n", x, y);
}
void swapreference(int& x, int& y)
{
	int tmp;

	tmp = x;
	x = y;
	y = tmp;

	printf("두 번째 함수 실행중 x = %d, y = %d \n", x, y);
}
int main()
{
	int a, b;

	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);

	swapvalue(a, b);
	printf("첫 번째 함수 실행후 a = %d, b = %d \n", a, b);

	return 0;
}*/

// 자가진단 7번
/*#include <stdio.h>

void num(int &a, int &b)
{
	if (a > b)
	{
		a /= 2;
		b *= 2;
	}
	else
	{
		a *= 2;
		b /= 2;

	}

	printf("%d %d", a, b);
}


int main()
{
	int a, b;

	scanf("%d %d", &a, &b);
	num(a, b);

	return 0;
}*/

//8번
//8-1 전역변수 - 보안이 취약함. 
/*# include <stdio.h>

int a, b;
int hap, gop;

void input()
{
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
}

void gesan()
{
	hap = a + b;
	gop = a * b;
}

void output()
{
	printf("합 : %d \n", hap);
	printf("곱 : %d \n", gop);
}

int main()
{
	input();
	gesan();
	output();

	return 0;
}*/
//8-2번
/*#include <stdio.h>

void input(int& a, int& b)
{
	printf("두 수를 입력하세요. ");
	scanf("%d %d", &a, &b);
}

int plus(int a, int b)
{
	return a + b;
}

int multi(int& a, int& b)
{
	return a * b;
}

void output(int a, int b)
{
	printf("합 : %d \n", a);
	printf("곱 : %d \n", b);
}

int main()
{
	int a, b;
	int hap, gop;

	input(a, b);

	hap = plus(a, b);
	gop = multi(a, b);

	output(hap, gop);

	return 0;
}*/

//자가진단 8번
/*#include <stdio.h>

void input(int &a, int &b)
{
	int temp = 0;

	scanf("%d %d", &a, &b);

	if (a > b)
	{
		temp = a;
		a = b;
		b = temp;
	}
}



void output(int i)
{
	printf("\n== %ddan ==\n", i);

	for (int j = 1; j <= 9; j++)
	{
		printf("%d * %d = %d\n", i, j, i * j);
	}
}


int main()
{
	int a, b, i;

	input(a, b);

	for (i = a; i <= b; i++)
	{
		output(i);
	}

	return 0;
}*/


//---------------11장 함수1 형성평가 -----------------------//

//1번
/*#include <stdio.h>

void str()
{
	printf("@@@@@@@@@@\n");
}

int main()
{
	printf("first\n");
	str();
	printf("second\n");
	str();
	printf("third\n");
	str();
}*/

//2번 
/*#include <stdio.h>

int Get_Hap(int n)
{
	int sum = 0;

	for (int i = 1; i <= n; i++)
	{
		sum += i;
	}
	printf("%d", sum);

	return sum;
}

int main()
{
	int num;

	scanf("%d", &num);

	Get_Hap(num);
	printf("\n");
}*/

//3번
/*#include <stdio.h>

int squ(int x)
{
	int i,j;
	int n = 1;

	for (i = 1; i <= x; i++)
	{
		for (j = 1; j <= x; j++)
		{
			printf("%d ", i*j);
		}
		printf("\n");
	}

	return x;
}


int main()
{
	int num;

	scanf("%d", &num);

	squ(num);
}*/

//4번
/*#include <stdio.h>

int gob(int x, int y)
{
	int div = 0;

	x *= x;
	y *= y;

	if (x > y)
	{
		div = x - y;
	}
	else
	{
		div = y - x;
	}

	printf("%d", div);

	return div;
}

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	gob(a, b);
}*/

//5번
/*#include <stdio.h>


int Get_Score(int arr[4][4])
{
	int i, j;

	for (i = 0; i < 4; i++)
	{
		for (j = 0; j < 4; j++)
		{
			printf("%d ", arr[i][j]);
		}
		printf("\n");
	}


	return arr[4][4];
}
int main()
{
	int i, j;
	int score[4][4] = {0};

	for (i = 0; i < 3; i++)
	{
		for (j = 0; j < 3; j++)
		{
			scanf("%d", &score[i][j]);

			score[i][3] += score[i][j];
			score[3][j] += score[i][j];
			score[3][3] += score[i][j];
		}

	}
	printf("\n");

	Get_Score(score);
	printf("\n");
}*/