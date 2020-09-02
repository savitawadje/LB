/*
Problem statement :
Write a program which accept number from user and return difference between 
summation of all its factors and non factors.
 
Input : 12 
Output : -34 (16 - 50)
*/

/*
    Algorith :
 
    START
            Accept number from user and store into the variable no
 
            Craete one counter as cnt and initialise to 1
 
            Iterate till the counter is less than the number ie no
                check whether the cnt divides the no completetly
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
	int iRet =0;
    
    printf("Enter number\n");
    scanf("%d",&iValue);
    
    iRet = FactDiff(iValue); 
    printf("%d",iRet);     // Function call    Dukanat ja	
    
    return 0;
}















