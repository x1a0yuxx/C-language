#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<assert.h>
int my_strcmp(const char* str1, const char* str2)
{
	assert(str1 && str2);
	//�Ƚ�
	while (*str1 == *str2)
	{
		if (str1 =='\0')
		{
			return 0;//���
		}
		str1++;
		str2++;
	}
	if (*str1 > *str2)
		return 1;//����
	else
		return -1;//С��
}
int main()
{
	int* p1 = "abcde";
	int* p2 = "abdfe";
	int ret = my_strcmp(p1, p2);
	printf("%d\n", ret);
}