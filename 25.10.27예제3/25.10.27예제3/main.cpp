#include <stdio.h>

int add(int a, int b);
int sub(int a, int b);
int mul(int a, int b);
float divi(int a, int b);
int mod(int a, int b);

int main(void)
{
	int num1, num2;

	
    // 두 수 입력받기
    printf("두 정수를 입력하시오: ");
    if (scanf_s("%d %d", &num1, &num2) != 2)
    {
        printf("입력 오류가 발생했습니다.\n");
        return 1;
    }

	// 결과 출력
	printf("\n===== 사칙연산 결과 =====\n");
	printf("덧셈: %d + %d = %d\n", num1, num2, add(num1, num2));
	printf("뺄셈: %d - %d = %d\n", num1, num2, sub(num1, num2));
	printf("곱셈: %d * %d = %d\n", num1, num2, mul(num1, num2));
	if (num2 != 0)
	{
		printf("나눗셈: %d / %d = %.2f\n", num1, num2, divi(num1, num2));
		printf("나머지: %d %% %d = %d\n", num1, num2, mod(num1, num2));
	}

	else
	{
		printf("나눗셈: 0으로 나눌 수 없습니다.\n");
		printf("나머지: 0으로 나눌 수 없습니다.\n");
	}
	return 0;
	
}

// 함수 정의
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