#include <stdio.h>

int main()

{
    int age, marks;
    printf("Enter your age. ");
    scanf("%d", &age);

    printf("Enter your marks. ");
    scanf("%d", &marks);

    // *************** First switch ****************

    switch (age){
    case 3:
        printf("Age is 3.\n");

        // ***************** Second Switch ****************

        switch (marks){
        case 50:
            printf("Your marks is 50. ");
            break;
        
        default:
        printf("Your marks is not 50");
            break;
        } // *************** Ends here *****************
        break;
    case 13:
        printf("Age is 13");
        break;
    case 23:
        printf("Age is 23");
        break;
    
    default:
        printf("Age is not 3, 13 or 23");
    }

    return 0;
}
