/*
Largest Element in Array

Statement: Find the largest element in a given array of N integers.
Input: First line contains an integer N. Second line contains N space-separated integers.
Output: Print the largest element.
*/

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for(int i = 0; i<N-1; i++){
        for(int j = 0; j<N-i-1; j++){
            if(arr[j] > arr[j+1]){
                int box = arr[j+1];
                arr[j+1] =arr[j];
                arr[j] =box;
            }
        }
    }

    printf("%d", arr[N-1]);
}