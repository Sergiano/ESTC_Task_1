#ifndef SOME_VECTOR_H
#define SOME_VECTOR_H

typedef struct
{
	float X1;
	float X2;
	float X3;
} Somevector;

Somevector getSum(Somevector vect1, Somevector vect2);

Somevector getSub(Somevector vect1, Somevector vect2);

float getDot(Somevector vect1, Somevector vect2);

Somevector getCross(Somevector vect1, Somevector vect2);

float getCrossModule(Somevector vect1, Somevector vect2);

#endif