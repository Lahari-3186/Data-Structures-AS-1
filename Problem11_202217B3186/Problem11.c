#include <stdio.h>
int linear_search(int arr[], int n, int target) {
    int i;
    for (i = 0; i < n; i++) {
        if (arr[i] == target) {
            return i;
        }
    }
    return -1;
}
int main() {
    int arr[] = {1, 20, 8, 16, 4};
    int n = sizeof(arr) / sizeof(arr[0]);
    int target = 20;
    int result = linear_search(arr, n, target);
    if (result == -1) {
        printf("Element not found in the array.\n");
    } else {
        printf("Element found at index: %d\n", result);
    }
    return 0;
}
