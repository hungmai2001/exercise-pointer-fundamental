#ifndef MAIN_H
#define MAIN_H
#define TANG 5
#include <stdio.h>
#include <stdlib.h>
#include <string.h>

typedef struct {
	char name[51];
	char MSNV[11];
	int namsinh;
	char phongban[21];
	int luongcb;
	int thuong;
	int thuclanh;
} thongtinNV;

void Nhapthongtin(thongtinNV* NV);
void Xuatthongtin(thongtinNV* NV, int n);

#endif
