
/* 
  Write a program which accept string from user and count number of 
small characters. 
Input : “Marvellous” 
Output : 9

*/

#include<stdio.h>      

int StrlenSmall( char str[] );

int StrlenSmall( char str[])
{
	 int iCnt = 0, i = 0;
    
    if(str == NULL)
    {
        return -1;
    }
    
    while(str[i] != '\0')
    {
        if((str[i] >= 'a') && (str[i] <= 'z'))
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
    
    iRet = StrlenSmall(arr);
    
    printf("Total number of Small characters are %d\n",iRet);
    
    return 0;
	
	
	}