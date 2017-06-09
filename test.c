#include <stdio.h>

int main(){
	int size = 10;
	int c[size] = {0};
	for(int i=0; i<size; i++){
		putchar(i);
		c[i] = getchar();
	}
	for(int i=0; i<size; i++)
		putchar(c[i]);
	return 0;
}
