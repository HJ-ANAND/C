#include<stdio.h>

int factorial (int n){

    if (n==1 || n==0){
        return 1;
    }
    else {
        return (n * factorial(n-1));
    }
}

int main()
{
    int a,b;
    printf("Enter a number for factorial.");
    scanf("%d",&a);
    printf("Factorial of %d is %d.",a,factorial(a));
    return 0;
}
