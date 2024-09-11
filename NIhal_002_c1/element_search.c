/*
Element Search in Array

Statement: Search for an element X in an array of N integers. Return its position or -1 if not found.
Input: First line contains an integer N. Second line contains N space-separated integers. Third line contains X.
Output: Print the index of the element or -1.
*/

#include <stdio.h>

int main(){
    int N, eliment;
    scanf("%d", &N);

    int arr[N];

    for(int i = 0; i<N; i++){
        scanf("%d", &arr[i]);
    }

    int hight = N, low = 0, mid, found=0, index;

    scanf("%d", &eliment);

    while (low <= hight)
    {
        mid = (hight+low)/2;
        if(eliment==arr[mid]){
            found = 1;
            index = mid;
            break;
        }else if(eliment > arr[mid]){
            low = mid + 1;
        }else if(eliment < arr[mid]){
            hight = mid - 1; 
        }
    }
    if(found){
        printf("%d", index+1);
    }else{
        printf("-1");
    }

}