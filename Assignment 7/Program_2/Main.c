/*
Problem statement :
Write a program which accept number from user and return the count of odd 
digits.

 
 */

/*
    Algorithm:
 
    START
        Accept one number as no
        Create one counter as cnt and initialise to 0
 
        Iterate till the no is not equal to 0
            Perform the mod operation to seperate out the digit
            if the digit is even then
                increament the counter by 1
            divide the no by 10 and store the result in no itself
        Continue
 
        return the value of counter
    END
 
 */

#include "Header.h"

// Entry point function
int main()
{
    int iValue = 0;             
    int iRet = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = CountOddDigits(iValue);
    
    printf("Number of odd digits are : %d\n",iRet);
    
    return 0;       // Sucess to OS
}














/*
Input : 1547

1547 / 10   ->      154         1
154 / 10    ->       15           2
15 / 10      ->        1            3
1 / 10          ->      0            4
*/
