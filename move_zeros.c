
#include <stdio.h>

int main() {
    int arr[] = {0, 5, 0, 3, 8, 0, 2};
    int n = sizeof(arr) / sizeof(arr[0]);
    int j = 0;

    for (int i = 0; i < n; i++) {
        if (arr[i] != 0) {
            arr[j] = arr[i];
            j++;
        }
    }

    while (j < n) {
        arr[j] = 0;
        j++;
    }

    printf("Array after moving zeros: ");

    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }

    printf("\n");

    return 0;
}
