/*
    Problem statement :
 Write a program which accept string from user and copy that 
characters of that string into another string by converting all small 
characters into capital case. 

Input : “Marvellous Python 2” 
Output : “MARVELLOUS PYTHON 2”

 */

#include<stdio.h>

void StrcatXX(char *Src, char *Dest)
{
	
	int i = 0;
	int iStart = 0, iEnd = 0;
   char temp='\0'; 
	
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    
    
    while(src[i] != '\0')
    {
		dest[i]= src[i];
		i++;
		
    }
		
	dest[i]= '\0';
	
    while(dest[iEnd] != '\0')
    {
		iEnd++;
		
    }
	iEnd --;
	
	while(iStart < iEnd)
	 {
	 
		 
		 
	 }
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
      
    StrcatXX(arr,brr);       // StrcpyX(arr,brr);
    
    printf("String after concatination %s\n",brr);
    
    return 0;
}



























