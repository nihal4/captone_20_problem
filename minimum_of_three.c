/*
Minimum of Three Numbers

Statement: Given three integers A, B, and C, find the smallest number.
Input: Three space-separated integers.
Output: Print the smallest number.
*/

#include <stdio.h>

int main(){
    int A,B,C;

    scanf("%d%d%d", &A, &B, &C);

    if(A<B){
        if(A<C){
            printf("%d",A);
        }else{
            printf("%d", C);
        }
    }else if(B<A){
        if(B<C){
            printf("%d",B);
        }else{
            printf("%d", C);
        }
    }else{
        printf("%d",C);
    }
}