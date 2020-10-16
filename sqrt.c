/* This program computes the square root of a
positive number. */

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <complex.h>
/* Main function starts here taking input from command line*/
int main(int argc, char* argv[]) {
	
	if (argc != 2) {
		printf("Usage: sqrt input\n\n");
		exit(-1);
	}

	int input = atoi(argv[1]);

	printf(" Sqrt of %d is %f\n",input,sqrt(input));
	
	// added exit message.
	printf("End of program. Exiting.");
	
	return(0);

} // end main
