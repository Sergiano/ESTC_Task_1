<<<<<<< HEAD
#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

Somevector getCross(Somevector vect1, Somevector vect2)
{
	Somevector res =
	{
		.X1 = vect1.X2 * vect2.X3 - vect1.X3 * vect2.X2,
		.X2 = vect1.X1 * vect2.X3 - vect1.X3 * vect2.X1,
		.X3 = vect1.X1 * vect2.X2 - vect1.X2 * vect2.X1
	};
	return res;
}

float getCrossModule(Somevector vect1, Somevector vect2)
{
	Somevector res = getCross(vect1, vect2);
	return sqrt(res.X1 * res.X1 + res.X2 * res.X2 + res.X3 * res.X3);
}

=======
#include <stdlib.h>
#include <stdio.h>
#include "somevector.h"

Somevector getCross(Somevector vect1, Somevector vect2)
{
	Somevector res =
	{
		.X1 = vect1.X2 * vect2.X3 - vect1.X3 * vect2.X2,
		.X2 = vect1.X1 * vect2.X3 - vect1.X3 * vect2.X1,
		.X3 = vect1.X1 * vect2.X2 - vect1.X2 * vect2.X1
	};
	return res;
}

float getCrossModule(Somevector vect1, Somevector vect2)
{
	Somevector res = getCross(vect1, vect2);
	return sqrt(res.X1 * res.X1 + res.X2 * res.X2 + res.X3 * res.X3);
}

>>>>>>> 782e80df9ba6e255d077ec7b3e1dc1e7a68a4d25
