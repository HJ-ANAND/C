#include<stdio.h>
#include<math.h>

// Write a program to check whether the given number is palindrome or not.

int main(){
    int n, temp, temp2, count, nvar=0;
    printf("Enter a number. ");
    scanf("%d",&n);

    temp = temp2 = n;

    do {
        count += 1;
        n /= 10;
    }while(n>0);

    for (int i = count-1; i >= 0; i--)
    {
        int a = temp%10;
        nvar = a * pow(10,i) + nvar;
        temp /= 10;
        
    }
    
    
    if (nvar == temp2) {
    printf("\nPalindrome");
    }

    else{
        printf("\nNot palindrome");
    }

    return 0;
}
