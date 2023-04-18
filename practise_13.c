#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
int my_strlen(char* str)
{
	if (*str != '\0')
		return 1 + my_strlen(str+1);
	else
		return 0;
}
int main()
{
	char arr[] = "bit";
	int len = my_strlen(arr);
	//arr是数组，数组传参，传过去的不是整个数组，而是数组首元素的地址
	printf("len=%d\n", len);
	return 0;
}