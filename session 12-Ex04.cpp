#include <stdio.h>

	// khai bao ham tim so lon nhat trong mang
	int timSoLonNhat(int arr[], int size) {
    int max = arr[0]; 
    for (int i = 1; i < size; i++) {
        if (arr[i] > max) {
            max = arr[i];
        }
    }
    return max; 
}
int main() {
    // khai bao va khoi tao mang
    int arr[] = {3, 8, 1, 23, 7, 4};
    int size = sizeof(arr) / sizeof(arr[0]);
    // goi ham va in ket qua ra ngoai man hinh
    int soLonNhat = timSoLonNhat(arr, size);
    printf("So lon nhat trong mang la: %d\n", soLonNhat);

    return 0;
}

