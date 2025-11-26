#include<stdio.h>
#include<stdlib.h>
#include<time.h>
#include<stdbool.h>

#define SIZE 10

void PrintArray(const double* arr, int size)
{
	for (int i = 0; i < size; i++)
	{
		printf("%.2f", arr[i]);
	}
	printf("\n");
}

void CalcSortArray(double* arr, int size, bool asc)
{
	for (int i = 0; i < size - 1; i++)
	{
		for (int j = i + 1; j < size; j++)
		{
			if (asc)
			{
				if (arr[i] > arr[j])
				{
					double temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
			else
			{
				if (arr[i] < arr[j])
				{
					double temp = arr[i];
					arr[i] = arr[j];
					arr[j] = temp;
				}
			}
		}
	}
}

int main()
{
	double arr[SIZE];
	int mode;
	int sortType = 0;
	bool asc = false;

	srand((unsigned int)time(NULL));

	printf("정수모드(1) / 실수모드(2)를 선택:");

	if (scanf_s("%d", &mode) != 1) {
		fprintf(stderr, "입력 오류: 정수 값을 입력하세요.\n");
		return 1;
	}

	printf("\n- - - 랜덤값 생성 - - -\n");

	for (int i = 0; i < SIZE; i++)
	{
		if (mode == 1)
		{
			arr[i] = (rand() % 201) - 100;

		}
		else
		{
			arr[i] = ((rand() % 20001) - 10000) / 100.0;
		}
	}

	printf("초기 배열:  ");
	PrintArray(arr, SIZE);

	printf("\n정렬 선택 (1: 오름차순, 2: 내림차순): ");
	if (scanf_s("%d", &sortType) != 1) {
		fprintf(stderr, "입력 오류: 정수 값을 입력하세요.\n");
		return 1;
	}

	asc = (sortType == 1);

	CalcSortArray(arr, SIZE, asc);

	printf("\n정렬된 배열: ");
	PrintArray(arr, SIZE);

	return 0;
}

