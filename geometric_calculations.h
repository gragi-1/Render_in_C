#ifndef GEOMETRIC_CALCULATIONS_H
#define GEOMETRIC_CALCULATIONS_H

#include "math_lib.h"

typedef struct {
    float r, g, b;
} color_t;

typedef struct {
    float u, v;
} texcoord_t;

typedef struct {
    point_t pos;
    texcoord_t tc;
    color_t color;
    float rhw;
} vertex_t;

typedef struct {
    vertex_t v, v1, v2;
} edge_t;

typedef struct {
    float top, bottom;
    edge_t left, right;
} trapezoid_t;

typedef struct {
    vertex_t v, step;
    int x, y, w;
} scanline_t;

void vertex_rhw_init(vertex_t *v);
void vertex_interp(vertex_t *y, const vertex_t *x1, const vertex_t *x2, float t);
void vertex_division(vertex_t *y, const vertex_t *x1, const vertex_t *x2, float w);
void vertex_add(vertex_t *y, const vertex_t *x);
int trapezoid_init_triangle(trapezoid_t *trap, const vertex_t *p1, const vertex_t *p2, const vertex_t *p3);
void trapezoid_edge_interp(trapezoid_t *trap, float y);
void trapezoid_init_scan_line(const trapezoid_t *trap, scanline_t *scanline, int y);

#endif /* GEOMETRIC_CALCULATIONS_H */
