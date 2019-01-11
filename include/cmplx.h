#ifndef __CMPLX_H__
#define __CMPLX_H__

typedef struct {
  double r;   // $B<B?t@.J,(B
  double i;   // $B5u?t@.J,(B
} CMPLX;

typedef struct {
  double abs;   // $B@dBPCM(B
  double arg;   // $BJP3Q(B [rad] 
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
