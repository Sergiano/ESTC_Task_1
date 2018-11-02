#include "somevector.h"

void vgetdot(const vector3d_t *vect1, const vector3d_t *vect2, float *result)
{
	*result = vect1->X1 * vect2->X1 + vect1->X2 * vect2->X2 + vect1->X3 * vect2->X3;
}
