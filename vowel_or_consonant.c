/*
Vowel or Consonant?

Statement: Given a character C, check if it is a vowel or consonant.
Input: A single character C.
Output: Print "Vowel" or "Consonant".

*/

#include <stdio.h>
#include <ctype.h>

int main(){
    char vowel[5] = {'A', 'E', 'I', 'O', 'U'};
    char C;
    scanf("%c", &C);
    C = toupper(C);

    int high = 4, low = 0, mid, found = 0;
    
    while(low <= high){
        mid = (high + low)/2;
        if(C == vowel[mid]){
            found = 1;
            break;
        }else if(C>vowel[mid]){
            low = mid+1;
        }else if (C<vowel[mid]){
            high = mid-1;
        }
    }

    (found) ? printf("Vowel") : printf("Consonent");
}