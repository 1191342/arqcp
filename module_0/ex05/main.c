#include <stdio.h>
#include "cmp.h"

int main(){
	int a = 10;
	int b = 10;
	
	int comparation = cmp(a,b);
	
	
	printf("a < b (-1)\n a > b (1)\n a == b (0)\n\n result comparation: %d\n", comparation);

	return 0;
}
