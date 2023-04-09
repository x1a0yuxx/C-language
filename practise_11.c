#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<math.h>
int is_prime(int n)
{
	int j = 0;
	for (j = 2; j <= sqrt(n); j++)
	{
		if (n % j == 0)
			return 0;
	}
	return 1;
}
int main()
{
	//打印100~200之间的素数
	int i = 0;
		for (i = 100; i <= 200; i++)
		{
			if (is_prime(i) == 1)//判断i是否是素数
				printf("%d ", i);
		}
	return 0;
}