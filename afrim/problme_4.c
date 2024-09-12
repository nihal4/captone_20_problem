#include <stdio.h>

int main() {
    int prices[] = {7, 1, 5, 3, 6, 4}; 
    int size = sizeof(prices) / sizeof(prices[0]);

    if (size == 0) {
        printf("Maximum profit: 0\n");
        return 0;
    }

    int minPrice = prices[0]; 
    int maxProfit = 0; 

    for (int i = 1; i < size; i++) {
        if (prices[i] < minPrice) {
            minPrice = prices[i];
        } else {
            int profit = prices[i] - minPrice; 
            if (profit > maxProfit) {
                maxProfit = profit; 
            }
        }
    }

    printf("Maximum profit: %d\n", maxProfit);
    
    return 0;
}
