//
// VecMat.h
//

#include <math.h>

typedef double Vec[4];    // ３次元同次座標を使うため4次元配列
typedef double Mat[4][4]; // ３次元同次座標の変換を使うため4x4配列

// 4x4の行列の積計算 matA x matB --> matB に格納
int MultipleMat(Mat matA, Mat matB);

// 4x4 行列 mat x 4D ベクトル iv を計算し ov に格納
int MultipleVec(Mat mat, Vec iv, Vec ov);

// 行列 im の左からX軸回転行列 (角度 th) を掛け，変換行列を im に上書き
int RotateXMat(double th, Mat im);

// 行列 im の左からY軸回転行列 (角度 th) を掛け，変換行列を im に上書き
int RotateYMat(double th, Mat im);

// 行列 im の左から|Z!|軸回転行列 (角度 th) を掛け，変換行列を im に上書き
int RotateZMat(double th, Mat im);

// 2次元の回転＝3次元でのZ軸まわりの回転
int RotateMat(double th, Mat im);

// 行列 im の左から拡大縮小行列 (sx, sy, sz) を掛け，変換行列 im に上書き
int ScaleMat(double sx, double sy, double sz, Mat im);

// 行列 im の左から平行移動 (tx, ty, tz) を掛け，変換行列 im に上書き
int TranslateMat(double tx, double ty, double tz, Mat im);

// 行列の初期化(単位行列)
int InitMat(Mat mat);

// ベクトルの内積 va・vb の計算（同次座標表現の第4成分は無視）
double InnerProduct(Vec va, Vec vb);

// ベクトルの外積 va×vb 計算（同次座標表現の第4成分は無視）
int OuterProduct(Vec va, Vec vb, Vec vc);

// ベクトルの和(vc = va + vb)
int AddVec(Vec va, Vec vb, Vec vc);

// ベクトルの差(vc = va - vb)
int SubVec(Vec va, Vec vb, Vec vc);

// ベクトルの正規化
int NormalizeVec(Vec va);
