#include<stdio.h>
#include<math.h>

int main()
{
    int n, count, r, sum=0, temp, temp2;
    printf("Enter a number. ");
    scanf("%d",&n);

    temp = temp2 = n;

    do {
        count += 1;
        n /= 10;
    }while(n>0);


    for (int i = 0; i < count; i++)
    {
        r = temp%10;
        sum = sum + pow(r,count);
        temp /= 10;
    }
    
    if (temp2 == sum){
        printf("\nno. is Armstrong.");
    }
    else{
        printf("\nno. is not Armstrong.");
    }
    
    return 0;
}
