#include <stdio.h>

// khai bao ham tinh giai thua cua 1 so nguyen
	long long tinhGiaiThua(int n) {
    long long giaiThua = 1;
    for (int i = 1; i <= n; i++) {
        giaiThua *= i; 
    }
    return giaiThua; 
}
int main() {
    int number;
    // yeu cau nguoi dung nhap vao 1 so nguyen
    printf("Nhap mot so nguyen: ");
    scanf("%d", &number);
    if (number < 0) {
        printf("So khong hop le vui long nhap lai.\n");
    } else {
        long long ketQua = tinhGiaiThua(number);
        printf("Giai thua cua %d la: %lld\n", number, ketQua);
    }
    return 0;
}

