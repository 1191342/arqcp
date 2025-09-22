#include "sum_digits.h"

int sum_digits(int n){

	int s = 0;
	
	while(n > 0 ){
		
		int digit = n % 10; //if number 472 % 10 => 2
		s = sum(s,digit);
		
		n /= 10;
		
	}
	return s;
}
