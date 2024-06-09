#include<stdio.h>
#include<math.h>

// Write a program to display the following pattern.
// *****
// ****
// ***
// **
// *

int main(){
    int n;
    printf("Enter a number. ");
    scanf("%d",&n);

    for (int i = n; i >= 0; i--)
    {
        for (int j = 0; j < i; j++)
        {
            printf("*");
        }
        printf("\n");
    }
    
    return 0;
}