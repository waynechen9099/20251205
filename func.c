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

int* E_Mul(int* A, int* B) {
 int* C = malloc(sizeof(int) * SIZE * SIZE);
 int i, j;
 for (i = 0; i < SIZE; i++) {
  for (j = 0; j < SIZE; j++) {
   C[i * SIZE + j] = A[i * SIZE + j] * B[i * SIZE + j];
  }
 }
 return C;
}
