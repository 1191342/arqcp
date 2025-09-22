#include <stdio.h>
#include "get_greater_digit.h"

int main(){
	int n= 472;
	
	int result = get_greater_digit(n);
	
	printf("Greater Digit is: %d\n", result);
	
	return 0;
}
