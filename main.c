#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

somevector fillVector(int number);

int main()
{
	somevector vect1, vect2, res;
	
	vect1 = fillVector(1);
	vect2 = fillVector(2);
	
	res = getSum(vect1, vect2);
	
	printf("SUM: %.0f %.0f %.0f", res.X1, res.X2, res.X3);
	
	return 0;
}

somevector fillVector(int number)
{
	somevector res;
	printf("X1 for 3D-vector %d> ", number);
	scanf("%f", &res.X1);
	printf("X2 for 3D-vector %d> ", number);
	scanf("%f", &res.X2);
	printf("X3 for 3D-vector %d> ", number);
	scanf("%f", &res.X3);
	return res;
}
