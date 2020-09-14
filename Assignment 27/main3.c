
/* 

Write a program which accept string from user and return 
difference between frequency of small characters and frequency of 
capital characters. 

Input : “MarvellouS” 
Output : 6 (8-2)


*/

#include<stdio.h>      

int DiffFrq( char str[] );

int DiffFrq( char str[])
{
	 int iCnt =0,iCCnt = 0, iSCnt =0, i = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))
        {
            iCCnt++;
        }
		
		if((str[i] >= 'a') && (str[i] <= 'z'))
        {
            iSCnt++;
        }
        
        i++;
    }
    iCnt =  iCCnt - iSCnt;
    return iCnt;
}



int main()          
{
	char arr[100];
    int iRet = 0;
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
    
    iRet = DiffFrq(arr);
    
    printf("Total difference between frequency of small characters and frequency of capital characters.  %d\n",iRet);
    
    return 0;
	
	
	}