#include"func.h"
#include<stdio.h>

int main() {
 int* C1;
 int i1, j1;
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

 printf("======================E_Mul==================\n");
 printf("\n");
 int* C3;
 C3 = E_Mul((int*)A, (int*)B);
 int i3, j3;
 for (i3 = 0; i3 < SIZE; i3++) {
  for (j3 = 0; j3 < SIZE; j3++) {
   printf("%d ", C3[i3 * SIZE + j3]);
  }
  printf("\n");
 }
 
 
 return 0;
}

