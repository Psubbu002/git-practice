#include <stdio.h>

int main() {
    int arr[100], n, i, j, temp;
    printf("Enter size of the array: ");
    scanf("%d", &n);
    if (n <= 0) {
        printf("Array size must be greater than 0.\n");
        return 1;
    }
    printf("Enter %d elements:\n", n);
    for (i = 0; i < n; i++) {
        scanf("%d\n", &arr[i]);
    }
    for (i = 0; i < n - 1; i++) {
        for (j = 0; j < n - i - 1; j++) {
            if (arr[j] > arr[j + 1]) {
                temp = arr[j];
                arr[j] = arr[j + 1];
                arr[j + 1] = temp;
            }
        }
    }
    printf("Sorted array: ");
    for (i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
    printf("Maximum number : %d\n",arr[n-1]);
    printf("Mininum number : %d\n",arr[0]);
    int max=arr[0];
    int min=arr[0];
    for (i = 1; i < n; i++) {
        if (arr[i] > max)
            max = arr[i];
        if (arr[i] < min)
            min = arr[i];
    }
    printf("Maximum number: %d\n", max);
    printf("Minimum number: %d\n", min);
    return 0;
}