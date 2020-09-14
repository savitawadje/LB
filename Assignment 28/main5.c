/*
    Problem statement :
 Write a program which accept string from user and count number of 
white spaces 
Input : “MarvellouS” 
Output : 0 
Input : “MarvellouS Infosystems” 
Output : 1
 */

#include<stdio.h>

int DigitCount(char []);


int DigitCount(char str[])
{
	int iCnt = 0, i=0;
	 
    while(str[i]!='\0')
    {
        if(str[i] == ' ')
        {
           iCnt++;
        }
		
		i++;
       
    }
	
	return  iCnt;
}

int main()
{
    char arr[30];
	int  iRet = 0;
    
    printf("Please enter string\n");
    scanf("%[^'\n']s",arr);
    
	iRet= DigitCount(arr);
	printf("Enter the number of digit\n", iRet);
    
    
    return 0;
}






























