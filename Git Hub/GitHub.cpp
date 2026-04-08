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