/*
Maximum of Two Numbers

Statement: Given two integers A and B, find the larger number.

Input: Two space-separated integers A and B.

Output: Print the larger of the two.
*/

#include <stdio.h>

int main(){
    int A, B; 
    scanf("%d%d", &A, &B);
    (A>B)?printf("%d",A):printf("%d",B);
}