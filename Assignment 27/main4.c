/*  Write a program which accept string from user and check whether 
it contains vowels in it or not. 

Input : “marvellous” 
Output : TRUE 

Input : “Demo” 
Output : TRUE

*/

#include<stdio.h>  
typedef int BOOL;                // New datatype as BOOLEAN treated as int

#define TRUE 1                      // User defined macro
#define FALSE 0  
    

BOOL ChkSpecial(char []);    


BOOL ChkSpecial(char ch[])      
{
	int i=0;
	
	while(str[i] != '\0')
    {
    if( ch =='a' || ch =='e' || ch =='i'  || ch =='o'  || ch =='u'  || ch =='A' || ch =='E' || ch =='I'  || ch =='O'  || ch =='U')
	{
		return TRUE;
	}
	else 
	{
		return FALSE;
	}
	
	i++;
	
	}
}



int main()          
{
   char arr[30];
   BOOL bRet = FALSE; 
	
	printf("Enter the character"); 
	scanf("%[^'\n']s",arr); 
 
	bRet = ChkSpecial(arr); 
 
	if(bRet == TRUE) 
	{ 
 printf("Owel is present "); 
 } 
 else 
 { 
 printf("Owel is not present"); 
 } 
 
 return 0;
 
 
	}