#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char intput[20] = { 0 };
	//shutdown -s -t 60(60s��ػ�)
	//system() -ִ��ϵͳ�����
	system("shutdown -s -t 60");
again:
	printf("��ע�⣬��ĵ�����1�����ڹػ����������:�Һ�ɵ����ȡ���ػ�\n������>:");
	scanf("%s", intput);
	if(strcmp(intput, "�Һ�ɵ") == 0)//�Ƚ������ַ���-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
	goto again;
    }
 return 0;
}
