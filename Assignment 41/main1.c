
/*

Write a program which displays all elements which are perfect from singly 
linear linked list.
 
Function Prototype :int DisplayPerfect( PNODE Head); 

Input linked list : |11|->|28|->|17|->|41|->|6|->|89| 
Output : 6 28



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

int DisplayPerfect( PNODE Head)
{
	int num = 0;
    int sum = 0;
	int i = 0;
	
	while (Head != NULL)
    {
        if ( num % Head == 0)
        {
          sum = sum + head->data; 
        }
		
        head = head->next;
    }
	
	
	
}


int main() 
{ 
 PNODE First = NULL; 
 
 InsertFirst(&First, 101); 
 InsertFirst(&First, 51); 
 InsertFirst(&First, 21); 
 InsertFirst(&First, 11); 
 
  DisplayPerfect(&First);
 
 // Call all functions for below problem statements. 
 return 0; 
}