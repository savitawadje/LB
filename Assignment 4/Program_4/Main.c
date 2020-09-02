/*
Problem statement :
 Write a program which accept number from user and return summation of all its 
non factors.
 
Input : 12 
Output : 50
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
    
    iRet = SumNonFact(iValue); 
    printf("%d",iRet);     // Function call    Dukanat ja	
    
    return 0;
}















