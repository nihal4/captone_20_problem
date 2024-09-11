//problem statement

/*
Statement: Given an integer N, determine whether it is positive, negative, or zero.

Input: A single integer N.

Output: Print "Positive", "Negative", or "Zero".
*/

#include <stdio.h>

int main(){
    int N;

    scanf("%d", &N);

    if(N>0){
        printf("Positive");
    }else if(N<0){
        printf("Negative");
    }else{
        printf("Zero");
    }
}