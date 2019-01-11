/*
  imgioX11.h
*/

#include <X11/Xlib.h>
#include <X11/Xutil.h>
#include "imgio.h"

/* ����в��ɽ���� Window �Υ����� */
#define WIN_X_SIZE 512
#define WIN_Y_SIZE 512

/* ����в��ɽ���� Window �ν��ɽ������ */
#define WIN_X_POSITION   100
#define WIN_Y_POSITION   100

/* === �ץ�ȥ�������� === */
void imgioX11_InitWindow(void);
void imgioX11_DisplayImage(IMG img);
void imgioX11_RedrawLoop(IMG img);

