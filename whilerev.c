#include<stdio.h>
#include<math.h>

// /Given a number, write a program using while loop to reverse the digits of the number.

int main(){
    int n ;
    printf("Enter a number. ");
    scanf("%d",&n);

    while (n>0)
    {
        printf("%d",n%10);
        n/=10;
    }
    
    return 0;
}