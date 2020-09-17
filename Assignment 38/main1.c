/*
    Problem statement :
.Write a program which accept string from user and print below 
pattern.

 
Input : “PPA” 
Output : 
 P P A 
 P P A 
 P P A

 */
 
 
#include<stdio.h>

void Pattern(char []); 

void Pattern(char str[]) 
{ 
 int iCnt = 0; 
 int i=0, j=0;
 
  
  for( i=0; str[i]!= '\0'; i++)
  {
		  iCnt++;
	   
  }
   printf(" The pattern is here \n");
  for( i=0; i<= iCnt-1; i++)
  {
	  
	  for( j=0; str[j]!= '\0' j<=i; j++)
	  {
		 printf("\t %c", str[j]);
	  }
	  
	   printf("\n");
  }
   
 

 
}


int main()
{
    char arr[30];  
   
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    Pattern(arr);       
    
    
    
    return 0;
}




















