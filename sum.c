#include "somevector.h"

void vgetsum(const vector3d_t *vect1, const vector3d_t *vect2, vector3d_t *result)
{
	result->X1 = vect1->X1 + vect2->X1;
	result->X2 = vect1->X2 + vect2->X2;
	result->X3 = vect1->X3 + vect2->X3;
}