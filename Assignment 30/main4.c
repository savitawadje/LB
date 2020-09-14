/*   Reverse string
   
  Write a program which accept string from user and copy small 
characters of that string into another string. 



Input : “Marvellous multi OS” 
Output : “arvellous multi”

 */

#include<stdio.h>

void RevString(char[]);
 
 
void RevString(char str[])
{
    int iStart = 0, iEnd = 0;
	char temp='\0'; 
    
    if(str == NULL)
    {
        return ;
    }
   
    while(str[iEnd] != '\0')
    {
		iEnd++;
		
    }
	iEnd --;
	
	while(iStart < iEnd)
	 {
		 
		 temp = str[iStart];
		 str[iStart]= str[iEnd];
		 str[iEnd]=temp;
		 
		 
		 iStart++;
		 iEnd--;
	 }


   
}



int main()
{
	char arr[30];
	
	
	printf(" enter the string ");
	scanf("%[^'\n']s",arr);
	
	
	RevString(arr);
    
    printf(" Reverse of string %s\n",arr);
    
    return 0;
	
}
	