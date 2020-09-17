/*
    Problem statement :
Write a program which accepts 2 strings from user and concat N 
characters of second string after first string.Value of N should be 
accepted from user. (Implement strncat() function). 
Note : If third parameter is greater than the size of second string then 
concat whole string after first string. 

Input : “Marvellous Infosystems” 
 “Logic Building” 
 5 
Output : “Marvellous Infosystems Logic”
 */

#include<stdio.h>

void StrcatXX(char *Src, char *Dest, int iNo)
{
	int icnt=0;
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    
    // Travel the Dest string till the '\0'
    while(*Src != '\0')    
    {
        Src++;                
    }
        
    *Src = ' ';
	
	Src ++;
   
    while(*Dest != '\0' && (icnt != iNo))
   {
      *Src = *Dest; 
       Src++;
       Dest++;
	   icnt++;
   }
   
  
    *Dest = '\0';
    

}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
	int iNo =0;
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
	
	 printf("Please enter number\n");
    scanf("%d",&iNo);
    
        
    StrcatXX(arr,brr, iNo);       // StrcpyX(arr,brr);
    
    printf("String after concatination %s\n",arr);
    
    return 0;
}






























