#include <stdio.h>

int res_func(int n);	//�Լ� ����

int main(void)
{
	int n = 10;
	int result;

	result = res_func(n);
	printf("%d\n", result);

	return 0;
}
int res_func(int n)
{
	if (n == 1)		//���� ����
		return 1;
	else
		return n + res_func(n - 1);
}
