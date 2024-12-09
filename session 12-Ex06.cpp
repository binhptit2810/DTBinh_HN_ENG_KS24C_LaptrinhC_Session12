#include <stdio.h>

	//khai bao ham kiem tra so hoan hao
	int kiemTraSoHoanHao(int n) {
    if (n <= 1) return 0; 
    int tongUoc = 0;
    for (int i = 1;i <= n /2;i++) {
        if (n % i == 0) {
            tongUoc += i; 
        }
    }
    return tongUoc == n;
}
int main() {
    int number1, number2;
    // yeu cau nguoi dung nhap vao 2 so nguyen
    printf("Nhap so thu nhat: ");
    scanf("%d", &number1);
    printf("Nhap so thu hai: ");
    scanf("%d", &number2);
    // goi ham va kiem tra so thu nhat
    if (kiemTraSoHoanHao(number1)) {
        printf("%d la so hoan hao.\n", number1);
    } else {
        printf("%d khong phai la so hoan hao.\n", number1);
    }
    // goi ham va kiem tra so thu hai
    if (kiemTraSoHoanHao(number2)) {
        printf("%d la so hoan hao.\n", number2);
    } else {
        printf("%d khong phai la so hoan hao.\n", number2);
    }
    return 0;
}

