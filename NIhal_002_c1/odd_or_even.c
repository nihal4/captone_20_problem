//problem statement

/*
Statement: Given an integer N, determine if it is odd or even.

Input: A single integer N.

Output: Print "Odd" or "Even" based on the number.
*/

#include <stdio.h>

int main(){
    int N; 

    scanf("%d", &N);

    (N%2==0)?printf("Even"):printf("Odd");
}