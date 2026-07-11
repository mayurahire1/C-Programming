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
//  Function Name : CountGreater
//  Input         : PNODE, int
//  Output        : int
//  Description   : Count elements greater then given number.
//
//////////////////////////////////////////////////////
int CountGreater(PNODE first, int iNo)
{
    int iCount = 0;

    while(first != NULL)
    {
        if(first->data > iNo)
        {
            iCount++;
        }
        first = first->next;
    }
    return iCount;
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

    iRet = CountGreater(head, 22);

    printf("Elements greater then the given number are : %d ", iRet);

    return 0;
}