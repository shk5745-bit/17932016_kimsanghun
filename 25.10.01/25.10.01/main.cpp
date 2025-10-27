#define _CRT_SECURE_NO_WARNINGS
#pragma warning(disable:4996)
#include <stdio.h>

int main(void)
{
	// 1: 변수 선언(이름, 학번, 키, 몸무게, BMI)
	// 2: scanf 또는 scanf_s로 위 정보를 한 줄로 입력 받기
	// 3: 간단한 BMI 계산(BMI = 키 * 몸무게)
	// 4-1: 결과출력(이름, 학번, 키, 몸무게)
	// 4-2: 결과출력(BMI)
	printf("이름, 학번, 키(cm), 몸무게(kg)를 한 줄로 입력하세요:\n");
	scanf("%s %d %f %f", name, &student_id, &height, &weight);
	
	// BMI 계산 : BMI = 체중(kg) / (키(cm) * 키(cm))
	BMI = weight / (height * height);

	printf("\n===== 결과 출력 =====\n");
	printf("이름		: %s\n", name);
	printf("학번		: %d\n", student_id);
	printf("키(cm)		: %.2f\n", height);
	printf("몸무게		: %.1f\n", weight
	return 0;
}