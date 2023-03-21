#ifndef NHAPXUAT_H
#define NHAPXUAT_H
#include "main.h"

extern const thongtinNV* NV;
extern int n;
void Nhapthongtin(thongtinNV* NV);
void Xuatthongtin(thongtinNV* NV, int n);
void IndsNV(thongtinNV* NV, int n);
static void swapchar(char* str1, char* str2);
static void swapint(int* str1, int* str2);

#endif
