#include<stdio.h>
int main(){
// khai bao thang,nam
	int d, m, y;
// nhap thang,nam
    printf(" vui long nhap so thang: ");
	scanf("%d", &m);
	printf(" vui long nhap so nam: ");
	scanf("%d", &y);
// kiem tra ngay,thang,nam
    if ( m < 1 || m > 12 ){
	printf(" thang khong hop le");
	}
	switch (m) {
// 1 thang 31 ngay
	case 1:
	case 3:
	case 5:
	case 7:
	case 8:
	case 10:
	case 12:
    d = 31;
    break;
// 1 thang 30 ngay
	case 4:
	case 6:
	case 11:
    d = 30;
    break;
// thang 2 co 28 hoac 29 ngay
    case 2:
    if ((y % 4 == 0 && y % 100 != 0) || (y % 400 == 0)) {
       d = 29;
	} else {
	   d = 28;
	}
	break;
}
	printf("thang %d nam %d co ngay %d ", m, y, d); 
	return 0;
}
