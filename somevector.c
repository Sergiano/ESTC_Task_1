#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

Somevector getSum(Somevector vect1, Somevector vect2)
{
	Somevector res;
	res.X1 = vect1.X1 + vect2.X2;
	res.X2 = vect1.X2 + vect2.X2;
	res.X3 = vect1.X3 + vect2.X3;
	return res;
}