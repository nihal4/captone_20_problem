/*
Divisibility by 5 and 11

Statement: Given an integer N, determine whether it is divisible by both 5 and 11.
Input: A single integer N.
Output: Print "Yes" if divisible by both, otherwise "No".
*/

#include <stdio.h>

int main(){
    int N; 
    scanf("%d",&N);

    switch((N%5==0)&&(N%11==0))
    {
        case 1:
            printf("Yes");
            break;
        case 0:
            printf("No");
            break;
    }
}