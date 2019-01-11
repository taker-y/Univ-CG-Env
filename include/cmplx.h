#ifndef __CMPLX_H__
#define __CMPLX_H__

typedef struct {
  double r;   // 実数成分
  double i;   // 虚数成分
} CMPLX;

typedef struct {
  double abs;   // 絶対値
  double arg;   // 偏角 [rad] 
} POLAR;

CMPLX  CmplxAdd(CMPLX c1, CMPLX c2);
CMPLX  CmplxSub(CMPLX c1, CMPLX c2);
CMPLX  CmplxMul(CMPLX c1, CMPLX c2);
CMPLX  CmplxDiv(CMPLX c1, CMPLX c2);
void   CmplxDisp(CMPLX c);

POLAR  CmplxToPolar(CMPLX c);
CMPLX  PolarToCmplx(POLAR p);

POLAR  PolarMul(POLAR p1, POLAR p2);
POLAR  PolarDiv(POLAR p1, POLAR p2);
void   PolarDisp(POLAR p);

#endif /* __CMPLX_H__ */
