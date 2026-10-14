
#include <stdio.h>
#include <limits.h>

int main() {
    int arr[] = {12, 45, 7, 89, 34, 89};
    int n = sizeof(arr) / sizeof(arr[0]);
    int largest = INT_MIN;
    int secondLargest = INT_MIN;
    int i;

    for (i = 0; i < n; i++) {
        if (arr[i] > largest) {
            secondLargest = largest;
            largest = arr[i];
        } else if (arr[i] > secondLargest &&
                   arr[i] < largest) {
            secondLargest = arr[i];
        }
    }

    if (secondLargest == INT_MIN) {
        printf("No second largest distinct element.\n");
    } else {
        printf("Second largest element: %d\n", secondLargest);
    }

    return 0;
}
