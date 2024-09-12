#include <stdio.h>

int main() {
    int nums[] = {2, 2, 1, 1, 1, 2, 2}; 
    int size = sizeof(nums) / sizeof(nums[0]);
    
    int count = 0;
    int candidate = 0;


    for (int i = 0; i < size; i++) {
        if (count == 0) {
            candidate = nums[i];  
        }
        count += (nums[i] == candidate) ? 1 : -1;  
    }

    
    
    printf("Majority element: %d\n", candidate);
    
    return 0;
}
