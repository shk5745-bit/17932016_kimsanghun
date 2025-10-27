#include <stdio.h>
#include <stdlib.h>

int main(void) {
    char door_state;       // 'o' = open, 'c' = close
    double temperature;    // ����� ���� �µ�
    int time_open;         // ���� ���� �ð�(��)

    printf("�� ���¸� �Է��ϼ��� (o: open, c: close): ");
    if (scanf_s(" %c", &door_state, 1) != 1 || (door_state != 'o' && door_state != 'c')) {
        printf("invalid input\n");
        return 0;
    }

    printf("���� �µ�(��C)�� �Է��ϼ���: ");
    if (scanf_s("%lf", &temperature) != 1 || temperature < -50 || temperature > 50) {
        // �µ��� ���������� -50~50��C ���̷� ����
        printf("invalid input\n");
        return 0;
    }

    printf("���� ���� �ð��� �Է��ϼ���(��): ");
    if (scanf_s("%d", &time_open) != 1 || time_open < 0) {
        printf("invalid input\n");
        return 0;
    }

    // ���� ����
    if (door_state == 'c' && temperature >= 2.0 && temperature <= 8.0) {
        printf("Normal\n");
    }

    // �� ���� + ��ð� + �µ��̻� �� Critical
    else if (door_state == 'o' && time_open >= 60 &&
        (temperature <= 2.0 || temperature >= 8.0)) {
        printf("Critical\n");
    }

    // �� ���� + ���ΰ������� �µ� �̻�
    else if (door_state == 'c' && (temperature <= 2.0 || temperature >= 8.0)) {
        // 30�� �̳��� Warning, �ʰ��� Critical (���ǿ����� Ȱ��)
        (time_open <= 30)
            ? printf("Warning\n")
            : printf("Critical\n");
    }

    // ������ ��� ����
    else {
        printf("invalid input\n");
    }

    return 0;
}