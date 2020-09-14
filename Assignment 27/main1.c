/* 
 Write a program which accept string from user and count number of 
capital characters. 
Input : “Marvellous Multi OS” 
Output : 4

*/

#include<stdio.h>      

int StrlenCap( char str[] );

int StrlenCap( char str[])
{
	 int iCnt = 0, i = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
        if((str[i] >= 'A') && (str[i] <= 'Z'))
        {
            iCnt++;
        }
        
        i++;
    }
    
    return iCnt;
}



int main()          
{
	char arr[100];
    int iRet = 0;
    
    printf("Please enter the string\n");
    scanf("%[^'\n']s",arr);
    
    iRet = StrlenCap(arr);
    
    printf("Total number of capital characters are %d\n",iRet);
    
    return 0;
	
	
	}