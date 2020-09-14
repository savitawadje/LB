/*
    Problem statement :
  Write a program which 2 strings from user and concat second string 
after first string. (Implement strcat() function). 


Input : “Marvellous Infosystems” 
       “Logic Building” 
Output : “Marvellous Infosystems Logic Building”
 */

#include<stdio.h>

void StrcatXX(char *Src, char *Dest)
{
    if(
       (Src == NULL) ||     // If source string is NULL
       (Dest == NULL)       // If destination string is NULL
       )
    {
        return;
    }
    
    // Travel the Dest string till the '\0'
    while(*Dest != '\0')    // Junya wahichya shewati ja
    {
        Dest++;                // Pana palata
    }
        
    *Dest = ' ';        // Add the space explictely
    
    Dest++;
   
    while(*Src != '\0')
   {
       *Dest = *Src;
       Src++;
       Dest++;
   }
    
    *Dest = '\0';
}

int main()
{
    char arr[30] = {'\0'};   // Bharaleli book
    char brr[30] = {'\0'};   // Blank book
    
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
    
    printf("Please enter second string\n");
    scanf(" %[^'\n']s",brr);
        
    StrcatXX(arr,brr);       // StrcpyX(arr,brr);
    
    printf("String after concatination %s\n",brr);
    
    return 0;
}






























