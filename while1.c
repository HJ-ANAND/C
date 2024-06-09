#include <stdio.h>

int main()

{
    int i = 1;
    int a;
    printf("Enter a number. ");
    scanf("%d", &a);

    while (i<=a)
    {
        printf("%d\n", i);
        i += 1;
    }
    
    return 0;
}
