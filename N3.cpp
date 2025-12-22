#include <stdio.h>
int main (void) 
{
    long num;
    int digit;
    
    while (1)
    {
        printf("Enter a number: ");
        scanf ("%d", &num);
        if (num == 0)
    	    break;
        while (num > 0)
		{		  
            digit = num % 10;
            printf("%d\n", digit);
            num = num / 10;
        } 
    }
    return 0;
}    
