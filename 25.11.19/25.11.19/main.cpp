#include<stdio.h>

void calcSlope(double x1, double y1, double x2, double y2, double* slope) 
{
	*slope = (y2 - y1) / (x2 - x1);
}

void calcBias(double x1, double y1, double slope, double* bias) 
{
	*bias = y1 - slope * x1;
}

int main()
{
    double x1, y1, x2, y2;
    double slope = 0.0, bias = 0.0;

    printf("Input 1st point information (x,y): ");
    int ret = scanf_s("%lf,%lf", &x1, &y1);
    if (ret != 2) {
        printf("입력 오류가 발생했습니다.\n");
        return 1;
    }
    printf("Input 2nd point information (x,y): ");
    ret = scanf_s("%lf,%lf", &x2, &y2);
    if (ret != 2) {
        printf("입력 오류가 발생했습니다.\n");
        return 1;
    }

    calcSlope(x1, y1, x2, y2, &slope);
    calcBias(x1, y1, slope, &bias);

    printf("\nCalculated Output, line equation:\n");
    printf("slope: %.4lf\n", slope);
    printf("bias: %.4lf\n", bias);

    return 0;
}