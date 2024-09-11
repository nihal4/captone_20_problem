/*
Character Case Check

Statement: Given a character C, determine whether it is uppercase or lowercase.
Input: A single character C.
Output: Print "Uppercase" or "Lowercase".
*/

#include <stdio.h>

int main(){
    char C; 
    scanf(" %c", &C);

    if(C>='A' && C<='Z'){
        printf("Uppercase");
    }else{
        printf("Lowercase");
    }
}