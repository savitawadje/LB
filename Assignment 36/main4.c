/*
    Problem statement :
Accept sing from user and reverse the contents of that string by 
toggling the case. 
Input : “aCBdef” 
Output : “FEDcbA”
 */

#include<stdio.h>

void StrRevTogX(char *str) 
{ 
   
 char temp; 
 char *first,*last; 
 first = str; 
 last = str;
  
  /*
  while(*str= '\0')
  {
		 
		 if(*str>=65  && *str <=90 ) 
		  {
           *str = *str + 32;
         }
		 
		 else if (*str>=97  && *str <=122 ) 
		 {
           *str = *str - 32;
         }
	   
	    str++;
		 
  }
 
  */ 
  
  
 while(*last != '\0') 
 { 
 last++; 
 }
 
 last--;
 
 while(first <= last) 
 { 
	 temp = *last;
	 *last = *first;
	 *first = temp;
	 
	 first++; 
	 last--;
 }
 
 printf("String after  %s\n",str);
 
}

int main() 
{ 
	char arr[50]; 
 
    printf("Please enter first string\n");
    scanf("%[^'\n']s",arr);
	
	StrRevTogX(arr); 
 
    
    return 0; 
	
}






























