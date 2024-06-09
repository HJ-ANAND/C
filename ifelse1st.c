#include <stdio.h>

int main()

{
    int age;

    printf("Enter the age. ");
    scanf("%d", &age);

    if (age>=18){
        printf("The person can vote.");
    }
    else{
        printf("The person can't vote.");
    }
    
    return 0;
}
