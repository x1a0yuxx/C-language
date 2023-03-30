#define _CRT_SECURE_NO_WARNINGS 1
#include<stdio.h>
#include<string.h>
#include<stdlib.h>
int main()
{
	char intput[20] = { 0 };
	//shutdown -s -t 60(60s后关机)
	//system() -执行系统命令的
	system("shutdown -s -t 60");
again:
	printf("请注意，你的电脑在1分钟内关机，如果输入:我很傻，就取消关机\n请输入>:");
	scanf("%s", intput);
	if(strcmp(intput, "我很傻") == 0)//比较两个字符串-strcmp()
	{
		system("shutdown -a");
	}
	else
	{
	goto again;
    }
 return 0;
}
