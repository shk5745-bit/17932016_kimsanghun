#include <stdio.h>
#include <stdlib.h>

int main(void)
{
	const double MAX = 600.0; //Á¤°Ý ÇÏÁß
	int people;
	double total_weight = 0.0;
	double w = 0.0, luggage_weight = 0.0;
	char has_luggage;

	printf("Å¾½Â°´ ¼ö¸¦ ÀÔ·ÂÇÏ½Ã¿À (0~3¸í): ");
	if (scanf_s("%d", &people) != 1 || people < 0 || people > 3) {
		printf("invalid input\n:");
		return 0;
}

	for (int i = 1; i <= people; i++)
	{
		printf("%d¹øÂ° Å¾½Â°´ÀÇ ¸ö¹«°Ô (kg): ", i);
		if (scanf_s("%lf", &w) != 1 || w <= 0) {
			printf("invalid input\n:");
			return 0;
		}
		total_weight += w;
	}

	printf("ÁüÀÌ ÀÖ½À´Ï±î? (Y/N): ");
	if (scanf_s(" %c", &has_luggage, 1) != 1) {
		printf("invalid input\n:");
		return 0;
	}

	if (has_luggage != 'y' && has_luggage != 'Y' && has_luggage != 'n' && has_luggage != 'N') {
		printf("invalid input\n:");
		return 0;
	}

	if (has_luggage == 'y' || has_luggage == 'Y') {
		printf("ÁüÀÇ ¹«°Ô (kg): ");
		if (scanf_s("%lf", &luggage_weight) != 1 || luggage_weight < 0) {
			printf("invalid input\n:");
			return 0;
		}
		total_weight += luggage_weight;
	}

	(total_weight <= MAX)
		? printf("ÃÑ ÇÏÁß: %.1fkg -> OK\n", total_weight)
		: printf("ÃÑ ÇÏÁß: %.1fkg -> overload!\n", total_weight);
	return 0;
}