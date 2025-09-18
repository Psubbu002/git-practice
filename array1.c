#include <stdio.h>
#include <math.h>
#define MAX 100
void reverseArray(int arr[], int size);
void deleteAtPosition(int arr[], int *size, int pos);
void insertAtPosition(int arr[], int *size, int element, int pos);
int countDuplicates(int arr[], int size);
void printNonRepeated(int arr[], int size);
void deleteDuplicates(int arr[], int *size);
void printPerfectNumbers(int arr[], int size);
int isPerfect(int num);
void printStrongNumbers(int arr[], int size);
int isStrong(int num);
void printSecondLargest(int arr[], int size);
void selectionSort(int arr[], int size);
int main() {
    int arr[MAX], size, choice, pos, element;
    printf("Enter the size of array: ");
    scanf("%d", &size);
    printf("Enter %d elements:\n", size);
    for (int i = 0; i < size; i++) {
        scanf("%d", &arr[i]);
    }
    printf("\n==== MENU ====\n");
    printf("1. Reverse array\n");
    printf("2. Delete element at position\n");
    printf("3. Insert element at position\n");
    printf("4. Count duplicate elements\n");
    printf("5. Print non-repeated elements\n");
    printf("6. Delete duplicate elements\n");
    printf("7. Print perfect numbers\n");
    printf("8. Print strong numbers\n");
    printf("9. Print second largest number\n");
    printf("10. Sort array using Selection Sort\n");
    printf("0. Exit\n");
    do {
        printf("Enter your choice: ");
        scanf("%d", &choice);
        switch (choice) {
        case 1:
            reverseArray(arr, size);
            break;
        case 2:
            printf("Enter position to delete (0 to %d): ", size - 1);
            scanf("%d", &pos);
            deleteAtPosition(arr, &size, pos);
            break;
        case 3:
            printf("Enter element to insert: ");
            scanf("%d", &element);
            printf("Enter position (0 to %d): ", size);
            scanf("%d", &pos);
            insertAtPosition(arr, &size, element, pos);
            break;
        case 4:
            countDuplicates(arr, size);
            break;
        case 5:
            printNonRepeated(arr, size);
            break;
        case 6:
            deleteDuplicates(arr, &size);
            printf("Array after deleting duplicates: ");
            for (int i = 0; i < size; i++) {
                printf("%d ", arr[i]);
            }
            printf("\n");
            break;
        case 7:
            printPerfectNumbers(arr, size);
            break;
        case 8:
            printStrongNumbers(arr, size);
            break;
        case 9:
            printSecondLargest(arr, size);
            break;
        case 10:
        selectionSort(arr, size);
        printf("Array after Selection Sort: ");
        for (int i = 0; i < size; i++) {
            printf("%d ", arr[i]);
        }
        printf("\n");
        break;
        case 0:
            printf("Exiting...\n");
            break;
        default:
            printf("Invalid choice!\n");
        }

    } while (choice != 0);
    return 0;
}

// 1. Reverse
void reverseArray(int arr[], int size) {
    printf("Reversed array: ");
    for (int i = size - 1; i >= 0; i--) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// 2. Delete at position
void deleteAtPosition(int arr[], int *size, int pos) {
    if (pos < 0 || pos >= *size) {
        printf("Invalid position!\n");
        return;
    }
    for (int i = pos; i < *size - 1; i++) {
        arr[i] = arr[i + 1];
    }
    (*size)--; 
    printf("Element at position %d deleted.\n", pos);
    printf("Array after deletion: ");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}

// 3. Insert at position
void insertAtPosition(int arr[], int *size, int element, int pos) {
    if (pos < 0 || pos > *size || *size >= MAX) {
        printf("Invalid position or array full!\n");
        return;
    }
    for (int i = *size; i > pos; i--) {
        arr[i] = arr[i - 1];
    }
    arr[pos] = element;
    (*size)++;
    printf("Array after insertion: ");
    for (int i = 0; i < *size; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");
}
// 4. Count duplicates
int countDuplicates(int arr[], int size) {
    int count = 0, visited[MAX] = {0};
    for (int i = 0; i < size; i++) {
        if (visited[i]) continue;

        int count = 1;
        for (int j = i + 1; j < size; j++) {
            if (arr[i] == arr[j]) {
                count++;
                visited[j] = 1;
            }
        }

        if (count > 1) {
            printf("%d appears %d times\n", arr[i], count);
        }
    }
    return 0;
}
// 5. Print non-repeated elements
void printNonRepeated(int arr[], int size) {
    printf("Non-repeated elements: ");
    for (int i = 0; i < size; i++) {
        int repeat = 0;
        for (int j = 0; j < size; j++) {
            if (i != j && arr[i] == arr[j]) {
                repeat = 1;
                break;
            }
        }
        if (!repeat) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// 6. Delete duplicates
void deleteDuplicates(int arr[], int *size) {
    int temp[MAX], index = 0;
    for (int i = 0; i < *size; i++) {
        int duplicate = 0;
        for (int j = 0; j < index; j++) {
            if (arr[i] == temp[j]) {
                duplicate = 1;
                break;
            }
        }
        if (!duplicate) {
            temp[index++] = arr[i];
        }
    }
    for (int i = 0; i < index; i++) {
        arr[i] = temp[i];
    }
    *size = index;
}

// 7. Perfect number
int isPerfect(int num) {
    if (num <= 1) return 0;
    int sum = 1;
    for (int i = 2; i <= num / 2; i++) {
        if (num % i == 0)
            sum += i;
    }
    return sum == num;
}
void printPerfectNumbers(int arr[], int size) {
    printf("Perfect numbers: ");
    for (int i = 0; i < size; i++) {
        if (isPerfect(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// 8. Strong number
int factorial(int n) {
    if (n <= 1) return 1;
    return n * factorial(n - 1);
}
int isStrong(int num) {
    int original = num, sum = 0;
    while (num > 0) {
        int digit = num % 10;
        sum += factorial(digit);
        num /= 10;
    }
    return sum == original;
}
void printStrongNumbers(int arr[], int size) {
    printf("Strong numbers: ");
    for (int i = 0; i < size; i++) {
        if (isStrong(arr[i])) {
            printf("%d ", arr[i]);
        }
    }
    printf("\n");
}

// 9. Second largest number
void printSecondLargest(int arr[], int size) {
    if (size < 2) {
        printf("Not enough elements.\n");
        return;
    }
    int first = arr[0], second = -1;
    for (int i = 1; i < size; i++) {
        if (arr[i] > first) {
            second = first;
            first = arr[i];
        } else if (arr[i] > second && arr[i] != first) {
            second = arr[i];
        }
    }
    if (second == -1) {
        printf("No second largest element.\n");
    } else {
        printf("Second largest element: %d\n", second);
    }
}

//10 . selection sort
void selectionSort(int arr[], int size) {
    int i, j, minIdx, temp;
    for (i = 0; i < size - 1; i++) {
        minIdx = i;
        for (j = i + 1; j < size; j++) {
            if (arr[j] < arr[minIdx]) {
                minIdx = j;
            }
        }
        temp = arr[i];
        arr[i] = arr[minIdx];
        arr[minIdx] = temp;
    }
}
