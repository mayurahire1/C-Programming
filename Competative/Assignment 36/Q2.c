#include <stdio.h>
#include <stdlib.h>
#include <stdbool.h>

struct node
{
    int data;
    struct node *next;
};

typedef struct node NODE;
typedef struct node *PNODE;
typedef struct node **PPNODE;

/////////////////////////////////////////////////////
//
//  Function Name : FirstOccur
//  Input         : PNODE, int
//  Output        : int
//  Description   : Return Position of first occurence of the given number.
//
//////////////////////////////////////////////////////
int FirstOccur(PNODE first, int iNo)
{
    int iPos = 0;
    
    iPos = 1;
    while(first != NULL)
    {
        if(first->data == iNo)
        {
            break;
        }
        first = first->next;
        iPos++;
    }
    return iPos;
}

/////////////////////////////////////////////////////
//
//  Function Name : Display
//  Input         : PNODE
//  Output        : void
//  Description   : Display all the elements in the LL
//
//////////////////////////////////////////////////////
void Display(PNODE first)
{
    while (first != NULL)
    {
        printf("%d -> ", first->data);
        first = first->next;
    }
    printf("NULL\n");
}

/////////////////////////////////////////////////////
//
//  Function Name : InsertLast
//  Input         : PPNODE, int
//  Output        : void
//  Description   : Insert node at the last Position
//
//////////////////////////////////////////////////////
void InsertLast(PPNODE first, int iNo)
{
    PNODE temp = NULL;
    PNODE newn = NULL;

    newn = (PNODE)malloc(sizeof(NODE));

    newn->data = iNo;
    newn->next = NULL;

    if (*first == NULL)
    {
        *first = newn;
    }
    else
    {
        temp = *first;

        while (temp->next != NULL)
        {
            temp = temp->next;
        }
        temp->next = newn;
    }
}

int main()
{
    PNODE head = NULL;
    int iRet = 0;

    InsertLast(&head, 111);
    InsertLast(&head, 22);
    InsertLast(&head, 11);
    InsertLast(&head, 94);
    InsertLast(&head, 11);

    Display(head);

    iRet = FirstOccur(head, 11);

    printf("First occurence of the number is : %d ", iRet);

    return 0;
}