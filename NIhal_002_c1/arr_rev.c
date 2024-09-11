/*
Array in Reverse Order

Statement: Print the elements of an array of N integers in reverse order.
Input: First line contains an integer N. Second line contains N space-separated integers.
Output: Print the array in reverse order.

*/

#include <stdio.h>

int main(){
    int N, k=0; 
    scanf("%d", &N);
    int arr[N];
    int new_arr[N];

    for(int i= 0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    for( int i =N-1; i>=0; i--){
        new_arr[k] = arr[i];
        printf("%d ", new_arr[k]);
        k++;
    }

}