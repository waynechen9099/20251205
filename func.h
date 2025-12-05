#ifndef FUNC_H
#define FUNC_H
#define SIZE 3

int* Add(int* A, int* B);
int* Sub(int* A, int* B);
int* E_Mul(int* A, int* B);
int* M_Mul(int* A, int* B);
int* Tra(int* A);
int Det2(int a11, int a12, int a21, int a22);
int Det(int* A);
int* Adj(int* A);
float* Inv(int* A);
#endif
