

/* ---------------------------- Singly Circular Linkedlist.---------------------*/


#include<stdio.h>
#include<stdlib.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node * PNODE;
typedef struct node ** PPNODE;

void Display(PNODE Head, PNODE Tail)
{
    if((Head == NULL) && (Tail == NULL))
    {
        return;
    }
    
    do
    {
        printf("|%d|<->",Head->data);
        Head = Head->next;
    }while(Head!= Tail->next);
}

int Count(PNODE Head, PNODE Tail)
{
    int iCnt = 0;
    
    if((Head == NULL) && (Tail == NULL))
    {
        return 0;
    }
    
    do
    {
        iCnt++;
        Head = Head->next;
    }while(Head!= Tail->next);
    
    return iCnt;
}

void InsertFirst(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        newn->next = *Head;
        *Head = newn;
    }
    (*Tail)->next = *Head;
}

void InsertLast(PPNODE Head, PPNODE Tail, int value)
{
    PNODE newn = NULL;
    newn = (PNODE)malloc(sizeof(NODE));
    newn->data = value;
    newn->next = NULL;
    
    if((*Head == NULL) && (*Tail == NULL))
    {
        *Head = newn;
        *Tail = newn;
    }
    else
    {
        (*Tail)->next = newn;
        *Tail = newn;
    }
    (*Tail)->next = *Head;
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


void DeleteFirst(PPNODE Head, PPNODE Tail)
{
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
        *Head = (*Head)->next;
        free((*Tail)->next);
        (*Tail)->next = *Head;
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

void DeleteAtPos(PPNODE Head, int pos)
{
    int size = 0,i = 0;
    size = Count(*Head);
    PNODE temp, temp2;
    if((pos < 1) || (pos > size))
    {
        return;
    }
    if(pos == 1)
    {
        DeleteFirst(Head);
    }
    else if(pos == size)
    {
        DeleteLast(Head);
    }
    else
    {
        temp = *Head;
        for(i = 1; i< pos-1; i++)
        {
            temp = temp->next;
        }
        temp2 = temp->next;
        temp->next = temp2->next;
        free(temp2);
    }
}


int main()
{
    PNODE First = NULL;
    PNODE Last = NULL;
    
    int choice = 1, no = 0;
    
    printf("-----------------------------\n");
    printf("\nMarvellous Infosystems\n");
    printf("Singly Circular Linked List\n");
    printf("-----------------------------\n");
    
    while(choice)   // terminates when coice variable contains 0
    {
        printf("-----------------------------\n");
        printf("Enter your choice : \n");
        printf("1: Inser first\n2: Insert Last\n3: Insert at position \n4: Delete first: \n5: Delete Last\n");
        printf("6: Delete at position \n7: Display \n8: Count: \n0: Exit\n");
        scanf("%d", &choice);
        printf("-----------------------------\n");
        
        switch(choice)
        {
            case 1:
                printf("Enter number : \n");
                scanf("%d",&no);
                InsertFirst(&First, &Last,no);
                break;
                
            case 2:
                printf("Enter number : \n");
                scanf("%d",&no);
                InsertLast(&First, &Last,no);
                break;
                
            case 3 :
                printf("Enter number : \n");
                scanf("%d",&no);
                InsertAtPos(&First, &Last,no);
                break;
                
            case 4:
                DeleteFirst(&First, &Last);
                break;
                
            case 5 :
                DeleteLast(&First,&Last);
                break;
                
            case 6:
                DeleteAtPos(First, Last); 
                break;
                
            case 7:
                Display(First, Last);
                break;
                
            case 8:
                printf("Number of node are %d\n", Count(First, Last));
                break;
        }
    }
    
    return 0;
}
