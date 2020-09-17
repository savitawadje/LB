/*
    Problem statement :
  Write a program which 2 strings from user and check whether 
contents of two strings are equal or not. (Implement strcmp() 
function). 
Input : “Marvellous Infosystems” 
 “Marvellous Infosystems” 
Output : TRUE
 */

#include<stdio.h>
typedef int BOOL;
# define TRUE 1
#define FALSE 0


BOOL StrCmpX(char src[], char dest[]) 
{ 
	int i =0, icount =0;
	
	while((src[i] != '\0') && (dest[i] != '\0')) 
	{ 
	  if( src[i] != dest [i])
	  {
		  icount =1;
		  break;
	  }
	  i++;
	} 
 
	if( icount == 0 ) 
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
	
	 printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
 
    bret = StrCmpX(arr,brr); 
 
    if(bret == TRUE) 
      { 
		printf("Both strings are equal"); 
	} 
	else 
	{ 
		printf("Both strings are not equal");
	} 
	
	return 0;
	
}






























