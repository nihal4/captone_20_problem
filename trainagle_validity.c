/*
Triangle Validity

Statement: Given three sides of a triangle a, b, c, check if they can form a valid triangle.
Input: Three integers a, b, and c.
Output: Print "Valid" if they can form a triangle, otherwise "Invalid".
*/

#include <stdio.h>

int main(){
    int a,b,c;
    scanf("%d%d%d", &a,&b,&c);

    if((a+b>c)&&(a+c>b)&&(c+b>a)){
        printf("valid");
    }else{
        printf("Invalid");
    }
}