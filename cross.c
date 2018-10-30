#include <stdlib.h>
#include <stdio.h>
#include <math.h>
#include "somevector.h"

Somevector getCross(Somevector vect1, Somevector vect2)
{
	return (Somevector)
	{
		.X1 = vect1.X2 * vect2.X3 - vect1.X3 * vect2.X2,
		.X2 = vect1.X1 * vect2.X3 - vect1.X3 * vect2.X1,
		.X3 = vect1.X1 * vect2.X2 - vect1.X2 * vect2.X1
	};
}

float getCrossModule(Somevector vect1, Somevector vect2)
{
	Somevector res = getCross(vect1, vect2);
	return sqrt(res.X1 * res.X1 + res.X2 * res.X2 + res.X3 * res.X3);
}
