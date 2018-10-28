#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

Somevector fillVector(int number);

int main()
{
	Somevector vect1, vect2, res;
	
	printf("\n");

	vect1 = fillVector(1);
	vect2 = fillVector(2);
	
	res = getSum(vect1, vect2);
	
	printf("SUM: %f %f %f\n", res.X1, res.X2, res.X3);
	
	return 0;
}

Somevector fillVector(int number)
{
	Somevector res;
	printf("X1 for 3D-vector %d> ", number);
	scanf("%f", &res.X1);
	printf("X2 for 3D-vector %d> ", number);
	scanf("%f", &res.X2);
	printf("X3 for 3D-vector %d> ", number);
	scanf("%f", &res.X3);
	printf("\n");
	return res;
}
