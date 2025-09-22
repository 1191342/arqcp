#include "cmp.h"

int cmp(int a, int b){
	int l_eq_g = 0;
	
	if(a < b){
		l_eq_g = -1;
	}
	
	if(a > b){
		l_eq_g = 1; 
	}
	
	return l_eq_g;
	
}
