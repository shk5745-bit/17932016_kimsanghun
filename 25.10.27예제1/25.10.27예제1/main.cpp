#include <stdio.h>

float centi_to_meter(int cm);	//함수 선언

int main(void)
{
	float res;		//함수의 변환값을 저장할 변수
	res = centi_to_meter(187);		//함수 호출, 변환값을 res에 저장
	printf("187cm = %.2fm\n", res);		//변환된 res의 값 출력
	return 0;
}

float centi_to_meter(int cm)	//함수 정의 시작
{
	float meter; 		//필요한 변수 선언
	meter = cm / 100.0; 	//매개변수 cm의 값을 m단위로 환산
	return meter;	//환산된 값 반환
}