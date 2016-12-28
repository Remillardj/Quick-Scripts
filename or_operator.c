/*

@ Purpose: to create a real OR operator

*/

#include <stdio.h>


int main(int argc, char *argv[]) {


	printf("argc : %d\n", argc);


	if (argc < 2 || argc > 2) {

		printf("no, the number is either greater than 2 or less than 2.\n");

	} else {

		printf("yes it is neither less than 2 or greater than 2.\n");

	}


	return 0;

}