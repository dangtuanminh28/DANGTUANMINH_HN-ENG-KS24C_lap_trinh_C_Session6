#include <stdio.h>
int main() {
//khai bao bien    
	int n, count = 0, current_number = 2;
// nguoi dung nhap so nguyen n bat ky
    printf("Nhap 1 so nguyen n bat ky: ");
    scanf("%d", &n);
// kiem tra so nguyen 
    do {
    	if (n < 0) {
          printf("khong hop le! hay nhap lai so nguyen: ");
          scanf("%d", &n);
          }
    } while (n < 0); 
	printf("%d so nguyen to dau tien la: ", n); // in ra ket qua    
// Su dung vong lap while de tim n so nguyen to
    while (count < n) {
        int prime = 1; // Gia su so hien tai la so nguyen to
// Kiem tra tinh nguyen to cua so_hien_tai
        for (int i = 2; i < current_number; i++) {
            if (current_number % i == 0) {
                prime = 0; // Khong phai so nguyen to
                break;
            }
        }
// Neu la so nguyen to, in ra va tang dem
        if (prime) {
            printf("%d ", current_number);
            count++;
        }
// Tang so hien tai de kiem tra so tiep theo
        current_number++;
    }
    return 0;
}

