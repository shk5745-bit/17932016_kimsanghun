#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);
int mod(int a, int b);

int main(void)
{
	int num1, num2;

	
    // �� �� �Է¹ޱ�
    printf("�� ������ �Է��Ͻÿ�: ");
    if (scanf_s("%d %d", &num1, &num2) != 2)
    {
        printf("�Է� ������ �߻��߽��ϴ�.\n");
        return 1;
    }

	// ��� ���
	printf("\n===== ��Ģ���� ��� =====\n");
	printf("����: %d + %d = %d\n", num1, num2, add(num1, num2));
	printf("����: %d - %d = %d\n", num1, num2, sub(num1, num2));
	printf("����: %d * %d = %d\n", num1, num2, mul(num1, num2));
	if (num2 != 0)
	{
		printf("������: %d / %d = %.2f\n", num1, num2, divi(num1, num2));
		printf("������: %d %% %d = %d\n", num1, num2, mod(num1, num2));
	}

	else
	{
		printf("������: 0���� ���� �� �����ϴ�.\n");
		printf("������: 0���� ���� �� �����ϴ�.\n");
	}
	return 0;
	
}

// �Լ� ����
int add(int a, int b)
{
	return a + b;
}

int sub(int a, int b)
{
	return a - b;
}

int mul(int a, int b)
{
	return a * b;
}

float divi(int a, int b)
{
	return (float)a / b;
}

int mod(int a, int b)
{
	return a % b;
}