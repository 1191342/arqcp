#include "get_greater_digit.h"

int get_greater_digit(int n){
	int num = 0;
	
	while(n > 0){
		int lastInN = n % 10;
		
		int comparation = cmp(lastInN, num);
		
		if(comparation == 1){
			num = lastInN;
		}
		
		n/=10;
	}

	return num;
} 

