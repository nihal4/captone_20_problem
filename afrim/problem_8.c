#include <stdio.h>

int main() {
    int nums[] = {-1, 0, 3, 5, 9, 12}; 
    int target = 9;  
    int size = sizeof(nums) / sizeof(nums[0]);

    int left = 0;
    int right = size - 1;
    int result = -1;

    while (left <= right) {
        int mid = left + (right - left) / 2;  

        if (nums[mid] == target) {
            result = mid;  
            break;
        } else if (nums[mid] < target) {
            left = mid + 1; 
        } else {
            right = mid - 1;  
        }
    }

    if (result != -1) {
        printf("Target %d found at index %d\n", target, result);
    } else {
        printf("Target %d not found in the array\n", target);
    }

    return 0;
}
