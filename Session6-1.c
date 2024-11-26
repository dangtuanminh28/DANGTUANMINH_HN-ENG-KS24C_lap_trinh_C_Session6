#include<stdio.h>
int main(){
// khai bao bien
   int n[5];
   int sum = 0;
// nhap 5 so nguyen
   printf("Nhap vao 5 so nguyen bat ky:\n");
    for (int i = 0; i < 5; i++) {
        printf("nhap so thu %d: ", i + 1);
        scanf("%d", &n[i]);
}
// kiem tra so nguyen
    for (int i = 0; i < 5; i++) {
        if (n[i] % 2 != 0) {
            sum += n[i];
        }
    }
// In ket qua
    printf("Tong cac so le trong 5 so da nhap la: %d\n", sum);
	return 0;
}
