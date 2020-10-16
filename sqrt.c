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
	
	int input = atoi(argv[1]); // is 0 for non integer value & integer 0
	if(input != 0){
		
		if(input < 0){
			double complex num = input + 0.0;
			double complex s = csqrt(num);

	//<<<<<<< HEAD
		printf(" Sqrt of %d is %f\n",input,sqrt(input));
		
		// added exit message.
		printf("End of program. Exiting.");
		
	//=======
			printf("NEGSUPPORT: %.2f + %.2fi\n", creal(s), cimag(s));
		}
		else {
			
			printf(" Sqrt of %d is %f\n",input,sqrt(input));
			
			// Exit Message Added
			printf("End of program. Exiting.");

		}
	}
	else { printf("Input check failed: not a non-zero integer");}
	
//>>>>>>> e40a43f4f1ba7bdd7816d714383fb390050d19b6
	return(0);

} // end main
