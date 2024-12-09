#include <stdio.h>

	// khai bao ham kiem tra so nguyen to
	int kiemTraSoNguyenTo(int n){
    if (n <= 1) 
	return 0; 
    for (int i = 2; i * i <= n; i++) {
        if (n % i == 0) {
            return 0;
        }
    }
    return 1; 
	}
int main() {
    int number1,number2;
    // yeu cau nguoi dung nhap vao 2 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);
    // goi ham va in ra ket qua
    if (kiemTraSoNguyenTo(number1)) {
        printf("%d la so nguyen to.\n", number1);
    } else {
        printf("%d khong phai la so nguyen to.\n", number1);
    }
    if (kiemTraSoNguyenTo(number2)) {
        printf("%d la so nguyen to.\n", number2);
    } else {
        printf("%d khong phai la so nguyen to.\n", number2);
    }
    return 0;
}

