#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys()
{
	int a = 1;
	//返回1，小端
	//返回0，大端
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("小端");
	}
	else
	{
		printf("大端");
	}
	return 0;
}