#include<stdio.h>
int main(){
// khai bao bien
   float a, b, c; 
   int sum;
// nhap gia tri tu nguoi dung
   printf("nhap gia tri a, b, c: ");
   scanf("%f %f %f", &a, &b, &c);
// cong thuc tinh phuong trinh bac 2
   if (a == 0) {
        if (b == 0) {
            printf("Phuong trinh vo nghiem!");
        } else {
            printf("Phuong trinh co mot nghiem: x = %f", (-c / b));
        }
        return;
    }
    // tinh delta
    float delta = b*b - 4*a*c;
    float x1;
    float x2;
    // tinh nghiem
    if (delta > 0) {
        x1 = (float) ((-b + sqrt(delta)) / (2*a));
        x2 = (float) ((-b - sqrt(delta)) / (2*a));
        printf("Phuong trinh co 2 nghiem la: x1 = %f va x2 = %f", x1, x2);
    } else if (delta == 0) {
        x1 = (-b / (2 * a));
        printf("Phong trinh co nghiem kep: x1 = x2 = %f", x1);
    } else {
        printf("Phuong trinh vo nghiem!");
    }
}
int main() {
    float a, b, c;
    printf("Nhap he so bac 2, a = ");
    scanf("%f", &a);
    printf("Nhap he so bac 1, b = ");
    scanf("%f", &b);
    printf("Nhap so hang tu do, c = ");
    scanf("%f", &c);
    giaiPTBac2(a, b, c);
    return 0;
}