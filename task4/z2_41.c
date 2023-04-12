#include<stdio.h>
#include<stdlib.h>
int main()
{
    int num, rem, next_mult;
    printf("Enter an int: ");
    scanf("%d" , &num);
    
    rem=num%5;
    
    if (rem == 0)
    { 
    printf ("%d is divisible by .\n", num);
            }
        
    else 
    {
    printf ("%d is divisidle by 5 .\n" , num);
    printf("The nesxt multiple of 5 is %d.\n" , next_mult); 
            }    
    
    
    
         system("pause");
    return 0; 
}
