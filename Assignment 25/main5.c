/*
 Problem statement :
 Accept division of student from user and depends on the division 
display exam timing. There are 4 divisions in school as A,B,C,D. Exam 
of division A at 7 AM, B at 8.30 AM, C at 9.20 AM and D at 10.30 AM. 

(Application should be case insensitive) 
Input : C 
Output : Your exam at 9.20 AM 

Input : d 
Output : Your exam at 10.30 AM

*/


#include<stdio.h>
typedef int BOOL;                // New datatype as BOOLEAN treated as int

#define TRUE 1                      // User defined macro
#define FALSE 0  

BOOL ChkAlpha(char);    


BOOL ChkAlpha(char ch)      
{
    if( ch >=65 && ch<= 68 )
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
}


int main()
{
     char cValue = '\0'; 
	BOOL bRet = FALSE; 
	
	printf("Enter the character \n"); 
    scanf("%c",&cValue); 
    bRet = ChkAlpha(cValue); 
	
 if(bRet == TRUE) 
 { 
  printf("It is  Captal Character"); 
 } 
 
  switch (bRet)
     {
          case 1:
             printf("Case1 ");
             break;
          case 2:
             printf("Case2 ");
             break;
          case 3:
             printf("Case3 ");
             break;
          case 4:
             printf("Case4 ");
             break;
          default:
             printf("Default ");
     }
 else 
 { 
 printf("It is not a Captal Character"); 
 } 
 
 return 0;
}






