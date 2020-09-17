/*
    Problem statement :
Write a program which accept string from user and print below 
pattern. 
Input : “Marvellous” 
Output : 
 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s 
 m a r v e l l o u s
 
Input : “PPA” 
Output : 
 p 
 p p 
 p p a

	


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
		  
		  if(str[i]>=65  && str[i] <=90 ) 
		  {
           str[i] = str[i] + 32;
         }
	
		 
  }		 
   printf(" The pattern is here \n");
   
  for( i=0; i<=iCnt ; i++) //row
  {
	  
	  for( j=0; str[j]!= '\0' ; j++)//column
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




















