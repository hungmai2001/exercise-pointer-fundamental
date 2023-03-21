#include <stdio.h>
#include "tinhluong.h"

static int Luongcbmin(thongtinNV* NV, int n) {
	int min = NV[0].luongcb;
	for (int i = 0; i < n; i++) {
		if (NV[i].luongcb < min)
			min = NV[i].luongcb;
	}
	return min;
}
void DsNVminluongcb(thongtinNV* NV, int n) {
	int min = Luongcbmin(NV, n);
	printf("DS nhung nhan vien co muc luong co ban nho nhat: \n");
	for (int i = 0; i < n; i++) {
		if (NV[i].luongcb == min)
			printf("Name: %s, MSNV: %s, luong co ban: %d\n", NV[i].name, NV[i].MSNV, NV[i].luongcb);
	}
}
int Tongthuclanh(thongtinNV* NV, int n) {
	int tong = 0;
	for (int i = 0; i < n; i++) {
		tong += NV[i].thuclanh;
	}
	return tong;
}
void SoluongNVthuongcao(thongtinNV* NV, int n) {
	int count = 0;
	for (int i = 0; i < n; i++) {
		if (NV[i].thuong >= 1200)
			count++;
	}
	printf("So luong nhan vien co muc thuong lon hon 1200000 la: %d", count);
}
void Tangluong(thongtinNV* NV, int n) {
	for (int i = 0; i < n; i++) {
		NV[i].luongcb += NV[i].luongcb * TANG / 100;
	}
}