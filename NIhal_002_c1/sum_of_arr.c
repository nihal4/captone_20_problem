/*
Sum of Array Elements

Statement: Given an array of N integers, find the sum of all elements.
Input: First line contains an integer N. Second line contains N space-separated integers.
Output: Print the sum of the array.
*/

#include <stdio.h>

int main(){
    int M, sum=0;
    scanf("%d", &M);
    int arr[M];
    for(int i =0; i<M; i++){
        scanf("%d", &arr[i]);
        sum += arr[i];
    }

    printf("%d", sum);
}