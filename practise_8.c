#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int check_sys()
{
	int a = 1;
	//����1��С��
	//����0�����
	return *(char*)&a;
}
int main()
{
	int ret = check_sys();
	if (ret == 1)
	{
		printf("С��");
	}
	else
	{
		printf("���");
	}
	return 0;
}