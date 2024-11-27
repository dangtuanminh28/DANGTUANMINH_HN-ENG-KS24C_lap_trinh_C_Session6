#include<stdio.h>
int main(){
// khai bao bien va nhap gia tri tu nguoi dung
   int n;
   printf(" nhap 1 so nguyen bat ky: ");
   scanf("%d", &n);
// khai bao f1,f2,fn 
   int f1 = 0;
   int f2 = 1;
   int fn;  
// su dung vong lap for
   for(int i = 0; i<n-1; i++){
// in ket qua
    printf("%d\n", f1);
    fn= f1+f2;
    f1=f2;
    f2=fn;
	}
	return 0;
	}
