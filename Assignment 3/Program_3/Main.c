/*
Problem statement :
 Accept number from user and display Even factors of that number.
 
 Input : 12         Output :     2   3   4   6
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
 
            Iterate till the counter is less than the number ie no
                check whether the cnt divides the no completetly and check whether no is even or not
                    if yes
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
    
    DisplayEvenFactor(iValue);      // Function call    Dukanat ja	
    
    return 0;
}















