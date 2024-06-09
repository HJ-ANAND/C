#include<stdio.h>
#include<math.h>

// Write program to print the following outputs using for loops.
// 1234567
// 234567
// 34567
// 4567
// 567
// 67
// 7

int main(){
    int n;
    printf("Enter a number. ");
    scanf("%d",&n);

    for (int i = 1; i <= n; i++)
    {
        for (int j = i; j <= n; j++)
        {
            printf("%d",j);
        }
        printf("\n");
    }
    
    return 0;
}