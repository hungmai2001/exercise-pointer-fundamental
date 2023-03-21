#include "nhapxuat.h"

void Nhapthongtin(thongtinNV* NV) {
	getchar();
	printf("Name: ");
	gets_s(NV->name);
	printf("MSNV: ");
	//getchar();
	gets_s(NV->MSNV);
	printf("Nam sinh: ");
	scanf_s("%d", &NV->namsinh);
	printf("Phong ban: ");
	getchar();
	gets_s(NV->phongban);
	printf("Luong co ban: ");
	scanf_s("%d", &NV->luongcb);
	printf("Thuong: ");
	scanf_s("%d", &NV->thuong);
	NV->thuclanh = NV->luongcb + NV->thuong;
}
void Xuatthongtin(thongtinNV* NV, int n) {
	for (int i = 0; i < n; i++) {
		printf("\nThong tin nhan vien thu %d:\n", i + 1);
		printf("Name: %s\n", NV[i].name);
		printf("MSNV: %s\n", NV[i].MSNV);
		printf("Nam sinh: %d\n", NV[i].namsinh);
		printf("Phong ban: %s\n", NV[i].phongban);
		printf("Luong co ban: %d\n", NV[i].luongcb);
		printf("Thuong: %d\n", NV[i].thuong);
		printf("Thuc lanh: %d\n", NV[i].thuclanh);
	}
}
void IndsNV(thongtinNV* NV, int n) {
	static thongtinNV* NV_SX = NULL;
	if (NV_SX == NULL) {
		NV_SX = (thongtinNV*)calloc(n, sizeof(thongtinNV));
	}
	memcpy(NV_SX, NV, sizeof(thongtinNV) * n);

	for (int j = 0; j < n - 1; j++) {
		for (int i = 0; i < n - j - 1; i++) {
			if (strcmp(NV_SX[i].phongban, NV_SX[i + 1].phongban) > 0) {
				//doi vi tri 2 nhan vien
				swapchar(NV_SX[i].name, NV_SX[i + 1].name);
				swapchar(NV_SX[i].MSNV, NV_SX[i + 1].MSNV);
				swapchar(NV_SX[i].phongban, NV_SX[i + 1].phongban);
				swapint(&NV_SX[i].namsinh, &NV_SX[i + 1].namsinh);
				swapint(&NV_SX[i].luongcb, &NV_SX[i + 1].luongcb);
				swapint(&NV_SX[i].thuong, &NV_SX[i + 1].thuong);
				swapint(&NV_SX[i].thuclanh, &NV_SX[i + 1].thuclanh);
			}
			else if (strcmp(NV_SX[i].phongban, NV_SX[i + 1].phongban) == 0) {
				if (strcmp(NV_SX[i].MSNV, NV_SX[i + 1].MSNV) < 0) {
					swapchar(NV_SX[i].name, NV_SX[i + 1].name);
					swapchar(NV_SX[i].MSNV, NV_SX[i + 1].MSNV);
					swapint(&NV_SX[i].namsinh, &NV_SX[i + 1].namsinh);
					swapint(&NV_SX[i].luongcb, &NV_SX[i + 1].luongcb);
					swapint(&NV_SX[i].thuong, &NV_SX[i + 1].thuong);
					swapint(&NV_SX[i].thuclanh, &NV_SX[i + 1].thuclanh);
				}
			}
		}
	}
	Xuatthongtin(NV_SX, n);
}
static void swapchar(char* str1, char* str2){
	char* temp = (char*)malloc((strlen(str1) + 1) * sizeof(char));
	//char temp[strlen(str1) + 1];
	strcpy_s(temp, strlen(str1) + 1, str1);
	strcpy_s(str1, strlen(str2) + 1, str2);
	strcpy_s(str2, strlen(temp) + 1, temp);
	free(temp);
}
static void swapint(int* str1, int* str2){
	int temp = *str1;
	*str1 = *str2;
	*str2 = temp;
}