#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma pack(4)//设置默认对齐数为4
struct	S
{
	char c1;//1
	//3
	double d;//8
};
#pragma pack()//取消设置的默认对齐数

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
}