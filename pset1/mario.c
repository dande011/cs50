#include <stdio.h>
int main()
{
	int height = 0;
	scanf("%i",&height);
	for(int i=0; i<height+1; i++){
		for(int j=0; j<(height-i); j++){putchar(' ');}
		for(int j=0; j<i; j++){putchar('#');}
		printf("  ");
		for(int j=0; j<i; j++){putchar('#');}
		putchar('\n');}
	return 0;
}
