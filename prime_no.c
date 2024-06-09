#include<stdio.h>
#include<math.h>

// Generate the prime numbers between the given upper and lower bounds (upper bound > lower bound)

int main()
{
    int n1, n2, no;
    printf("\nEnter 1st number. ");
    scanf("%d",&n1);
    printf("\nEnter 2nd number. ");
    scanf("%d",&n2);

    if (n2<n1) {
        for (int i = n2; i < n1; i++){
            for (int j = 2; j < i-1; j++){
                if (i%j == 0){
                    no = 1;
                    break;
                }
                else{
                    no = 0;
                }
                
            }

            if (no == 0){
                printf("\n%d is prime", i);
            }
        }
        if (no == 1){
            printf("\nNo prime numbers between %d and %d",n1,n2);
        }
        
        
    }
    else if (n1<n2) {
        for (int i = n1; i < n2; i++){
            for (int j = 2; j < i-1; j++){
                if (i%j == 0) {
                    no = 1;
                    break;
                }
                else{
                    no = 0;
                }
                
            }
            if (no == 0){
                printf("\n%d is prime", i);
            }
        }
        if (no == 1) {
            printf("\nNo prime numbers between %d and %d",n1,n2);
        }
        
    }
    else{
        for (int i = 2; i < n1-1; i++){
            if (n1%i == 0){
                no = 1;
                break;
            }
            else{
                no = 0;
            }
            
        }
        if (no == 0){
            printf("\nNumber is prime.");
        }
        else{
            printf("\nNumber is not prime.");
        }
    }
    
    return 0;
}
