/*
    Problem statement :
Write a program which accept string from user and return length of 
largest word.
 
Input : “Marvellous Multi OS Infosystems” 
Output : 11


 */
 
 
#include<stdio.h>
int WordCount(char []); 

int WordCount(char str[]) 
{ 
 int iCnt = 0; 
 int i=0;
 
  
  for( i=0; str[i]!= '\0'; i++)
  {
	  if( str[i]==' ' )
	  {
		  iCnt++;
	  }
	  
  }
 
 
 return iCnt+1; 
 
}


int main()
{
    char arr[30];  
    int iRet =0; 
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    iRet = WordCount(arr);       
    
    printf("count of word %d",iRet);
    
    return 0;
}




















