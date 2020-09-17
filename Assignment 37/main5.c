/*
    Problem statement :
 Write a program which accept string from user and replace each 
occurrence of first character of each word into capital case.

 
Input : “marvellous infosystems by Piyush khairnar” 
Output : “Marvellous Infosystems By Piyush Khairnar”

 */
 
 
#include<stdio.h>

void Capf(char []); 

void Capf(char str[]) 
{ 

 int i=0;
 
 for( i=0; str[i]!= '\0'; i++)
  {
	 if( i == 0 )
	  {
		  if(str[i]>=97  && str[i] <=122 ) 
		  {
           str[i] = str[i] - 32;
         }
	  }
		
	  else if( str[i]==' ' )
	  {
		  ++i;
		  if(str[i]>=97  && str[i] <=122 ) 
		  {
           str[i] = str[i] - 32;
         }
	  }
	  else
	  {
	     if(str[i]>=65  && str[i] <=90 ) 
		  {
           str[i] = str[i] + 32;
         }
	  }
	    
  }
 
   printf("Capitalize string is: %s\n",str);
 
}


int main()
{
    char arr[30];  
   
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    Capf(arr);       
    
    
    
    return 0;
}




















