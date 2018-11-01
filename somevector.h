#ifndef SOME_VECTOR_H
#define SOME_VECTOR_H

typedef struct
{
	float X1;
	float X2;
	float X3;
} vector3d_t;

vector3d_t getSum(vector3d_t vect1, vector3d_t vect2);

vector3d_t getSub(vector3d_t vect1, vector3d_t vect2);

float getDot(vector3d_t vect1, vector3d_t vect2);

vector3d_t getCross(vector3d_t vect1, vector3d_t vect2);

float getCrossModule(vector3d_t vect1, vector3d_t vect2);

#endif