#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

vector3d_t getSum(vector3d_t vect1, vector3d_t vect2)
{
	return (vector3d_t) 
	{
		.X1 = vect1.X1 + vect2.X1, 
		.X2 = vect1.X2 + vect2.X2,
		.X3 = vect1.X3 + vect2.X3
	};
}