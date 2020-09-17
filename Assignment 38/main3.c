/*
    Problem statement :
.Write a program which accept string from user and print below 
pattern. 
Input : “Marvellous” 
Output : 
 M 
 M a 
 M a r 
 M a r v 
 M a r v e 
 M a r v e l 
 M a r v e l l 
 M a r v e l l o 
 M a r v e l l o u 
 M a r v e l l o u s

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
  for( i=0;str[i]!= '\0' ; i++) //row
  {
	  
	  for( j=0; j<=i ; j++)//column
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




















