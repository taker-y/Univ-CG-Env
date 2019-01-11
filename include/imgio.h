#ifndef __IMGIO_H__
#define __IMGIO_H__

/******************************************/
/*                                        */
/*    Header File for                     */
/*                                        */
/*     PPM & BMP & JPEG IO routines       */
/*                                        */
/*         2011.09.14 by T. Yoshida       */
/*                                        */
/******************************************/

#define IMGIO_UNDEF            -1
#define IMGIO_OK                1
#define IMGIO_ERR               0
#define IMGIO_UNKNOWN_FORMAT    1
#define IMGIO_CANNOT_OPEN       2
#define IMGIO_WRONG_SIZE        3
#define IMGIO_MALLOC            4
#define IMGIO_DATA_INCONSISTENT 5
#define IMGIO_WRITE_ERR         6
#define IMGIO_UNSUPPORTED       7

#define UND -1
#define NON 0
#define PPM 1
#define PGM 2
#define PBM 3
#define BMP 4
#define JPG 5

#define COLOR 1
#define MONO  2

#define IMGIO_MAX_SIZE  10000
#define IMGIO_MAX_VAL     255

extern char *imgio_msg[];
extern int imgio_errno;
extern int jpg_quality;

typedef struct {
  int format;
  int color;
  int width, height;
  unsigned char *p_data;
} IMG;

#define R(img, i, j) ((img).p_data)[3*((i)+(img).width*(j))]
#define G(img, i, j) ((img).p_data)[3*((i)+(img).width*(j))+1]
#define B(img, i, j) ((img).p_data)[3*((i)+(img).width*(j))+2]
#define Y(img, i, j) ((img).p_data)[(i)+(img).width*(j)]
#define D(img, i, j) ((img).p_data)[(i)+(img).width*(j)]
#define W(img)       (img).width
#define H(img)       (img).height
#define T(img)       (img).color

void iIMG(IMG *);
int  cIMG(int, int, IMG *, int);
void dIMG(IMG *);
int  rIMG(IMG *, char *);
int  wIMG(IMG, char *);
unsigned char M(IMG, int, int);

void JPG_quality(int);

#endif /* __IMAGEIO_H__ */


