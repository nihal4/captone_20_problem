#include <stdio.h>

int main() {
    int nums[] = {3, 2, 2, 3, 4, 3, 5, 3};
    int val = 3; 
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int k = 0; 
    
    for (int i = 0; i < size; i++) {
        if (nums[i] != val) { 
            nums[k] = nums[i]; 
            k++; 
        }
    }
    
    
    printf("Array with elements not equal to %d: ", val);
    for (int i = 0; i < k; i++) {
        printf("%d ", nums[i]);
    }
    
    printf("\nNumber of elements not equal to %d: %d\n", val, k);
    
    return 0;
}
