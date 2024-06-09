#include<stdio.h>
#include<math.h>

// Write a program to find sum of the individual digits of a given number

int main(){
    int n, sum ;
    printf("Enter a number. ");
    scanf("%d",&n);

    do
    {
        int a = n%10;
        sum += a;
        n /= 10;
    } while (n>0);

    printf("\nSum of the digits are %d",sum);

    return 0;
}