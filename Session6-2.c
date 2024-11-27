#include<stdio.h>
int main(){
// khai bao bien
    int n[5];
    int na = 0; // bien chua so chan
    int nb = 0; // bien chua so le
// nhap 5 so nguyen tu nguoi dung
    printf("nhap 5 so nguyen: \n");
    for (int i = 0; i < 5; i++) {
	scanf("%d", &n);
    }
// kiem tra bien 
    for (int i = 0; i < 5; i++) {
        if (n[i] % 2 == 0) {
        na++; // Neu chia het cho 2, la so chan
        } 
	    else {
        nb++;  // Nguoc lai, la so le
        }
    }
// in ra ket qua
    printf(" so luong so chan co: %d ",na);
    printf(" so luong so le co: %d ",nb);
	return 0;
	}
