#include"func.h"
#include<stdio.h>

int main() {
 int* C1;
 int i1, j1;
 int* C2;
 int i2, j2;
 int* C3;
 int i3, j3;
 int* C4;
 int i4, j4;
 int* CA5;
 int* CB5;
 int i5, j5;
  int* CA7;
 int* CB7;
 int i7,j7;
float* CA8;
 float* CB8;
 int i8, j8;
 

 int A[3][3] = { {1,1,3},{1,5,6},{7,3,4} };
 int B[3][3] = { {1,5,7},{6,3,2},{3,1,5} };
 printf("======================Add==================\n");
 C1 = Add((int*)A, (int*)B);
 for (i1 = 0; i1 < SIZE; i1++) {
  for (j1 = 0; j1 < SIZE; j1++) {
 
   printf("%d ", C1[i1 * SIZE + j1]);
  }
  printf("\n");
 }
 printf("======================Sub==================\n");
 printf("\n");

 C2 = Sub((int*)A, (int*)B);
 for (i2 = 0; i2 < SIZE; i2++) {
  for (j2 = 0; j2 < SIZE; j2++) {
   // 使用展平索引來存取 C1 中的元素
   printf("%d ", C2[i2 * SIZE + j2]);
  }
  printf("\n");
 }

 printf("======================E_Mul==================\n");
 printf("\n");
 
 
 C3 = E_Mul((int*)A, (int*)B);
 for (i3 = 0; i3 < SIZE; i3++) {
  for (j3 = 0; j3 < SIZE; j3++) {
   printf("%d ", C3[i3 * SIZE + j3]);
  }
  printf("\n");
 }
  printf("======================M_Mul==================\n");
 printf("\n");
 C4 = M_Mul((int*)A, (int*)B);
 for (i4 = 0; i4 < SIZE; i4++) {
  for (j4 = 0; j4 < SIZE; j4++) {
   printf("%d ", C4[i4 * SIZE + j4]);
  }
  printf("\n");
 }
 printf("======================Tra==================\n");
 printf("\n");
 
 CA5 = Tra((int*)A);
 CB5 = Tra((int*)B);
 printf("A:\n");
 for (i5 = 0; i5 < SIZE; i5++) {
  for (j5 = 0; j5 < SIZE; j5++) {
   printf("%d ", CA5[i5 * SIZE + j5]);
  }
  printf("\n");
 }
 printf("B:\n");
 for (i5 = 0; i5 < SIZE; i5++) {
  for (j5 = 0; j5 < SIZE; j5++) {
   printf("%d ", CB5[i5 * SIZE + j5]);
  }
  printf("\n");
 }
 printf("======================Det==================\n");
 printf("\n");
 int detA = Det((int*)A);
 int detB = Det((int*)B);
 printf("A:\n");
 printf("%d\n", detA);
 printf("\n");
 printf("B:\n");
 printf("%d\n", detB);
 printf("======================Adj==================\n");
 printf("\n");

 CA7 = Adj((int*)A);
 CB7 = Adj((int*)B);
 printf("A:\n");
 for (i7 = 0; i7 < SIZE; i7++) {
  for (j7 = 0; j7 < SIZE; j7++) {
   printf("%d ", CA7[i7 * SIZE + j7]);
  }
  printf("\n");
 }
 printf("B:\n");
 for (i7 = 0; i7 < SIZE; i7++) {
  for (j7 = 0; j7 < SIZE; j7++) {
   printf("%d ", CB7[i7 * SIZE + j7]);
  }
  printf("\n");
 }
 printf("======================Inv==================\n");
 printf("\n");

 CA8 = Inv((int*)A);
 CB8 = Inv((int*)B);
 printf("A:\n");
 for (i8 = 0; i8 < SIZE; i8++) {
  for (j8 = 0; j8 < SIZE; j8++) {

   printf("%f ", CA8[i8 * SIZE + j8]);
  }
  printf("\n");
 }
 printf("B:\n");
 for (i8 = 0; i8 < SIZE; i8++) {
  for (j8 = 0; j8 < SIZE; j8++) {
   printf("%f ", CB8[i8 * SIZE + j8]);
  }
  printf("\n");
 }
 return 0;
}

