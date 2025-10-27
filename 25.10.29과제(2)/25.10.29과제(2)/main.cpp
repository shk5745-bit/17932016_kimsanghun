#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char door_state;       // 'o' = open, 'c' = close
    double temperature;    // 냉장고 내부 온도
    int time_open;         // 문이 열린 시간(초)

    printf("문 상태를 입력하세요 (o: open, c: close): ");
    if (scanf_s(" %c", &door_state, 1) != 1 || (door_state != 'o' && door_state != 'c')) {
        printf("invalid input\n");
        return 0;
    }

    printf("현재 온도(°C)를 입력하세요: ");
    if (scanf_s("%lf", &temperature) != 1 || temperature < -50 || temperature > 50) {
        // 온도는 물리적으로 -50~50°C 사이로 제한
        printf("invalid input\n");
        return 0;
    }

    printf("문이 열린 시간을 입력하세요(초): ");
    if (scanf_s("%d", &time_open) != 1 || time_open < 0) {
        printf("invalid input\n");
        return 0;
    }

    // 정상 상태
    if (door_state == 'c' && temperature >= 2.0 && temperature <= 8.0) {
        printf("Normal\n");
    }

    // 문 열림 + 장시간 + 온도이상 → Critical
    else if (door_state == 'o' && time_open >= 60 &&
        (temperature <= 2.0 || temperature >= 8.0)) {
        printf("Critical\n");
    }

    // 문 닫힘 + 내부고장으로 온도 이상
    else if (door_state == 'c' && (temperature <= 2.0 || temperature >= 8.0)) {
        // 30초 이내면 Warning, 초과면 Critical (조건연산자 활용)
        (time_open <= 30)
            ? printf("Warning\n")
            : printf("Critical\n");
    }

    // 나머지 모든 조건
    else {
        printf("invalid input\n");
    }

    return 0;
}