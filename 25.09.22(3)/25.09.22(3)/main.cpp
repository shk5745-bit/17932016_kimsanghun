#include <stdio.h>

int main(void)
{
	char ch = 'A';
	const char* msg = "Message:";
	double avg = 87.35;

	printf("=== Char/String & Escapes===\n");
	printf("Char : %c, code: %d\n", ch, ch);
	printf("%s\n", msg);
	printf("First line\n");
	printf("\tIndented second line\n");
	printf("Third line\n");
	printf("Quotes: \"double quotes\" and 'sigle quotes'\n");
	printf("Backslash: \\\n");
	printf("Average: [%8.2f]\n", avg);

	return 0;
}