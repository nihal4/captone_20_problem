/*
Statement: Given a year Y, determine whether it is a leap year.
Input: A single integer Y.
Output: Print "Leap Year" or "Not a Leap Year".
*/

#include <stdio.h>

int main(){
    int N;
    scanf("%d", &N);

    if((N%4==0) && ((N%400==0)||(N%100!=0))){
        printf("Leap Year");
    }else{
        printf("Not a Leap Year");
    }
}