/*
    Problem statement :
Write a program which accept string from user and print below 
pattern. 
Input : “Marvellous” 
Output : 
M A R V E L L O U S 
 M A R V E L L O U S 
 M A R V E L L O U S 
 M A R V E L L O U S 
 M A R V E L L O U S 
 M A R V E L L O U S
 M A R V E L L O U S 
 M A R V E L L O U S 
 M A R V E L L O U S 
 M A R V E L L O U S

	 
	if(str[i] >= 'a' && str[i] <= 'z')
      {
         str[i] = str[i] - 32;
		 printf("%s" , ch);
		 
      }


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
		  
		  if(str[i]>=97  && str[i] <=122 ) 
		  {
           str[i] = str[i] - 32;
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




















