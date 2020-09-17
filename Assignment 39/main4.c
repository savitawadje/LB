
/*
Write a program which return largest element from singly linear linked 
list.
 
Function Prototype :int Maximum( PNODE Head); 

Input linked list : |110|->|230|->|320|->|240| 

Output : 320


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


void maxNode(PNODE Head)
 { 
 
    struct node *PNODE = Head;  
    int max;  
      
    if(Head == NULL) {  
        printf(" empty \n");  
    }  
    else 
	{  
      
        max = Head->data;  
          
        while(PNODE != NULL){  
             
             if(max < PNODE->data) {  
                 max = PNODE->data;  
             }  
             PNODE = PNODE->next;  
        }               
        printf("Maximum value node in the list: %d\n", max);  
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
 
  maxNode(&First);
 
 // Call all functions for below problem statements. 
 return 0; 
}