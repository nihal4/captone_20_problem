#include <stdio.h>

int main() {
    int nums1[] = {1, 3, 5, 0, 0, 0};  
    int nums2[] = {2, 4, 6};          
    int m = 3; 
    int n = 3;  

    int i = m - 1;  
    int j = n - 1;  
    int k = m + n - 1;  


    while (i >= 0 && j >= 0) {
        if (nums1[i] > nums2[j]) {
            nums1[k] = nums1[i];  
            i--;
        } else {
            nums1[k] = nums2[j];  
            j--;
        }
        k--;
    }

    while (j >= 0) {
        nums1[k] = nums2[j];
        j--;
        k--;
    }

    printf("Merged array: ");
    for (int x = 0; x < m + n; x++) {
        printf("%d ", nums1[x]);
    }

    printf("\n");
    return 0;
}
