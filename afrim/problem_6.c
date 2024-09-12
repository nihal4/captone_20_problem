#include <stdio.h>

int main() {
    int nums[] = {3, 0, 1};  
    int n = sizeof(nums) / sizeof(nums[0]);  

    int total_sum = n * (n + 1) / 2;  
    int actual_sum = 0;

    
    for (int i = 0; i < n; i++) {
        actual_sum += nums[i];
    }

   
    int missing_number = total_sum - actual_sum;

    printf("Missing number: %d\n", missing_number);

    return 0;
}
