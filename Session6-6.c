#include <stdio.h>
int main() {
    for (int n = 1; n <= 100; n++) { // Lap qua cac so tu 1 den 100
        if (n % 3 == 0 && n % 5 == 0) { // Kiem tra neu n chia het cho ca 3 va 5
            printf("FizzBuzz\n");
        } else if (n % 3 == 0) { // Kiem tra neu n chia het cho 3
            printf("Fizz\n");
        } else if (n % 5 == 0) { // Kiem tra neu n chia het cho 5
            printf("Buzz\n");
        } else { // Neu khong chia het cho 3 hoac 5
            printf("%d\n", n);
        }
    }
// ket thuc chuong trinh
	return 0; 
}

