#include <stdio.h>

int main() {
    int arr[100], n, elem;
    printf("Enter the no. of elements in the array: ");
    scanf("%d", &n);
    printf("Enter the elements: ");
    for(int i = 0; i < n; i++) {
        scanf("%d", &arr[i]);
    }

    printf("Enter the element to insert at the end: ");
    scanf("%d", &elem);
    arr[n] = elem;
    n++;
    printf(" after insertion: ");
    for(int i = 0; i < n; i++) {
        printf("%d ", arr[i]);
    }
    printf("\n");

    return 0;
}