#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

#define getDigit atof(*++argv)

int main(int argc, char* argv[])
{
	if (argc < 7)
	{
		printf("Pls, write the coordinates in the command line arguments in the format: \"X1 X2 X3 X1 X2 X3\"");
	}
	else
	{
		vector3d_t vect1, vect2, res;
		float res_value;
	
		vect1.X1 = getDigit;
		vect1.X2 = getDigit;
		vect1.X3 = getDigit;
	
		printf("V1: %f %f %f\n", vect1.X1, vect1.X2, vect1.X3);
	
		vect2.X1 = getDigit;
		vect2.X2 = getDigit;
		vect2.X3 = getDigit;
		
		printf("V2: %f %f %f\n", vect1.X1, vect2.X2, vect2.X3);
	
		vgetsum(&vect1, &vect2, &res);
		printf("Sum: %f %f %f\n", res.X1, res.X2, res.X3);

		vgetsub(&vect1, &vect2, &res);
		printf("Sub: %f %f %f\n", res.X1, res.X2, res.X3);
		
		vgetdot(&vect1, &vect2, &res_value);
		printf("Dot: %f\n", res_value);
		
		vgetcross(&vect1, &vect2, &res);
		printf("Cross: %fi %fj %fk\n", res.X1, res.X2, res.X3);
		
		vgetcrossmodule(&vect1, &vect2, &res_value);
		printf("CrossModule: %f\n", res_value);
	}
	
	return 0;
	
}