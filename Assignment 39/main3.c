
/*

 Write a program which returns addition of all element from singly linear 
linked list. 

Function Prototype :int Addition( PNODE Head); 

Input linked list : |10|->|20|->|30|->|40| 

Output : 100


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


int Addition( PNODE Head)
{
   int sum=0;
   if (!Head)
    {
      return;
	 }
	 
   nodesum(head->next, sum);
   *sum = *sum + head->data;
   
   return sum;
}



int main() 
{ 

  int no =0;

 PNODE First = NULL; 
 
 InsertFirst(&First, 101); 
 InsertFirst(&First, 51); 
 InsertFirst(&First, 21); 
 InsertFirst(&First, 11); 
 
  nodesum(&First);
 
 // Call all functions for below problem statements. 
 return 0; 
}