#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#pragma pack(4)//����Ĭ�϶�����Ϊ4
struct	S
{
	char c1;//1
	//3
	double d;//8
};
#pragma pack()//ȡ�����õ�Ĭ�϶�����

int main()
{
	struct S s;
	printf("%d\n", sizeof(s));
}