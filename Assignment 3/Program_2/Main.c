/*
Problem statement :
 Write a program which accept number from user and print even factors of that 
number.
 
 Input : 24        Output :   1 2 4 6 8 12
*/
/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
 
            Iterate till the counter is less than the number ie no
                check whether the cnt divides the no completetly
                    if cnt is divide by 2 return o (i. e. even)
                        then display the counter
                incremnet the value of counter by 1
 
            continue to the iteration
    END
*/

#include "Header.h"

int main()          // Entry point function
{
    int iValue = 0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    DisplayFactor(iValue);      // Function call    Dukanat ja	
    
    return 0;
}















