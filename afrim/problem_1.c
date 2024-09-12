#include <stdio.h>

int main() {
    int nums[] = {1, 1, 2, 2, 3, 3, 4, 5, 5};
    int size = sizeof(nums) / sizeof(nums[0]);
    
    if (size == 0) {
        printf("Number of unique elements: 0\n");
        return 0;
    }

    int k = 1;
    for (int i = 1; i < size; i++) {
        if (nums[i] != nums[k - 1]) { 
            nums[k] = nums[i];
            k++; 
        }
    }
    
    
    printf("Array with unique elements: ");
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    
    printf("\nNumber of unique elements: %d\n", k);
    
    return 0;
}
