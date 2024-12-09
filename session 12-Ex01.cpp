#include <stdio.h>

// khai bao ham tinh tong hai so a va b
int sum(int a, int b) {
    return a + b; 
}
int main() {
    int so1 = 5;
    int so2 = 7;
    // goi ham va in ket qua ra ngoai man hinh
    int tong = sum(so1, so2);
    printf("Tong cua %d va %d la: %d\n", so1, so2, tong);

    return 0;
}

