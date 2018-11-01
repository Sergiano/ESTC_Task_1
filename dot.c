#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

float getDot(vector3d_t vect1, vector3d_t vect2)
{
	return vect1.X1 * vect2.X1 + vect1.X2 * vect2.X2 + vect1.X3 * vect2.X3;
}
