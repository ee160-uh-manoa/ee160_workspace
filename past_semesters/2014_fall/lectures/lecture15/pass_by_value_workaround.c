/*   File:  pass_by_value_workaround.c
//   By:    The Awesome Students of EE160
//   Date:  Today :)
*/

#include <stdio.h>
//  This program shows some workarounds to updating 2 variables
main() {
	int variable1 = 2;
	int variable2 = 3;
	
	//variable1 = add_one(variable1);
	add_one(variable1);
	// add_one(&variable1);
	//variable2 = add_one(variable2);
	add_one(variable2);
	printf("variable1: %d\n", variable1);
	printf("variable2: %d\n", variable2);
}

int add_one(int variable) {
	return ++variable;
}