/*
 Write a program which accept name from user and print that name.
 */

#include "Header.h"

int main()      // Entry point function
{
	
	char Name[30] ;
    printf(" Enter your name /n");
	scanf("%[^\n]*c",Name); 
    
    printf("Enter your name %s ", Name);
    
    return 0;
}
