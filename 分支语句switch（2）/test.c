#define _CRT_SECURE_NO_WARNINGS 01
#include <stdio.h>

//1-5 ������
//6-7 ��Ϣ��

int main()
{
	int day = 0;
	scanf("%d", &day);
	switch (day)//����day����Ϊ���� - ���γ������ʽ 
	{
	case 1:		//�ô����α����������ֵ
	case 2:
	case 3:
	case 4:
	case 5:
		printf("������\n");
		break;
	case 6:
	case 7:
		printf("��Ϣ��\n");
		break;
	default:	//���� default ��֧�������Ч��������
		printf("��Ч�����룬������1-7֮������֡�\n");
		break;


	}
	return 0;
}