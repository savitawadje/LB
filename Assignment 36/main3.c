/*
    Problem statement :
   Write a program which 2 strings from user and check whether first 
N contents of two strings are equal or not. (Implement strcmp() 
function). 
Note : If third parameter is greater than the size of second string then 
concat whole string after first string. 
Input : “Marvellous Infosystems” 
 “Marvellous Logic Building” 
 10 
Output : TRUE
 */

#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0


BOOL StrCmpX(char src[], char dest[], int iCnt) 
{ 
	int i =0;
	int destlenght =0;
	
	
	while(dest[i] != '\0') 
	{ 
	  destlenght++;
	  i++;
	} 
 
	if( destlenght > iCnt ) 
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
    BOOL bret = FALSE; 
	
    char arr[50]; 
    char brr[50];
	int iNo =0;
	
	 printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
	
	 printf("Please enter number\n");
    scanf("%d",&iNo);
 
    bret = StrCmpX(arr,brr,iNo); 
 
    if(bret == TRUE) 
      { 
		printf("string2 is greater than string"); 
	} 
	else 
	{ 
		printf("string2 is not greater than string");
	} 
	
	return 0;
	
}






























