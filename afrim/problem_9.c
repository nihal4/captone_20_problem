#include <stdio.h>

int main() {
    
    int matrix[2][3] = {
        {1, 2, 3},
        {4, 5, 6}
    };
    
    int rows = 2;  
    int cols = 3;  

    
    int transpose[cols][rows];

    
    for (int i = 0; i < rows; i++) {
        for (int j = 0; j < cols; j++) {
            transpose[j][i] = matrix[i][j];
        }
    }

    
    printf("Transposed matrix:\n");
    for (int i = 0; i < cols; i++) {
        for (int j = 0; j < rows; j++) {
            printf("%d ", transpose[i][j]);
        }
        printf("\n");
    }

    return 0;
}
