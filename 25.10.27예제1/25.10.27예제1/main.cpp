#include <stdio.h>

float centi_to_meter(int cm);	//�Լ� ����

int main(void)
{
	float res;		//�Լ��� ��ȯ���� ������ ����
	res = centi_to_meter(187);		//�Լ� ȣ��, ��ȯ���� res�� ����
	printf("187cm = %.2fm\n", res);		//��ȯ�� res�� �� ���
	return 0;
}

float centi_to_meter(int cm)	//�Լ� ���� ����
{
	float meter; 		//�ʿ��� ���� ����
	meter = cm / 100.0; 	//�Ű����� cm�� ���� m������ ȯ��
	return meter;	//ȯ��� �� ��ȯ
}