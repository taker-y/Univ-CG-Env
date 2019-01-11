//
// VecMat.h
//

#include <math.h>

typedef double Vec[4];    // $B#3<!85F1<!:BI8$r;H$&$?$a(B4$B<!85G[Ns(B
typedef double Mat[4][4]; // $B#3<!85F1<!:BI8$NJQ49$r;H$&$?$a(B4x4$BG[Ns(B

// 4x4$B$N9TNs$N@Q7W;;(B matA x matB --> matB $B$K3JG<(B
int MultipleMat(Mat matA, Mat matB);

// 4x4 $B9TNs(B mat x 4D $B%Y%/%H%k(B iv $B$r7W;;$7(B ov $B$K3JG<(B
int MultipleVec(Mat mat, Vec iv, Vec ov);

// $B9TNs(B im $B$N:8$+$i(BX$B<42sE>9TNs(B ($B3QEY(B th) $B$r3]$1!$JQ499TNs$r(B im $B$K>e=q$-(B
int RotateXMat(double th, Mat im);

// $B9TNs(B im $B$N:8$+$i(BY$B<42sE>9TNs(B ($B3QEY(B th) $B$r3]$1!$JQ499TNs$r(B im $B$K>e=q$-(B
int RotateYMat(double th, Mat im);

// $B9TNs(B im $B$N:8$+$i(B|Z!|$B<42sE>9TNs(B ($B3QEY(B th) $B$r3]$1!$JQ499TNs$r(B im $B$K>e=q$-(B
int RotateZMat(double th, Mat im);

// 2$B<!85$N2sE>!a(B3$B<!85$G$N(BZ$B<4$^$o$j$N2sE>(B
int RotateMat(double th, Mat im);

// $B9TNs(B im $B$N:8$+$i3HBg=L>.9TNs(B (sx, sy, sz) $B$r3]$1!$JQ499TNs(B im $B$K>e=q$-(B
int ScaleMat(double sx, double sy, double sz, Mat im);

// $B9TNs(B im $B$N:8$+$iJ?9T0\F0(B (tx, ty, tz) $B$r3]$1!$JQ499TNs(B im $B$K>e=q$-(B
int TranslateMat(double tx, double ty, double tz, Mat im);

// $B9TNs$N=i4|2=(B($BC10L9TNs(B)
int InitMat(Mat mat);

// $B%Y%/%H%k$NFb@Q(B va$B!&(Bvb $B$N7W;;!JF1<!:BI8I=8=$NBh(B4$B@.J,$OL5;k!K(B
double InnerProduct(Vec va, Vec vb);

// $B%Y%/%H%k$N30@Q(B va$B!_(Bvb $B7W;;!JF1<!:BI8I=8=$NBh(B4$B@.J,$OL5;k!K(B
int OuterProduct(Vec va, Vec vb, Vec vc);

// $B%Y%/%H%k$NOB(B(vc = va + vb)
int AddVec(Vec va, Vec vb, Vec vc);

// $B%Y%/%H%k$N:9(B(vc = va - vb)
int SubVec(Vec va, Vec vb, Vec vc);

// $B%Y%/%H%k$N@55,2=(B
int NormalizeVec(Vec va);
