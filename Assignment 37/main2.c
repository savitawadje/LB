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

int iMax =0;
int iCnt =0; 
int i=0;
 
  
  while( str[i]!= '\0')
  {
	  
	  if( str[i]==' ' )
	  {
		 while((str[i] == ' ') && (str[i] != '\0')) 
			{ 
					i++;
					iCnt++;
			}
		   iCnt =0;

	  }
	  
	 i++;
	 iCnt++;
  }
 
 return iMax; 
 
}


int main()
{
    char arr[30];  
    int iRet =0; 
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
        
    iRet = WordCount(arr);       
    
    printf("Largest word is word %d",iRet);
    
    return 0;
}




















