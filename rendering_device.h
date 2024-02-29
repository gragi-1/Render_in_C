#ifndef RENDERING_DEVICE_H
#define RENDERING_DEVICE_H

#include "transform.h"
#include <stdlib.h>
#include <string.h>
#include <assert.h>

typedef unsigned int IUINT32;

typedef struct {
    transform_t transform;
    int width;
    int height;
    IUINT32 **framebuffer;
    float **zbuffer;
    IUINT32 **texture;
    int tex_width;
    int tex_height;
    float max_u;
    float max_v;
    int render_state;
    IUINT32 background;
    IUINT32 foreground;
} device_t;

#define RENDER_STATE_WIREFRAME  1
#define RENDER_STATE_TEXTURE    2
#define RENDER_STATE_COLOR      4

void device_init(device_t *device, int width, int height, void *fb);
void device_destroy(device_t *device);
void device_set_texture(device_t *device, void *bits, long pitch, int w, int h);
void device_clear(device_t *device, int mode);
void device_pixel(device_t *device, int x, int y, IUINT32 color);
void device_draw_line(device_t *device, int x1, int y1, int x2, int y2, IUINT32 c);
IUINT32 device_texture_read(const device_t *device, float u, float v);

#endif /* RENDERING_DEVICE_H */
