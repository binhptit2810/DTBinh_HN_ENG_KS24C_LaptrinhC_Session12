#include <stdio.h>

// khai bao ham in ra cac phan tu trong mang
void inMang(int arr[], int size) {
    printf("Cac phan tu trong mang la:\n");
    for (int i = 0; i < size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
int main() {
    // Khai bao va khoi tao mang
    int arr[] = {1, 2, 10, 4, 5, 9, 20};
    int size = sizeof(arr) / sizeof(arr[0]);
    inMang(arr, size);
    return 0;
}

