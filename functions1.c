#include<stdio.h>

// With Arguments With Return Value
int sum(int a,int b){                
    return a+b;
}

// With Arguments Without Return Value
void printstar(int n){
    for ( int i = 0; i < n; i++)
    {
        printf("%c",'*');
    }
    
}

// Without Arguments With Return Value
int takenumber(){
    int i;
    printf("Enter a number. ");
    scanf("%d",&i);
    return i;
}

// Without Arguments Without Return Value   
int takenumber2(){
    int i;
    printf("Enter a number. ");
    scanf("%d",&i);
    printf("Entered no. is %d",i);
}

int main()
{
    int a,b,c,d;
    a = 7;
    b = 9;
    c = sum(a,b);
    // d = takenumber();
    // printf("Sum of %d and %d is %d",a,b,c);
    // printstar(7);
    // printf("Entered number is %d",d);
    takenumber2();
    return 0;
}
