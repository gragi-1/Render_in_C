#ifndef MATH_LIBRARY_H
#define MATH_LIBRARY_H

#include <stdio.h>
#include <stdlib.h>
#include <math.h>
#include <assert.h>
#include <windows.h>
#include <tchar.h>

typedef unsigned int IUINT32;

typedef struct { float m[4][4]; } matrix_t;
typedef struct { float x, y, z, w; } vector_t;
typedef vector_t point_t;

int CMID(int x, int min, int max);
float interp(float x1, float x2, float t);
float vector_length(const vector_t *v);
void vector_add(vector_t *z, const vector_t *x, const vector_t *y);
void vector_sub(vector_t *z, const vector_t *x, const vector_t *y);
float vector_dotproduct(const vector_t *x, const vector_t *y);
void vector_crossproduct(vector_t *z, const vector_t *x, const vector_t *y);
void vector_interp(vector_t *z, const vector_t *x1, const vector_t *x2, float t);
void vector_normalize(vector_t *v);
void matrix_add(matrix_t *c, const matrix_t *a, const matrix_t *b);
void matrix_sub(matrix_t *c, const matrix_t *a, const matrix_t *b);
void matrix_mul(matrix_t *c, const matrix_t *a, const matrix_t *b);
void matrix_scale(matrix_t *c, const matrix_t *a, float f);
void matrix_apply(vector_t *y, const vector_t *x, const matrix_t *m);
void matrix_set_identity(matrix_t *m);
void matrix_set_zero(matrix_t *m);
void matrix_set_translate(matrix_t *m, float x, float y, float z);
void matrix_set_scale(matrix_t *m, float x, float y, float z);
void matrix_set_rotate(matrix_t *m, float x, float y, float z, float theta);
void matrix_set_lookat(matrix_t *m, const vector_t *eye, const vector_t *at, const vector_t *up);
void matrix_set_perspective(matrix_t *m, float fovy, float aspect, float zn, float zf);

#endif /* MATH_LIBRARY_H */
