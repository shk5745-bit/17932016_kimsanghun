#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	// 1: ���� ����(�̸�, �й�, Ű, ������, BMI)
	// 2: scanf �Ǵ� scanf_s�� �� ������ �� �ٷ� �Է� �ޱ�
	// 3: ������ BMI ���(BMI = Ű * ������)
	// 4-1: ������(�̸�, �й�, Ű, ������)
	// 4-2: ������(BMI)
	printf("�̸�, �й�, Ű(cm), ������(kg)�� �� �ٷ� �Է��ϼ���:\n");
	scanf("%s %d %f %f", name, &student_id, &height, &weight);
	
	// BMI ��� : BMI = ü��(kg) / (Ű(cm) * Ű(cm))
	BMI = weight / (height * height);

	printf("\n===== ��� ��� =====\n");
	printf("�̸�		: %s\n", name);
	printf("�й�		: %d\n", student_id);
	printf("Ű(cm)		: %.2f\n", height);
	printf("������		: %.1f\n", weight
	return 0;
}