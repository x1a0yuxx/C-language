#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int main()
{
	int arr[] = { 1,2,3,4,5,6,7,8,9,10 };
	int k = 6;//дһ�����룬��arr���飨����ģ����ҵ�6
	int i = 0;
	int sz = sizeof(arr) / sizeof(arr[0]);
	for (i = 0; i < sz; i++)
	{
		if (k == arr[i])
		{
			printf("�ҵ��ˣ��±���:%d\n", i);
			break;
		}
	}
	if (i == sz)
		printf("�Ҳ���\n");
	return 0;
}