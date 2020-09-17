
/*

Write a program which search last occurrence of particular element from 
singly linear linked list. 


Function should return position at which element is found. 

Function Prototype :int SearchLastOcc( PNODE Head, int no ); 

Input linked list : |10|->|20|->|30|->|40|->|50|->|30|->|70| 
Input element : 30

Output : 6


*/
#define TRUE 1 
#define FALSE 0 
typedef int BOOL; 

struct node 
{ 
 int Data; 
 node *Next; 
}; 
typedef struct node NODE; 
typedef struct node* PNODE; 
typedef struct node** PPNODE; 

void InsertFirst(PPNODE Head int no ) 
{ 
 PNODE newn = NULL; 
 
 newn = (PNODE)malloc(sizeof(NODE)); 
 
 newn->Next = NULL; 
 newn->Data = no; 
 if (*Head == NULL) 
 { 
 *Head = newn; 
 } 
 else 
 { 
 newn -> Next = *Head; 
 *Head = newn; 
 
 } 
} 


int SearchLastOccOcc( PNODE Head , int no )
{
	while (head != NULL)
    {
        if (head->Data == no)
        {
            printf("no found\n", no);
            return;
        }
		else
		{
		   printf("no not found\n");
		}
        head = head->next;
    }
   
	
	
}
int main() 
{ 

  int no =0;

 PNODE First = NULL; 
 
 InsertFirst(&First, 101); 
 InsertFirst(&First, 51); 
 InsertFirst(&First, 21); 
 InsertFirst(&First, 11); 
 
 SearchFirstOcc(&First,no)
 
 // Call all functions for below problem statements. 
 return 0; 
}