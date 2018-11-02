#ifndef SOME_VECTOR_H
#define SOME_VECTOR_H

typedef struct
{
	float X1;
	float X2;
	float X3;
} vector3d_t;

void vgetsum(const vector3d_t *vect1, const vector3d_t *vect2, vector3d_t *result);

void vgetsub(const vector3d_t *vect1, const vector3d_t *vect2, vector3d_t *result);

void vgetdot(const vector3d_t *vect1, const vector3d_t *vect2, float *result);

void vgetcross(const vector3d_t *vect1, const vector3d_t *vect2,  vector3d_t *result);

void vgetcrossmodule(const vector3d_t *vect1, const vector3d_t *vect2, float *result);

#endif