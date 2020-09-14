/*   

Write a program which accept string from user and copy that 
characters of that string into another string in reverse order. 

Input : “Marvellous Python” 

Output : “nohtyP suollevraM”


 */

#include<stdio.h>

void Strcpy(char[], char[]);
 
 
void Strcpy(char src[], char dest[] )
{
    int i = 0;
	int iStart = 0, iEnd = 0;
   char temp='\0'; 
	
    
	if((src == NULL) || (dest == NULL) )
    {
        return ;
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
		 
		 temp = dest[iStart];
		 dest[iStart]= dest[iEnd];
		 dest[iEnd]=temp;
		 
		 
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
	