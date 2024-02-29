#ifndef RENDERING_LIB_H
#define RENDERING_LIB_H

#include "rendering_device.h"
#include "transform.h"
#include "geometric_calculations.h"

void device_draw_scanline(device_t *device, scanline_t *scanline);
void device_render_trap(device_t *device, trapezoid_t *trap);
void device_draw_primitive(device_t *device, const vertex_t *v1, const vertex_t *v2, const vertex_t *v3);

#endif /* RENDERING_LIB_H */
