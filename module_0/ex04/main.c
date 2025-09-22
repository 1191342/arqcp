#include <stdio.h>
#include "sum_digits.h"

int main(){
	int num = 472;
	
	int sum = sum_digits(num);
	
	printf("SUM_DIGIT (%d) = %d\n",num,sum);
	return 0;
}
