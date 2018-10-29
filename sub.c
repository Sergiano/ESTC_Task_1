#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

Somevector getSub(Somevector vect1, Somevector vect2)
{
	Somevector res =
	{
		.X1 = vect1.X1 - vect2.X1,
		.X2 = vect1.X2 - vect2.X2,
		.X3 = vect1.X3 - vect2.X3
	};
	return res;	
}