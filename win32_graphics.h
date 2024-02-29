#ifndef WIN32_GRAPHICS_H
#define WIN32_GRAPHICS_H

#include <windows.h>
#include <tchar.h>

extern int screen_w, screen_h, screen_exit;
extern int screen_mx, screen_my, screen_mb;
extern int screen_keys[512];
extern unsigned char *screen_fb;
extern long screen_pitch;

int screen_init(int w, int h, const TCHAR *title);
int screen_close(void);
static LRESULT screen_events(HWND, UINT, WPARAM, LPARAM);	// win32 event handler
void screen_dispatch(void);
void screen_update(void);

#endif /* WIN32_GRAPHICS_H */
