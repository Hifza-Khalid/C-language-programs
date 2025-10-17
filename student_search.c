#include <stdio.h>

int binarySearch(int arr[], int size, int target) {
    int left = 0, right = size - 1;

    while (left <= right) {
        int mid = (left + right) / 2;

        if (arr[mid] == target)
            return mid;
        else if (arr[mid] < target)
            left = mid + 1;
        else
            right = mid - 1;
    }
    return -1; // not found
}

int main() {
    int rollNumbers[10], i, target, result;

    printf("🎓 Student Record Search using Binary Search\n");
    printf("---------------------------------------------\n");

    printf("Enter 10 sorted student roll numbers:\n");
    for (i = 0; i < 10; i++) {
        printf("Roll %d: ", i + 1);
        scanf("%d", &rollNumbers[i]);
    }

    printf("\nEnter roll number to search: ");
    scanf("%d", &target);

    result = binarySearch(rollNumbers, 10, target);

    if (result != -1)
        printf("✅ Roll Number %d found at position %d.\n", target, result + 1);
    else
        printf("❌ Roll Number %d not found in the record.\n", target);

    return 0;
}
