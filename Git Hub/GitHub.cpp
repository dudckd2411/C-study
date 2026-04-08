///3장 형성평가 p.73
//1번
/*#include <stdio.h>

int main()
{
	int a, b, c, d;
	int sum, avg;

	scanf("%d %d %d %d", &a, &b, &c, &d);

	sum = a + b + c + d;
	avg = sum / 4;

	printf("sum %d\navg %d", sum, avg);

	return 0;
}*/


//2번
/*#include <stdio.h>

int main()
{
	int a, b;
	int div, rem;

	scanf("%d %d", &a, &b);

	div = a / b;
	rem = a % b;

	printf("%d / %d = %d...%d", a,b,div,rem);

}*/

//3번
/*#include <stdio.h>

int main()
{
	int width, length, area;

	scanf("%d %d", &width, &length);

	area = (width += 5) * (length *= 2);



	printf("width = %d\nlengh = %d\narea = %d", width, length, area);

}*/

//4번
/*#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	++a;

	printf("%d %d\n", a, b);

	b--;

	printf("%d %d", a, b);

}*/

//5번
/*#include <stdio.h>

int main()
{
	int height1, height2, heavy1, heavy2;
	int result1;

	scanf("%d %d %d %d", &height1, &heavy1, &height2, &heavy2);

	result1 = (height1 > height2 && heavy1 > heavy2);

	printf("%d", result1);

	return 0;
}*/

//5장 91p
/*#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num < 0)
	{
		printf("%d\nminus", num);
	}

	if (num > 0)
	{
		printf("%d", num);
	}
}*/

/*#include <stdio.h>

int main()
{
	int height, heavy, c;

	scanf("%d %d", &height, &heavy);

	c = heavy + 100 - height;

	if (c > 0)
	{
		printf("%d\nObesity", c);
	}

	if (c < 0)
	{
		printf("%d", c);
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int age;

	scanf("%d", &age);

	if (age >= 20)
	{
		printf("adult");
	}

	else
	{
		printf("%d years later", 20-age);
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	double weight;

	scanf("%lf", &weight);

	if (weight <= 50.8)
	{
		printf("Flyweight");
	}

	else if (weight <= 61.23)
	{
		printf("Lightweight");
	}
	else if (weight <= 72.57)
	{
		printf("Middleweight");
	}
	else if (weight <= 88.45)
	{
		printf("Cruiseweight");
	}
	else
	{
		printf("Heavyweight");
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	double a, b;

	scanf("%lf %lf", &a, &b);

	if (a >= 4.0 && b >= 4.0)
	{
		printf("A");
	}

	else if (a >= 3.0 && b >= 3.0)
	{
		printf("B");
	}

	else
	{
		printf("C");
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	char gender;
	int age;

	scanf(" %c %d", &gender, &age);

	if (gender == 'M')
	{
		if (age >= 18)
		{
			printf("MAN");
		}

		else
		{
			printf("BOY");
		}
	}

	if (gender == 'F')
	{
		if (age >= 18)
		{
			printf("WOMAN");
		}

		else
		{
			printf("GIRL");
		}
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	char a;

	scanf(" %c", &a);

	switch (a)
	{
	case 'A':
		printf("Excellent");
		break;
	case 'B':
		printf("Good");
		break;
	case 'C':
		printf("Usually");
		break;
	case 'D':
		printf("Effort");
		break;
	case 'F':
		printf("Failure");
		break;
	default :
		printf("error");
		break;
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	double	score;

	scanf("%lf", &score);

	switch ((int)score)
	{
	case 4:
		printf("scholarship");
		break;
	case 3:
		printf("next semester");
		break;
	case 2:
		printf("seasonal semester");
		break;
	default:
		printf("retake");
		break;
	}

	return 0;
}*/

/*#include <stdio.h>

int main()
{
	int a, b, c;
	int min;

	scanf("%d %d %d", &a, &b, &c);

	min = (a < b) ? a : b;
	min = (min < c) ? min : c;

	printf("%d", min);
}*/


///// p.108 5장 선택제어문 형성평가

//1번
/*#include <stdio.h>

int main()
{
	int a, b;

	scanf("%d %d", &a, &b);

	if (a < b)
	{
		printf("%d", b - a);
	}

	else
	{
		printf("%d", a - b);
	}

	return 0;
}*/

//2번
/*#include <stdio.h>

int main()
{
	int num;

	scanf("%d", &num);

	if (num == 0)
	{
		printf("zero");
	}
	else if (num > 1)
	{
		printf("plus");
	}
	else
	{
		printf("minus");
	}

	return 0;
}*/

//3번
/*#include <stdio.h>

int main()
{
	int year;

	scanf("%d", &year);

	if (year % 400 == 0)
	{
		printf("leap year");
	}
	else if (year % 4 == 0 && year % 100 != 0)
	{
		printf("leap year");
	}
	else
	{
		printf("common year");
	}

	return 0;
}*/

//4번
/*#include <stdio.h>

int main()
{
	int num;

	printf("Number? ");

	scanf("%d", &num);

	switch (num)
	{
	case 1:
		printf("dog");
		break;
	case 2:
		printf("cat");
		break;
	case 3:
		printf("chick");
		break;
	default:
		printf("I don't know.");
		break;
	}

	return 0;
}*/

//5번
/*#include <stdio.h>

int main()
{
	int month;

	scanf("%d", &month);

	switch (month)
	{
	case 2:
		printf("28");
		break;
	case 4:
		printf("30");
		break;
	case 6:
		printf("30");
		break;
	case 9:
		printf("30");
		break;
	case 11:
		printf("30");
		break;
	default :
		printf("31");
		break;
	}

	return 0;
}*/