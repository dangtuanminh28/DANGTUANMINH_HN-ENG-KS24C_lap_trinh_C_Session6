#include<stdio.h>
int main(){
// khai bao bien
    int a, b, c, d;    
	int n1 = 2;
	int n2 = 0;
	int n3 = 3;
	int n4 = 4;
// nhap gia tri tu nguoi dung
    do {
    printf(" nhap so thu nhat: ");
	scanf("%d", &a);
	printf(" nhap so thu hai: ");
	scanf("%d", &b);	
	printf(" nhap so thu ba: ");
	scanf("%d", &c);	
	printf(" nhap so thu bon: ");
	scanf("%d", &d);
// kiem tra	gia tri
	if ( a != n1 || b != n2 || c != n3 || d != n4 ){
		printf("sai mat khau! hay nhap lai: \n");
		}
	}	while ( a != n1 || b != n2 || c != n3 || d != n4 );
		printf("mat khau dung roi! vay mat khau la: %d %d %d %d. ", n1, n2, n3, n4);
	return 0;	
}
