#include <math.h>
#include "somevector.h"

void vgetcross(const vector3d_t *vect1, const vector3d_t *vect2, vector3d_t* result)
{
	result->X1 = vect1->X2 * vect2->X3 - vect1->X3 * vect2->X2;
	result->X2 = vect1->X1 * vect2->X3 - vect1->X3 * vect2->X1;
	result->X3 = vect1->X1 * vect2->X2 - vect1->X2 * vect2->X1;
}

void vgetcrossmodule(const vector3d_t *vect1, const vector3d_t *vect2, float *result)
{
	float x1 = vect1->X2 * vect2->X3 - vect1->X3 * vect2->X2;
	float x2 = vect1->X1 * vect2->X3 - vect1->X3 * vect2->X1;
	float x3 = vect1->X1 * vect2->X2 - vect1->X2 * vect2->X1;
	
	*result = sqrt(x1 * x1 + x2 * x2 + x3 * x3);
}
