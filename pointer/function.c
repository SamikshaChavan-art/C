#include <stdio.h>
#include <stdlib.h>

int main() {
    int n;
    printf("Enter number of elements: ");
    scanf("%d", &n);

    // Allocate memory for n integers, initialized to zero
    int *arr = (int *) calloc(n, sizeof(int));

    if (arr == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    printf("Initial values (should be 0):\n");
    for (int i = 0; i < n; i++) {
        printf("%5d", arr[i]);
    }

    printf("\nEnter %d integers:\n", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("You entered:\n");
    for (int i = 0; i < n; i++) {
        printf("%5d", arr[i]);
    }

    // Free the allocated memory
    free(arr);

    return 0;
}
