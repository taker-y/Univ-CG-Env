/*
  imgioX11.h
*/

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include "imgio.h"

/* 途中経過の表示用 Window のサイズ */
#define WIN_X_SIZE 512
#define WIN_Y_SIZE 512

/* 途中経過の表示用 Window の初期表示位置 */
#define WIN_X_POSITION   100
#define WIN_Y_POSITION   100

/* === プロトタイプ宣言 === */
void imgioX11_InitWindow(void);
void imgioX11_DisplayImage(IMG img);
void imgioX11_RedrawLoop(IMG img);

