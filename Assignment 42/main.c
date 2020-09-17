

/* ----------------------------Doubly Circular Linkedlist---------------------*/


#include<stdio.h>
#include<stdlib.h>

struct Node
{
    int data;
    struct Node *next;
    struct Node *prev;
};

typedef struct Node NODE;
typedef struct Node * PNODE;
typedef struct Node ** PPNODE;

void Display(PNODE Head)
{
    while(Head != NULL)
    {
        printf("| %d |<=> ",Head->data);
        Head = Head->next;
    }
    printf("NULL\n");
}

int Count(struct Node * Head )  // int Count(PNODE Head)
{
    int iCnt = 0;
    
    while(Head != NULL)
    {
        iCnt++;
        Head = Head -> next;
    }
    
    return iCnt;
}

void InsertFirst(PPNODE Head, int value)
{
    PNODE newn = NULL;
    newn= (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;              // new
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        newn->next = *Head;
        (*Head)->prev = newn;     // new
        *Head = newn;
    }
}

void InserLast(struct Node ** Head, int value)
{
    // PNODe newn = NULL;
    struct Node * newn = NULL;
    // newn = (PNODE) malloc(sizeof(NODE));
    newn = (struct Node *)malloc(sizeof(struct Node));
    // PNODE temp = *Head;
    struct Node * temp = *Head;
    
    newn->data = value;
    newn->next = NULL;
    newn->prev = NULL;
    
    if(*Head == NULL)
    {
        *Head = newn;
    }
    else
    {
        while(temp->next != NULL)
        {
            temp = temp->next;
        }
        
        temp->next = newn;
        newn->prev = temp;              // new
    }
}

void InsertAtPos(PPNODE Head, int value, int pos)
{
    int size = 0, i = 0;
    PNODE temp = *Head;
    PNODE newn = NULL;
    
    size = Count(*Head);
    
    if((pos < 1) || (pos > (size + 1)))       // Invalid Position
    {
        return;
    }
    else if(pos == 1)        // First position
    {
        InsertFirst(Head, value);
    }
    else if(pos == size + 1)    // Last position
    {
        InsertLast(Head, value);
    }
    else
    {
        newn= (PNODE)malloc(sizeof(NODE));
        newn->data = value;
        
        for(i = 1; i< pos-1; i++)
        {
            temp = temp->next;
        }
        
        newn->next = temp->next;
        temp->next = newn;
    }
}

void DeleteFirst(PPNODE Head)
{
    if(*Head == NULL)           // Empty LL
    {
        return;
    }
    else if((*Head)->next  == NULL)     // Single node
    {
        free(*Head);
        *Head = NULL;
    }
    else                            // More than one node
    {
        (*Head) = (*Head) -> next;
          free((*Head) -> prev);
        (*Head) -> prev = NULL;
    }
}

void DeleteLast(PPNODE Head)
{
    PNODE temp = *Head;
    
    if(*Head == NULL)           // Empty LL
    {
        return;
    }
    else if((*Head)->next  == NULL)     // Single node
    {
        free(*Head);
        *Head = NULL;
    }
    else                            // More than one node
    {
        while(temp->next->next != NULL)
        {
            temp = temp->next;
        }
        
        free(temp->next);
        temp->next = NULL;
        
    }
}


void DeleteLast(PPNODE Head, PPNODE Tail)
{
    PNODE temp = *Head;
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        return;
    }
    if(*Head == *Tail)
    {
        free(*Head);
        *Head = NULL;
        *Tail = NULL;
        return;
    }
    else
    {
        while(temp->next != *Tail)
        {
            temp = temp->next;
        }
        
        free(*Tail);
        *Tail = temp;
        (*Tail)->next = *Head;
    }
}

int main()
{
    PNODE First = NULL; 
    PNODE Last = NULL; // Nawin 

    int no = 0, iRet = 0;
    
    printf("\nEnter number : ");
    scanf("%d",&no);
    InsertFirst(&First, &Last,no);
    
    printf("\nEnter number : ");
    scanf("%d",&no);
    InsertFirst(&First, &Last,no);
    
    printf("\nEnter number : ");
    scanf("%d",&no);
    InsertAtPos(&First, &Last,no);
    
	printf("Enter number : \n");
    scanf("%d",&no);
    InsertAtPos(&First, &Last, no);
	
	DeleteFirst(&First, &Last);
	
	DeleteLast(&First,&Last);
	 
    Display(First);
    
    iRet = Count(First);
    
    printf("Number of nodes are : %d",iRet);
    
    return 0;
}
