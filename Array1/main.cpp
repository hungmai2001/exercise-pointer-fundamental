#include "main.h"
#include "tinhluong.h"
#include "nhapxuat.h"
int n; //global

int main() {
	printf("Nhap so nhan vien: ");
	scanf_s("%d", &n);
	thongtinNV* NV = (thongtinNV*)calloc(n, sizeof(thongtinNV));

	//Nhapthongtin NV
	for (int i = 0; i < n; i++) {
		printf("Nhap thong tin nhan vien thu %d:\n", i + 1);
		Nhapthongtin(&NV[i]);
	}
	int choose;
	do {
		printf("\nMENU\n");
		printf("0. In danh sach nhan vien\n");
		printf("1. Tong thuc lanh cong ty trong thang\n");
		printf("2. In danh sach nhung nhan vien co muc luong co ban thap nhat\n");
		printf("3. Xem so luong nhan vien co muc thuong lon hon 1200000VND\n");
		printf("4. In danh sach cac nhan vien theo phong ban\n");
		printf("5. Cap nhat tang luong cua tat ca cac nhan vien len 5 phan tram. \n");
		printf("6. Thoat\n");
		printf("\n-----------------------------------\n");
		printf("Lua chon cua ban (1-6): ");
		scanf_s("%d", &choose);
		switch (choose) {
			case 0: Xuatthongtin(NV, n);
					printf("\n-------------------------------------------------------\n");
					break;
			case 1: printf("Tong thuc lanh cua tat ca cac nhan vien: %d\n", Tongthuclanh(NV, n));
					printf("\n-------------------------------------------------------\n");
					break;
			case 2: DsNVminluongcb(NV, n);
					printf("\n-------------------------------------------------------\n");
					break;
			case 3: SoluongNVthuongcao(NV, n);
					printf("\n-------------------------------------------------------\n");
					break;
			case 4: IndsNV(NV, n);
					printf("\n-------------------------------------------------------\n");
					break;
			case 5: Tangluong(NV, n);
					printf("Da tang luong co ban.\n");
					printf("\n-------------------------------------------------------\n");
					break;
			case 6: exit(0);
			default: printf("Ban nhap sai roi!\n");
					break;
		}
	} while (choose != 6);
	return 0;
}