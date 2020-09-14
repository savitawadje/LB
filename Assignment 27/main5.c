/*   
Write a program which accept string from user and display it inn 
reverse order. 
Input : “MarvellouS” 
Output : “SuollevraM”

 */

#include<stdio.h>

void StrRev(char[]);
 
 
void StrRev(char ch[] )
{
   int iStart = 0, 
   iEnd = 0;
   vv char temp='\0'; 
    
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
	char brr[30];
	
	
	printf("Enter the string ");
	scanf("%[^'\n']s",arr);
	
	
	Strcpy(arr, brr);
    
   
	printf(" Reverse of string %s\n",brr);
    
    
    return 0;
	
}
	