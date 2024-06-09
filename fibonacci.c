#include<stdio.h>
#include<math.h>

// Write a program to generate n Fibonacci numbers.

int main(){
    int n, n1 =0, n2 =1, nn=0;
    printf("Enter a number. ");
    scanf("%d",&n);

    if (n<=0)
    {
        printf("Enter a positive number. ");
    }

    else if (n == 1)
    {
        printf("%d",n1);
    }

    else{
        for (int i = 0; i < n; i++)
        {
            printf("\n%d",n1);
            nn = n1+n2;
            n1 = n2;
            n2 = nn;
        }
    }
    
    return 0;
}