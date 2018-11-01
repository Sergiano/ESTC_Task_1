#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "somevector.h"

vector3d_t getCross(vector3d_t vect1, vector3d_t vect2)
{
	return (vector3d_t)
	{
		.X1 = vect1.X2 * vect2.X3 - vect1.X3 * vect2.X2,
		.X2 = vect1.X1 * vect2.X3 - vect1.X3 * vect2.X1,
		.X3 = vect1.X1 * vect2.X2 - vect1.X2 * vect2.X1
	};
}

float getCrossModule(vector3d_t vect1, vector3d_t vect2)
{
	vector3d_t res = getCross(vect1, vect2);
	return sqrt(res.X1 * res.X1 + res.X2 * res.X2 + res.X3 * res.X3);
}
