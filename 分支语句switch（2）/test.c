#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>

//1-5 工作日
//6-7 休息日

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)//上述day必须为整形 - 整形常量表达式 
	{
	case 1:		//该处整形必须包含整数值
	case 2:
	case 3:
	case 4:
	case 5:
		printf("工作日\n");
		break;
	case 6:
	case 7:
		printf("休息日\n");
		break;
	default:	//增加 default 分支处理非有效输入的情况
		printf("无效的输入，请输入1-7之间的数字。\n");
		break;


	}
	return 0;
}