/*
Problem statement :
Write a program which accept one number from user and print that number of 
even numbers on screen.
 
 Input : 7        Output :   2    4   6   8   10  12  14
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

int main() 
{ 
 int iValue = 0; 
 
 printf("Enter number "); 
 scanf("%d",&iValue); 
 
 PrintEven(iValue); 
 
 return 0; 
}















