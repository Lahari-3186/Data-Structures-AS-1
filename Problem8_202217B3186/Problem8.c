#include <stdio.h>
void smallest(int arr[], int i, int n, int *pos) {
    int small = arr[i];
    *pos = i;
    for (int j = i + 1; j < n; j++) {
        if (small > arr[j]) {
            small = arr[j];
            *pos = j;
        }
    }
}
void selection_sort(int arr[], int n) {
    int i, pos;
    for (i = 0; i < n - 1; i++) {
        smallest(arr, i, n, &pos);
        int temp = arr[i];
        arr[i] = arr[pos];
        arr[pos] = temp;
    }
}
int main() {
    int arr[] = {34, 85, 15, 82, 65, 70, 3};
    int n = sizeof(arr) / sizeof(arr[0]);
    selection_sort(arr, n);
    printf("Sorted array: ");
    for (int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    return 0;
}
