#ifndef __PEN_H__
#define __PEN_H__

typedef struct {
  double px, py;  /* position vector */
  double dx, dy;  /* direction vector */
  int lw;         /* line width */
  char lc[32];    /* line color name*/
} Pen;

int PenSetPos(Pen *pen, double px, double py);
int PenSetDir(Pen *pen, double dx, double dy);
int PenSetLw(Pen *pen, int lw);
int PenSetLc(Pen *pen, char lc[]);
char *PenColor(int i);
void PenTurn(Pen *pen, double angle);
void PenDraw(Pen *pen, double l);
void PenLine(Pen *pen, double x0, double y0, double x1, double y1);
void PenFlush();
void PenPause(double p);
void PenInit(Pen *pen);
void PenFinal();

#endif /* __PEN_H__ */
