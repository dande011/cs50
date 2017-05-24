#include <stdio.h>

int main()
{
	printf("Minutes: ");
	int min = 0;
	scanf("%i",&min);
	int bot = min*12;
	printf("Bottles: %i",bot);
	return 0;
}