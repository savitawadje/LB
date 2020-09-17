//5. Accept string from user and check whether the string is palindrome or not without considering its case.

#include "Header.h"

int main()          
{
	char arr[50];
	BOOL bRet = FALSE;
	
	printf("Enter String 1\n");
	scanf(" %[^'\n']s",arr);
	bRet = ChkPalindrome(arr);
	
	if(bRet == TRUE){
		printf("TRUE");
		}
	else if (bRet == -1){
		printf("Error Input");
	}
	else{
		printf("FALSE");
	}	
	return 0;	

}
