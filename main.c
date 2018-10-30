#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

#define getSymbol atof(*++argv)

Somevector fillVector(int number);

int main(int argc, char* argv[])
{
	if (argc < 7)
	{
		printf("Pls, write the coordinates in the command line arguments in the format: \"X1 X2 X3 X1 X2 X3\"");
	}
	else
	{
		Somevector vect1, vect2, res;
	
		vect1.X1 = getSymbol;
		vect1.X2 = getSymbol;
		vect1.X3 = getSymbol;
	
		printf("V1: %f %f %f\n", vect1.X1, vect1.X2, vect1.X3);
	
		vect2.X1 = getSymbol;
		vect2.X2 = getSymbol;
		vect2.X3 = getSymbol;
		
		printf("V2: %f %f %f\n", vect1.X1, vect2.X2, vect2.X3);
	
		res = getSum(vect1, vect2);
		printf("Sum: %f %f %f\n", res.X1, res.X2, res.X3);

		res = getSub(vect1, vect2);
		printf("Sub: %f %f %f\n", res.X1, res.X2, res.X3);
		
		printf("Dot: %f\n", getDot(vect1, vect2));
		
		res = getCross(vect1, vect2);
		printf("Cross: %fi %fj %fk\n", res.X1, res.X2, res.X3);
		
		printf("CrossModule: %f\n", getCrossModule(vect1, vect2));
	}
	
	return 0;
	
}

