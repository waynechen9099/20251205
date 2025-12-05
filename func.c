#include"func.h"
#include<stdlib.h>
#include<math.h>

int* Add(int* A, int* B) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
 
   C[i * SIZE + j] = A[i * SIZE + j] + B[i * SIZE + j];
  }
 }
 return C;
}

int* Sub(int* A, int* B) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
   // 使用展平的索引 [i * SIZE + j] 來存取正確的記憶體位置
   C[i * SIZE + j] = A[i * SIZE + j] - B[i * SIZE + j];
  }
 }
 return C;
}

int* E_Mul(int* A, int* B) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
   // 使用展平的索引 [i * SIZE + j] 來存取正確的記憶體位置
   C[i * SIZE + j] = A[i * SIZE + j] * B[i * SIZE + j];
  }
 }
 return C;
}

int* M_Mul(int* A, int* B) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
   // 使用展平的索引 [i * SIZE + j] 來存取正確的記憶體位置
   C[i * SIZE + j] = A[i * SIZE + 0] * B[0 * SIZE + j] +
    A[i * SIZE + 1] * B[1 * SIZE + j] +
    A[i * SIZE + 2] * B[2 * SIZE + j];
  }
 }
 return C;
}

int* Tra(int* A) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
   // 使用展平的索引 [i * SIZE + j] 來存取正確的記憶體位置
   C[i * SIZE + j] = A[j * SIZE + i];
  }
 }
 return C;
}



int Det2(int a11, int a12, int a21, int a22) {
 int det = a11 * a22 - a12 * a21;
 return det;
}



int Det(int* A) {
 int det = 0;
 int a11 = A[0 * SIZE + 0], a12 = A[0 * SIZE + 1], a13 = A[0 * SIZE + 2];
 int a21 = A[1 * SIZE + 0], a22 = A[1 * SIZE + 1], a23 = A[1 * SIZE + 2];
 int a31 = A[2 * SIZE + 0], a32 = A[2 * SIZE + 1], a33 = A[2 * SIZE + 2];

 det = (a11 * a22 * a33 + a12 * a23 * a31 + a13 * a21 * a32) -
  (a13 * a22 * a31 + a12 * a21 * a33 + a11 * a23 * a32);

 return det;
}


int* Adj(int* A) {
 int* C1 = malloc(sizeof(int) * SIZE * SIZE);
 int* C2 = malloc(sizeof(int) * SIZE * SIZE);
 int a11 = A[0 * SIZE + 0], a12 = A[0 * SIZE + 1], a13 = A[0 * SIZE + 2];
 int a21 = A[1 * SIZE + 0], a22 = A[1 * SIZE + 1], a23 = A[1 * SIZE + 2];
 int a31 = A[2 * SIZE + 0], a32 = A[2 * SIZE + 1], a33 = A[2 * SIZE + 2];

 C1[0 * SIZE + 0] = Det2(a22, a23, a32, a33);
 C1[0 * SIZE + 1] = -Det2(a21, a23, a31, a33);
 C1[0 * SIZE + 2] = Det2(a21, a22, a31, a32);
 C1[1 * SIZE + 0] = -Det2(a12, a13, a32, a33);
 C1[1 * SIZE + 1] = Det2(a11, a13, a31, a33);
 C1[1 * SIZE + 2] = -Det2(a11, a12, a31, a32);
 C1[2 * SIZE + 0] = Det2(a12, a13, a22, a23);
 C1[2 * SIZE + 1] = -Det2(a11, a13, a21, a23);
 C1[2 * SIZE + 2] = Det2(a11, a12, a21, a22);

 C2 = Tra(C1);
 return C2;
}

float* Inv(int* A) {
 int* adjA = Adj(A);
 int det = Det(A);
 float* C = malloc(sizeof(float) * SIZE * SIZE);
 int i,j;
 for ( i = 0; i < SIZE; i++) {
  for ( j = 0; j < SIZE; j++) {
   C[i * SIZE + j] = (float)adjA[i * SIZE + j] / det;
  }
 }
 return C;
}