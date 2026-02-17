#include <stdio.h>
#include <stdlib.h>
int maxArea(int* height, int heightSize) {
    int left = 0;
    int right = heightSize - 1;
    int max_water = 0;

    while (left < right) {
        int h = (height[left] < height[right]) ? height[left] : height[right];
        int w = right - left;
        int current_area = h * w;

        if (current_area > max_water) {
            max_water = current_area;
        }

        // Always move the pointer pointing to the shorter line
        if (height[left] < height[right]) {
            left++;
        } else {
            right--;
        }
    }
    return max_water;
}

int main() {
    int n;

    // 1. Get the size of the array
    printf("Enter the number of vertical lines (n): ");
    if (scanf("%d", &n) != 1 || n < 2) {
        printf("Invalid input. n must be at least 2.\n");
        return 1;
    }

    // 2. Allocate memory dynamically for n elements
    int *height = (int *)malloc(n * sizeof(int));
    if (height == NULL) {
        printf("Memory allocation failed!\n");
        return 1;
    }

    // 3. Get the heights from the user
    printf("Enter %d space-separated heights: ", n);
    for (int i = 0; i < n; i++) {
        scanf("%d", &height[i]);
    }

    // 4. Calculate and display the result
    int result = maxArea(height, n);
    printf("\n--- Result ---\n");
    printf("The maximum amount of water the container can store is: %d\n", result);

    // 5. Free the allocated memory
    free(height);

    return 0;

}
