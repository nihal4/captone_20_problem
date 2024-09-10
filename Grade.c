/*
Grade Calculator

Statement: Given a student's score S (out of 100), determine the grade based on the following ranges:
A: 90-100
B: 80-89
C: 70-79
D: 60-69
F: Below 60

Input: A single integer S.

Output: Print the grade.

*/

#include <stdio.h>

int main(){
    int S;
    scanf("%d", &S);

    if(S>=90 && S<=100){
        printf("A");
    }else if(S>= 80 && S<=89){
        printf("B");
    }else if(S>= 70 && S<= 79){
        printf("C");
    }else if(S>= 60 && S<= 69){
        printf("D");
    }else{
        printf("F");
    }
}