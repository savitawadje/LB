
/*
 Write a program which return smallest element from singly linear linked 
list. 

Function Prototype :int Minimum( PNODE Head); 

Input linked list : |110|->|230|->|20|->|240|->|640| 

Output : 20

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


void minNode (PNODE Head) 
{  
    struct node *PNODE = head;  
    int min;  
      
    if(Head == NULL) {  
        printf("empty \n");  
    }  
    else {  
        
        min = Head->data;  
          
        while(PNODE != NULL){  
             
             if(min > PNODE->data) {  
                 min = PNODE->data;  
             }  
             PNODE= PNODE->next;  
        }          
        printf("Minimum value node in the list: %d\n", min);  
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
 
  minNode(&First);
 
 // Call all functions for below problem statements. 
 return 0; 
}